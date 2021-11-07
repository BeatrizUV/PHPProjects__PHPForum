<?		 
	require("../includes/config/bd_config.inc");
	require("../includes/valForms.inc");
	require("../includes/textFormater.inc");
	require("../includes/config/forum_config.inc");		 	 
	require("includes/objetos.inc");
	require("includes/admin_accion.obj");
	require("includes/acciones.inc");
	 
	session_start();	
	$_admin = "si"; 	
	
	// Eliminar la pagina de instalacion
	if (file_exists("install.php"))
  {   	 
   	 unlink("install.php");   	 
  }
	
	// Comprobamos si hay sesión iniciada	
	session_start();
	
	$act = $_GET["accion"];	

	// Conectamos a la base de datos
	$gesBD = new GestionBD($bd_host, $bd_user, base64_decode($bd_passwd), $bd_name); 
				
	// Guardamos el contenido de la cookie en sesión si no hay sesión
	getCookieData($gesBD);				
				
	if ($gesBD->connect())
	{	  
			// Creamos la accion a ejecutar pasandole la accion y la conexion
			$ac = new AdminAccion();
			$accion = $ac->getAccion($admin_email, $forum_title, $forum_path, $act);			
					
			// Ejecutamos la accion a realizar		
			if ($accion->ejecutar($gesBD))
			{	 
		 		  $modelo["modelo"] = $accion->getModelo();
			}
			else
			{			    
			    // Errores del servidor o de código (que esperemos que no ^^Uu)
					$modelo["error"] = $accion->getError();											 		
			}
			
			$vista = $accion->getVista();
			 
	    // registrar accion en el log			
      registerLog($gesBD, "admin");
			
			
			// Actualizamos los datos del usuario grabado en sesión
			if (isset($_SESSION["haySesion"]))
	    {	        
	        $u = unserialize($_SESSION["userlog"]);	  
					$queryU = "SELECT * FROM phpforum_users WHERE id_user LIKE ".$u->getId_user();      
	        if ($gesBD->selectUser($queryU))
	        {	            
	            $_SESSION["userlog"] = serialize($gesBD->getObj());
					}
			}
			
 		  // cargamos la vista	 	 
 		  include("../templates/".$template."/str/".$vista); 		  
					
			$gesBD->disconnect();	
	}	
	else
	{	    
			session_unset();
			session_destroy();
			// cargamos la vista y mandamos el error
			include("../templates/".$template."/str/error.str");
	}
?>