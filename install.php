<?  
  include("includes/valForms.inc");
  include("includes/acciones.inc");
  include("includes/objetos.inc");  
  include("includes/textFormater.inc");
  
  $bd_host = $_REQUEST["host"];
  $bd_name = $_REQUEST["name"];
  $bd_user = $_REQUEST["user"];
  $bd_passwd = $_REQUEST["passwd"];  
  $forum_title = $_REQUEST["ftitle"];
  $admin_login = $_REQUEST["login"];
  $admin_clave = $_REQUEST["clave"];
  $admin_clave2 = $_REQUEST["clave2"];
  $admin_email = $_REQUEST["email"]; 
  $erroresConn = null;
  $erroresForm = null; 
	$reset = false;  
  
  $erroresForm = valFormInstall($bd_host, $bd_name, $bd_user, $bd_passwd, $forum_title, $admin_login, $admin_clave, $admin_clave2, $admin_email);
  
  if (!empty($erroresForm))
  {
   	 header("Location: index.php?erroresForm=".$erroresForm);
  }
  else
  {      
      $gesBD = new GestionBD($bd_host, $bd_user, $bd_passwd, $bd_name);
      
      if ($gesBD->connect())
      {      
  			  // Se crean las tablas de la base de datos (17 tablas)
					if ($gesBD->createTables() == 0)
				  {		   
						  // Se crea el usuario administrador por defecto
							$user = new Usuario("", $admin_login, md5($admin_clave), -2, "", $admin_email, "", "", -1, "", "", 0, "", $_SERVER["REMOTE_ADDR"], 0, 0, "", 0, "", 0, 0, 0, "");
														
						  if ($gesBD->createDefaultUser($user))
							{  
							   if ($gesBD->createAnonymousUser())
							   {
							       if ($gesBD->createAdminRank())
										 {
										     if ($gesBD->createDefaultRank())
										     {
										         if ($gesBD->createModeRank())
										         {
										             if ($gesBD->createAnonymousRank())
										             {
										                 // Buscamos el usuario administrador creado por defecto
																	 	 $query = "SELECT * FROM phpforum_users WHERE id_user LIKE -2";
																	 	 
																	 	 // Logeamos al usuario predeterminado
																		 // Creamos la sesion en el servidor								 	 
																	 	 session_start();						   	 	
																		 $encontrado = $gesBD->selectUser($query);
																		 if ($encontrado)
																		 {
																		     $userBD = $gesBD->getObj();
																				 
																			 	 $cadena = base64_encode($userBD->getId_user());
																				 $cadena.="#";
																				 $randCookieCode = rand(0,1000000);
																				 $cadena.=$randCookieCode;
																				 
																			 	 // Y la cookie en el cliente										 						 	      					 
																			 	 if (setcookie("prfinal3asi", $cadena, time() + (7 * 86400)))
																			 	 {
																			 	    $query = "UPDATE phpforum_users SET use_cookie = 1, rand_cookie_code = ".$randCookieCode." WHERE id_user LIKE ".$userBD->getId_user();
																			 	    $gesBD->update($query);
																						$userBD->setUseCookie(1);
																						$userBD->setRandCookieCode($randCookieCode); 									 	    
																				 }		
																				 
																				 $_SESSION["userlog"] = serialize($userBD);
																		     $_SESSION["haySesion"] = "si";								  							 	 
																												 	 
																		 	 	 // Se crea el foro															 
																		 	 	 if ($gesBD->createForumContent())
																		 	 	 {
																		 	 	    if ($gesBD->createTemplate("Default", 1))
																		 	 	    {
																		 	 	        if (createConfigFileBD($bd_host, $bd_name, $bd_user, $bd_passwd))
																								{
																						       // Creamos el archivo de gestion de skin del foro
																						       $forum_date = date("d/m/Y", time());
																						       // url del host
																						       $f_path = $HTTP_HOST.$REQUEST_URI;
																						       $pos = strrpos($f_path, "/");
																						       $f_path = substr($f_path, 0, ($pos+1));
																								   if (createConfigFileForum(replaceCharsToHTML($forum_title), $admin_email, $f_path, substr($forum_date, 0, 10), "Default"))												    
																								   {																								      
																								      $forum_path = $f_path."index.php?accion=ShowUser&id=".$userBD->getId_user();
																								      																								      
																							 	 	 		// Se manda un email con sus datos al usuario creado por defecto						 	 	 		
																											$from = $forum_title." <".$admin_email.">";					 	 	 		
																											$subject = "Bienvenido a \"".$forum_title."\""; 
																											
																											$login = $admin_login;
																											$clave = $admin_clave;
																											$email = $admin_email;
																											$link = "<A HREF='".$forum_path."' class='link_texto' target='_blank'>perfil</A>";
																											########################################
																											##### Se forma el cuerpo del email #####
																											########################################
																											if (eregi("gmail", $email))
																											{
																											    include("includes/mailToNewRegisteredUserNoHTML.inc");
																											}
																											else
																											{
																											    include("includes/mailToNewRegisteredUser.inc");
																											}	
																	                    ########################################           
																	                    ########################################
																															 				      
																								      // Se manda el email
																								      if (sendMail($admin_email, $from, $subject, $body))
																								      {
																								       	  $gesBD->disconnect();
																								      		//Eliminamos la página de instalación.
																									    		unlink("index.php");
																									    		//Y renombramos el hindex.php como index.php, para mostrar el verdadero index de la pagina  
												    															rename("hindex.php", "index.php");
												    															
												    															create404File($f_path);
																											}
																											else
																											{
																											 		$reset = true;
																									 		 		$erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																							 				 		$erroresConn .= "No se ha podido completar la configuraci[o]n del foro.";
																											}			
																									 }
																									 else
																									 {
																									    $reset = true;
																				 		 				  $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																		 				 				  $erroresConn .= "No se ha podido completar la instalaci[o]n de los archivos necesarios para el foro.";
																									 }										   											 	 												 	
																								}
																								else
																								{
																								 		$reset = true;
																				 		 				$erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																		 				 				$erroresConn .= "No se ha podido completar la instalaci[o]n de los archivos necesarios para el foro.";
																								}	
																						}
																						else
																						{
																						    $reset = true;
																						    $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																		 				 		$erroresConn .= "No se ha podido completar la configuraci[o]n del foro.";
																						}												 	 	    	  
																		 		 }		
																				 else
																				 {
																				 		 $reset = true;
																				 		 $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																		 				 $erroresConn .= "No se ha podido crear el foro.";
																				 }
																		 }
																		 else
																		 {
																		     $reset = true;
																			 	 $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
																 				 $erroresConn .= "No se ha podido encontrar el usuario administrador predeterminado.";
																		 }
																 }
																 else
																 {
																     $reset = true;
																     $erroresConn = $gesBD->getError();
																 }
														 }
														 else
														 {
														     $reset = true;
														     $erroresConn = $gesBD->getError();
														 }								         
												 }
												 else
												 {
												     $reset = true;
												     $erroresConn = $gesBD->getError();
												 }
										 }
										 else
										 {
										     $reset = true;
										     $erroresConn = $gesBD->getError();
										 }
								 }							   
								 else
								 {
								     $reset = true;
								     $erroresConn = $gesBD->getError();
								 } 		   							 	 				 	 					 	 
							}			  
							else
							{		
									$reset = true;
							 		$erroresConn = $gesBD->getError();
							} 
				  }
				  else
				  {		
						 $reset = true;		  	
						 $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
						 $erroresConn .= "No se han podido crear las tablas.";
				  }			        
	    }
      else
      {
       	  $erroresConn = "Se ha producido un error al intentar acceder a la base de datos.<BR>"; 
       	  $erroresConn .= "Verifique sus datos de conexi[o]n.";
      }      

		  if ($erroresConn != null)
		  {
		   
			     if ($reset)
			     {
			       	 $gesBD->reset();
							 $gesBD->disconnect();
							 resetConfigFiles();
			       	 session_destroy();
				   }
						   
				   
    	     header("Location: index.php?erroresConn=".$erroresConn);      	  
		  }
		  else
		  {		   		
		      // Nos redirigimos hacia el nuevo index.
				  header("Location: index.php?accion=ShowForum");
					//header("Location: session.php"); 
		  }
  } 
?>