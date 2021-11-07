<?		 
	require("includes/config/bd_config.inc");
	require("includes/valForms.inc");
	require("includes/textFormater.inc");
	require("includes/config/forum_config.inc");		 	 
	require("includes/objetos.inc");
	require("includes/acciones.inc");	
	
	session_start();
	
	// Eliminar la pagina de instalacion
	if (file_exists("install.php"))
  {   	 
   	 unlink("install.php");   	 
  }
	
	$act = $_GET["accion"];	
	// Conectamos a la base de datos
	$gesBD = new GestionBD($bd_host, $bd_user, base64_decode($bd_passwd), $bd_name); 
				
  // Guardamos el contenido de la cookie en sesi�n si no hay sesi�n
	getCookieData($gesBD);				
				
	if ($gesBD->connect())
	{	  
			// Creamos la accion a ejecutar pasandole la accion y la conexion
			$ac = new Accion();
			$accion = $ac->getAccion($admin_email, $forum_title, $forum_path, $act);			
					
			// Ejecutamos la accion a realizar		
			if ($accion->ejecutar($gesBD))
			{	 
		 		  $modelo["modelo"] = $accion->getModelo();
			}
			else
			{			    
			    // Errores del servidor o de c�digo (que esperemos que no ^^Uu)
					$modelo["error"] = $accion->getError();											 		
			}
			
			$vista = $accion->getVista();
			
			if ($act == "Navigate")
			{
			    $act = $accion->getAct();
			    // registrar accion en el log			
  	      registerLog($gesBD, $act);
			}
			else
			{
			    // registrar accion en el log			
  	      registerLog($gesBD, $act);
  	      
  	      // Control del trafico de usuarios
					$trafic = new ShowConnectedUsers($admin_email, $forum_title, $forum_path, $act);
  	      
			    if ($trafic->ejecutar($gesBD))			
					{			
					   $modelo["trafico"] = $trafic->getModelo();							 					
					}			
					else			
					{			
					    $modelo["errortrafico"] = $trafic->getError();			
					}	
			}
			
			// Actualizamos los datos del usuario grabado en sesi�n
			if (isset($_SESSION["haySesion"]))
	    {	        
	        $u = unserialize($_SESSION["userlog"]);	  
					$queryU = "SELECT * FROM phpforum_users WHERE id_user LIKE ".$u->getId_user();      
	        if ($gesBD->selectUser($queryU))
	        {	            
	            $u = $gesBD->getObj();
	            $u->setIp($_SERVER["REMOTE_ADDR"]);
	            $_SESSION["userlog"] = serialize($u);
					}
			}
			
 		  // cargamos la vista	 	 
 		  include("templates/".$template."/str/".$vista); 		  
					
			$gesBD->disconnect();	
	}	
	else
	{	   			
			session_unset();
			session_destroy();
			// cargamos la vista y mandamos el error
			include("templates/".$template."/str/error.str");
	}
?>