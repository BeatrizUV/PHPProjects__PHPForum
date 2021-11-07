<?  
  // Función que valida el formulario de instalación 
  function valFormInstall($bd_host, $bd_name, $bd_user, $bd_passwd, $forum_title, $admin_login, $admin_clave, $admin_clave2, $admin_email)
  {   	   	
    $errores = null;
    
    if (empty($bd_host))
    {
       $errores = "Host incorrecto;";
    }
    
    if (empty($bd_name))
    {
       if ($errores == null)
       {
       	  $errores = "Base de datos incorrecta;";
       }
       else
       {
       	   $errores .= "Base de datos incorrecta;";
       }       
    }
    
    if (empty($bd_user))
    {
       if ($errores == null)
       {
       	  $errores = "Usuario incorrecto;";
       }
       else
       {
       	   $errores .= "Usuario incorrecto;";
       }       
    }
    
    if (empty($bd_passwd))
    {
       if ($errores == null)
       {
       	  $errores = "Clave de conexi[o]n incorrecta;";
       }
       else
       {
       	   $errores .= "Clave de conexi[o]n incorrecta;";
       }       
    }
    
    if (empty($forum_title))
    {
       if ($errores == null)
       {
       	  $errores = "T[i]tulo incorrecto;";
       }
       else
       {
       	   $errores .= "T[i]tulo incorrecto;";
       }       
    }
	    
    if (empty($admin_login))
    {
       if ($errores == null)
       {
       	  $errores = "Login del Administrador incorrecto;";
       }
       else
       {
       	   $errores .= "Login del Administrador incorrecto;";
       }           
    }
    
    if (empty($admin_clave))
    {       
       if (empty($admin_clave2))
       {
       	   if ($errores == null)
           {
           	   $errores = "Claves del Administrador incorrectas;";
           }
           else
           {
           	   $errores .= "Claves del Administrador incorrectas;";
           }              	  
       }
       else
       {
       	   if ($errores == null)
           {
           	   $errores = "Clave del Administrador incorrecta;";
           }
           else
           {
           	   $errores .= "Clave del Administrador incorrecta;";
           }       	   
       }
    }
    else
    {
     	if (!empty($admin_clave2))
     	{
     	   if (!comparePasswords($admin_clave, $admin_clave2))
   		   {
   		   	   if ($errores == null)
               {
               	   $errores = "Claves del Administrador diferentes;";
               }
               else
               {
               	   $errores .= "Claves del Administrador diferentes;";
               }       		  
   		   }
     	}
     	else
     	{
     	    if ($errores == null)
            {
            	$errores = "Repetici[o]n de clave del Administrador incorrecta;";
            }
            else
            {
            	$errores .= "Repetici[o]n de clave del Administrador incorrecta;";
            }       	 	
     	}
    }
    
    if (empty($admin_email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail del Administrador incorrecto;";
       }
       else
       {
       	   $errores .= "E-mail del Administrador incorrecto;";
       }           
    }
    else
    {
     	if (!valEmail($admin_email))
     	{
     	   if ($errores == null)
           {
       	   	  $errores = "E-mail del Administrador incorrecto;";
           }
           else
           {
       	      $errores .= "E-mail del Administrador incorrecto;";
           } 
	    }   	
    }
    
    if ($errores != null)
    {       
       $longitud = strlen($errores);
       $longitud -= 1;
       $errores = substr($errores, 0, $longitud);
    } 
	  
    
    return $errores;
  }
  
  // Función que compara dos claves
  function comparePasswords($clave1, $clave2)
  {
   	  $val = true;
   	  
   	  if ($clave1 != $clave2)   	  
   	  {
   	   	 $val = false;
   	  }
   	  
   	  return $val;
  }
  
  // Función que chequea la validez del email
  function valEmail($email)
  {
	   	$emailCorrecto = trim ($email);    
	   	$longitud = strlen ($email);
	  	$servidor = strstr ($email, "@");
	    $dominio = strstr ($servidor, ".");
	    $largoDominio = strlen ($dominio); 
	    $caracterArroba = strpos($email, "@");
	    $caracterPunto = strpos($email, ".");
	    $arroba = substr_count ($email, "@");
	    $punto = substr_count ($email, ".");    
	    $val = true;
	    
	    if (empty($emailCorrecto))
	    {      
	        $val = false;
	    }
	    
	    if (($arroba == 0) || ($arroba > 1))
	    {
	        $val = false;
	    }
	    
	    if (($caracterArroba == 0) || ($caracterArroba == ($longitud - 1)))
	    {  
	      	$val = false;        
	    }
	    
	    if (($caracterPunto == ($caracterArroba + 1)) || ($caracterPunto == $longitud)) 
	    {
	    	  $val = false;
	    }
	    
	    if (($largoDominio < 3) || ($largoDominio > 5))
	    {
	    	  $val = false;    	  
	    }
	    
	    if ($punto == 0)
	    {    
		   		$val = false;
	    } 
		
		  return $val;    
  }
  
  // Función que valida el formulario de login
  function valFormLogin($login, $passwd)
  {   	   	
    $errores = null;
    
    if (empty($login))
    {
       $errores = "Login incorrecto.";
    }
    
    if (empty($passwd))
    {
       if ($errores == null)
       {
       	  $errores = "Clave incorrecta.";
       }
       else
       {
       	   $errores .= "<BR>Clave incorrecta.";
       }       
    } 
    
    return $errores;
  }
  
  // Función que valida el formulario de registro de usuarios
  function valFormCreateUser($login, $passwd, $passwd2, $email, $secCode)
  {   	   	
    $errores = null;
    
    if (empty($secCode))
    {
       $errores = "C&oacute;digo de Seguridad incorrecto.";          
    }
    
    if (empty($login))
    {
       if ($errores == null)
       {
       	   $errores = "Login incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Login incorrecto.";
       }   
    }    
    
    if (empty($passwd))
    {       
       if (empty($passwd2))
       {
       	   if ($errores == null)
           {
           	   $errores = "Claves incorrectas.";
           }
           else
           {
           	   $errores .= "<BR>Claves incorrectas.";
           }              	  
       }
       else
       {
       	   if ($errores == null)
           {
           	   $errores = "Clave incorrecta.";
           }
           else
           {
           	   $errores .= "<BR>Clave incorrecta.";
           }       	   
       }
    }
    else
    {
     	if (!empty($passwd2))
     	{
     	   if (!comparePasswords($passwd, $passwd2))
   		   {
   		   	   if ($errores == null)
               {
               	   $errores = "Claves diferentes.";
               }
               else
               {
               	   $errores .= "<BR>Claves diferentes.";
               }       		  
   		   }
     	}
     	else
     	{
     	    if ($errores == null)
            {
            	$errores = "Repetici&oacute;n de clave incorrecta.";
            }
            else
            {
            	$errores .= "<BR>Repetici&oacute;n de clave incorrecta.";
            }       	 	
     	}
    }
        
    if (empty($email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>E-mail incorrecto.";
       }       
    }
    else
    {
     	if (!valEmail($email))
     	{
     	   if ($errores == null)
           {
       	   	  $errores = "E-mail incorrecto.";
           }
           else
           {
       	      $errores .= "<BR>E-mail incorrecto.";
           } 
	    }   	
    }
    
    return $errores;
  }
  
  // Función que chequea la validez del avatar desde pc
  function checkAvatar($avatar)
  {
      $error = null;				    
      
      /***** Comprobando validez del formato *****/    
      $formatos = array("bmp","pjpeg","gif","x-png");
			$formato = substr($avatar["type"],6,strlen($avatar["type"]));
			if(!in_array($formato,$formatos))
			{
			    $error = "El formato del avatar no es un formato v&aacute;lido.";
			}
			else
			{
				  /***** Comprobando validez del tamaño *****/		
			    if (($avatar["size"] > 51200) || ($avatar["size"] == 0))
			    {
					    $error = "El avatar es mayor de 100KB.";
					}
					else
					{
					    /***** Comprobando validez de las proporciones *****/							    
					    $proporciones = getimagesize($avatar['tmp_name']);
					    $width= $proporciones[0];
					    $height=$proporciones[1];
					    if (($width != 95) && ($height != 95))
					    {
					        $error = "El tama&ntilde;o del avatar es mayor de 95x95 p&iacute;xeles.";
					    }
					}
			}			
			
			return $error;     
	}
	
	// Función que valida el formulario de petición de nueva clave
	function valFormNewPass($email)
  {   	   	
    $errores = null;
    
    if (empty($email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>E-mail incorrecto.";
       }       
    }
    else
    {
	     	if (!valEmail($email))
	     	{
	     	   if ($errores == null)
	           {
	       	   	  $errores = "E-mail incorrecto.";
	           }
	           else
	           {
	       	      $errores .= "<BR>E-mail incorrecto.";
	           } 
		    }   	
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de búsqueda
  function valFormFinder($key)
  {   	   	
    $errores = null;
    
    if (empty($key))
    {
       $errores = "Debe indicar alg&uacute;n patr&oacute;n de b&uacute;squeda.";
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de creación de MP
  function valFormCreateMP($title, $to, $body)
  {   	   	
    $errores = null;
    
    if (empty($title))
    {
       $errores = "T&iacute;tulo incorrecto.";
    }
    
    if (empty($to))
    {
       if ($errores == null)
       {
       	  $errores = "Destinatario incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Destinatario incorrecto.";
       }       
    }
		
		if (empty($body))
    {
       if ($errores == null)
       {
       	  $errores = "Mensaje incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Mensaje incorrecto.";
       }       
    }  
    
    return $errores;
  }
  
  // Función que valida el formulario de creación de mensajes
  function valFormMsg($body)
  {   	   	
    $errores = null;
    
    if (empty($body))
    {
       $errores = "Mensaje incorrecto.";
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de creación de posts
  function valFormPost($title, $body)
  {   	   	
    $errores = null;
    
    if (empty($title))
    {
       $errores = "T&iacute;tulo incorrecto.";
    }
    
		if (empty($body))
    {
       if ($errores == null)
       {
       	  $errores = "Mensaje incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Mensaje incorrecto.";
       }       
    }  
    
    return $errores;
  }
  
  // Función que valida el formulario de edición de la configuración del foro
  function valFormEditForumInfo($title, $email)
  {   	   	
    $errores = null;
    
    if (empty($title))
    {
       $errores = "T&iacute;tulo incorrecto.";
    }
    
		if (empty($email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>E-mail incorrecto.";
       }       
    }
    else
    {
	     	if (!valEmail($email))
	     	{
	     	   if ($errores == null)
	           {
	       	   	  $errores = "E-mail incorrecto.";
	           }
	           else
	           {
	       	      $errores .= "<BR>E-mail incorrecto.";
	           } 
		    }   	
    }
    
    return $errores;
  }
	
	// Función que valida el formulatio de creación de nuevos templates
	function valFormCreateTemplate($name)
  {   	   	
    $errores = null;
    
    if (empty($name))
    {
       $errores = "Nombre de nuevo tema incorrecto.";
    }
    
    return $errores;
  }
	
	// Función que valida el formulatio de creación de nuevos temas
	function valFormCreateTheme($cat, $title)
  {   	   	
    $errores = null;
    
    if (empty($cat))
    {
       $errores = "Categor&iacute;a incorrecta.";
    }
    
    if (empty($title))
    {
       if ($errores == null)
       {
       	  $errores = "T&iacute;tulo incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>T&iacute;tulo incorrecto.";
       }       
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de creación de nuevas categorías
  function valFormCreateCat($title)
  {   	   	
    $errores = null;
    
    if (empty($title))
    {
       $errores = "Categor&iacute;a incorrecta.";
    }
        
    return $errores;
  }
	
	// Función que valida el formulario de edición de temas
	function valFormEditTheme($cat, $title, $oldTitle)
  {   	   	
    $errores = null;
    
    if (empty($cat))
    {
       $errores = "Categor&iacute;a incorrecta.";
    }
     
    if (empty($oldTitle))
    {
       if ($errores == null)
       {
       	  $errores = "Tema incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Tema incorrecto.";
       }       
    } 
    
    if (empty($title))
    {
       if ($errores == null)
       {
       	  $errores = "T&iacute;tulo incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>T&iacute;tulo incorrecto.";
       }       
    }
    
    return $errores;
  }            
  
  // Función que valida el formulario de registro de usuarios desde el panel de administración
  function valFormCreateUserAdmin($login, $passwd, $passwd2, $email)
  {   	   	
    $errores = null;
    
    if (empty($login))
    {
       $errores = "Login incorrecto.";
    }    
    
    if (empty($passwd))
    {       
       if (empty($passwd2))
       {
       	   if ($errores == null)
           {
           	   $errores = "Claves incorrectas.";
           }
           else
           {
           	   $errores .= "<BR>Claves incorrectas.";
           }              	  
       }
       else
       {
       	   if ($errores == null)
           {
           	   $errores = "Clave incorrecta.";
           }
           else
           {
           	   $errores .= "<BR>Clave incorrecta.";
           }       	   
       }
    }
    else
    {
     	if (!empty($passwd2))
     	{
     	   if (!comparePasswords($passwd, $passwd2))
   		   {
   		   	   if ($errores == null)
               {
               	   $errores = "Claves diferentes.";
               }
               else
               {
               	   $errores .= "<BR>Claves diferentes.";
               }       		  
   		   }
     	}
     	else
     	{
     	    if ($errores == null)
            {
            	$errores = "Repetici&oacute;n de clave incorrecta.";
            }
            else
            {
            	$errores .= "<BR>Repetici&oacute;n de clave incorrecta.";
            }       	 	
     	}
    }
        
    if (empty($email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>E-mail incorrecto.";
       }       
    }
    else
    {
     	if (!valEmail($email))
     	{
     	   if ($errores == null)
           {
       	   	  $errores = "E-mail incorrecto.";
           }
           else
           {
       	      $errores .= "<BR>E-mail incorrecto.";
           } 
	    }   	
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de edición de usuarios desde el panel de administración
  function valFormEditUserAdmin($login, $email)
  {   	   	
    $errores = null;
    
    if (empty($login))
    {
       $errores = "Login incorrecto.";
    }  
        
    if (empty($email))
    {
       if ($errores == null)
       {
       	  $errores = "E-mail incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>E-mail incorrecto.";
       }       
    }
    else
    {
     	if (!valEmail($email))
     	{
     	   if ($errores == null)
           {
       	   	  $errores = "E-mail incorrecto.";
           }
           else
           {
       	      $errores .= "<BR>E-mail incorrecto.";
           } 
	    }   	
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de creación de grupos de usuarios
  function valFormCreateGroup($name, $comment)
  {   	   	
    $errores = null;
    
    if (empty($name))
    {
       $errores = "Nombre incorrecto.";
    }  
        
    if (empty($comment))
    {
       if ($errores == null)
       {
       	  $errores = "Descripci&oacute;n incorrecta.";
       }
       else
       {
       	   $errores .= "<BR>Descripci&oacute;n incorrecta.";
       }       
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de edición de grupos de usuarios
  function valFormEditGroup($id_group, $name)
  {   	   	
    $errores = null;
    
    if (empty($id_group))
    {
       $errores = "Grupo incorrecto.";
    }  
        
    if (empty($name))
    {
       if ($errores == null)
       {
       	  $errores = "Nombre incorrecto.";
       }
       else
       {
       	   $errores .= "<BR>Nombre incorrecto.";
       }       
    }
    
    return $errores;
  }
  
  // Función que valida el formulario de envío de emails
  function valFormSendEmail($mensaje)
  {   	   	
    $errores = null;
    
    if (empty($mensaje))
    {
       $errores = "Mensaje incorrecto.";
    } 
    
    return $errores;
  }
?>