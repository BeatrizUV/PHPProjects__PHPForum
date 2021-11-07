// Función que valida el formulario de instalación
function valFormInstall()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formInstall.host.value.length==0)
	  { 
	     errores = " - Host.";  		      
		   listaCampos[cont] = "host";
		   cont++;
    } 

    if (document.formInstall.name.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Base de datos.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Base de datos.";	   	   
		   }	   			         
		   listaCampos[cont] = "name";
		   cont++;
    }    
    
    if (document.formInstall.user.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Usuario.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Usuario.";	   	   
		   }	   		     
		   listaCampos[cont] = "user";
		   cont++;
    }    
    
    if (document.formInstall.passwd.value.length==0)
  	{ 
		   if (errores == null)
		   {
		   	  errores = " - Clave de conexión.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Clave de conexión.";	   	   
		   }	  		     
		   listaCampos[cont] = "passwd";
		   cont++;
    }   
    
    if (document.formInstall.ftitle.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Título del foro.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Título del foro.";	   	   
		   }	   		     
		   listaCampos[cont] = "ftitle";
		   cont++;
    }
    
    if (document.formInstall.login.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Login del Administrador.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Login del Administrador.";	   	   
		   }	   		      
		   listaCampos[cont] = "login";
		   cont++;
    }
    
    if (document.formInstall.clave.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Clave del Administrador.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Clave del Administrador.";	   	   
		   }			         
		   listaCampos[cont] = "clave";
		   cont++;
    }
    
    if (document.formInstall.clave2.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Repetición de clave del Administrador.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Repetición de clave del Administrador.";	   	   
		   }
 	     listaCampos[cont] = "clave2";
		   cont++;
    }
    
    if (document.formInstall.email.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - E-mail del Administrador.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - E-mail de clave del Administrador.";	   	   
		   }	   		     
		   listaCampos[cont] = "email";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formInstall.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
} 

// Función que valida el formulario de login
function valFormLogin()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formLogin.login.value.length==0)
	  { 
	     errores = " - Login.";  		      
		   listaCampos[cont] = "login";
		   cont++;
    } 

    if (document.formLogin.passwd.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Clave.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Clave.";	   	   
		   }	   			         
		   listaCampos[cont] = "passwd";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formLogin.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de registro de nuevos usuarios
function valFormCreateUser()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formRegister.seccode.value.length==0)
	  { 
	     errores = " - Código de Seguridad.";  		      
		   listaCampos[cont] = "seccode";
		   cont++;
    } 
    
    if (document.formRegister.login.value.length==0)
	  { 
	     if (errores == null)
		   {
		   	  errores = " - Login.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Login.";	   	   
		   }	   			         
		   listaCampos[cont] = "login";
		   cont++;
    } 

    if (document.formRegister.passwd.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Clave.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Clave.";	   	   
		   }	   			         
		   listaCampos[cont] = "passwd";
		   cont++;
    }
    
		if (document.formRegister.passwd2.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Repetición de clave.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Repetición de clave.";	   	   
		   }	   			         
		   listaCampos[cont] = "passwd2";
		   cont++;
    }  
    
    if (document.formRegister.email.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - E-mail.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - E-mail.";	   	   
		   }	   			         
		   listaCampos[cont] = "email";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formRegister.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}  

// Función que valida el formulario de petición de nueva clave
function valFormNewPass()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formNewPass.email.value.length==0)
	  { 
	     errores = " - E-mail.";  		      
		   listaCampos[cont] = "email";
		   cont++;
    } 
    
    if (cont == 0)
    {   
        document.formNewPass.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario del buscador
function valFormFinder()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formFinder.key.value.length==0) 
	  { 
	     errores = " ¡¡ DEBE INDICAR ALGÚN PATRÓN DE BÚSQUEDA !!";  		      
		   listaCampos[0] = "key";		   
		   listaCampos[1] = "user";		   	    	
	     alert(errores);	     	
	     colorFields(listaCampos);
    } 
    else
    {       
        document.formFinder.submit(); 
    }
}

// Función que valida el formulario de creación de MP
function valFormCreateMP()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formCreateMP.mptitle.value.length==0)
	  { 
	     errores = " - Asunto.";  		      
		   listaCampos[cont] = "mptitle";
		   cont++;
    } 

    if (document.formCreateMP.to.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Destinatario.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Destinatario.";	   	   
		   }	   			         
		   listaCampos[cont] = "to";
		   cont++;
    } 
    
    if (document.formCreateMP.body.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Mensaje.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Mensaje.";	   	   
		   }	   			         
		   listaCampos[cont] = "body";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formCreateMP.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de creación de nuevos mensajes
function valFormMsg()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formMsg.body.value.length==0)
	  { 
	     errores = " - Mensaje.";  		      
		   listaCampos[cont] = "body";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formMsg.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de creación de posts
function valFormPost()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formPost.ptitle.value.length==0)
	  { 
	     errores = " - Título.";  		      
		   listaCampos[cont] = "ptitle";
		   cont++;
    } 
    
    if (document.formPost.body.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Mensaje.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Mensaje.";	   	   
		   }	   			         
		   listaCampos[cont] = "body";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formPost.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de edición de la configuración del foro
function valFormEditForumInfo()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formEditForumInfo.f_title.value.length==0)
	  { 
	     errores = " - Título.";  		      
		   listaCampos[cont] = "f_title";
		   cont++;
    } 
    
    if (document.formEditForumInfo.a_email.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Email.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Email.";	   	   
		   }	   			         
		   listaCampos[cont] = "a_email";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formEditForumInfo.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de creación de templates
function valFormCreateTemplate()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formCreateTemplate.name.value.length==0)
	  { 
	     errores = " - Nombre del nuevo estilo.";  		      
		   listaCampos[cont] = "name";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formCreateTemplate.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de envío de correos masivos
function valFormSendEmail()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formSendEmail.body.value.length==0)
	  { 
	     errores = " - Mensaje.";  		      
		   listaCampos[cont] = "body";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formSendEmail.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de creación de categorías
function valFormCreateCat()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formCreateCat.ctitle.value.length==0)
	  { 
	     errores = " - Título.";  		      
		   listaCampos[cont] = "ctitle";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formCreateCat.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}


// Función que valida el formulario de creación de temas
function valFormCreateTheme()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formCreateTheme.cat.value.length==0)
	  { 
	     errores = " - Categoría.";  		      
		   listaCampos[cont] = "cat";
		   cont++;
    }
    
    if (document.formCreateTheme.ttitle.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Título.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Título.";	   	   
		   }	   			         
		   listaCampos[cont] = "ttitle";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formCreateTheme.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de edición de temas
function valFormEditTheme()
{ 
	var errores = null;
	var listaCampos = new Array();
	var cont = 0;    
    
    if (document.formEditTheme.cat.value.length==0)
	  { 
	     errores = " - Categoría.";  		      
		   listaCampos[cont] = "cat";
		   cont++;
    }
    
    if (document.formEditTheme.oldtitle.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	   errores = " - Tema.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Tema.";	   	   
		   }	
    }
    
    if (document.formEditTheme.ttitle.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Título.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Título.";	   	   
		   }	   			         
		   listaCampos[cont] = "ttitle";
		   cont++;
    }
    
    if (cont == 0)
    {       
        document.formEditTheme.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);	     	
    }    
}

// Función que valida el formulario de creación de usuarios desde el panel de administración
function valFormCreateUserAdmin()
{ 
		var errores = null;
		var listaCampos = new Array();
		var cont = 0; 
    
    if (document.formCreateUserAdmin.login.value.length==0)
	  { 
	     errores = " - Login.";   
		   listaCampos[cont] = "login";
		   cont++;
    } 

    if (document.formCreateUserAdmin.passwd.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Clave.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Clave.";	   	   
		   }	   			         
		   listaCampos[cont] = "passwd";
		   cont++;
    }
    
		if (document.formCreateUserAdmin.passwd2.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Repetición de clave.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Repetición de clave.";	   	   
		   }	   			         
		   listaCampos[cont] = "passwd2";
		   cont++;
    }  
    
    if (document.formCreateUserAdmin.email.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - E-mail.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - E-mail.";	   	   
		   }	   			         
		   listaCampos[cont] = "email";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formCreateUserAdmin.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de edición de usuarios desde el panel de administración
function valFormEditUserAdmin()
{ 
		var errores = null;
		var listaCampos = new Array();
		var cont = 0; 
    
    if (document.formEditUserAdmin.login.value.length==0)
	  { 
	     errores = " - Login.";   
		   listaCampos[cont] = "login";
		   cont++;
    } 
    
    if (document.formEditUserAdmin.email.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - E-mail.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - E-mail.";	   	   
		   }	   			         
		   listaCampos[cont] = "email";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formEditUserAdmin.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de creación de grupos de usuarios
function valFormCreateGroup()
{ 
		var errores = null;
		var listaCampos = new Array();
		var cont = 0; 
    
    if (document.formCreateGroup.name.value.length==0)
	  { 
	     errores = " - Nombre.";   
		   listaCampos[cont] = "name";
		   cont++;
    } 
    
    if (document.formCreateGroup.comment.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Descripción.";        
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Descripción.";	   	   
		   }	   			         
		   listaCampos[cont] = "comment";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formCreateGroup.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}

// Función que valida el formulario de edición de grupos de usuarios
function valFormEditGroup()
{ 
		var errores = null;
		var listaCampos = new Array();
		var cont = 0; 
    
    if (document.formEditGroup.rank.value.length==0)
	  { 
	     errores = " - Grupo.";   
		   listaCampos[cont] = "rank";
		   cont++;
    } 
    
    if (document.formEditGroup.name.value.length==0)
	  { 
		   if (errores == null)
		   {
		   	  errores = " - Nombre.";         
		   }
		   else
		   {
		   	   errores += "\n";
		   	   errores += " - Nombre.";	   	   
		   }	   			         
		   listaCampos[cont] = "name";
		   cont++;
    } 
    
    if (cont == 0)
    {       
        document.formEditGroup.submit(); 
    }
    else
    {     	
	    	errores = "¡¡ SE HAN ENCONTRADO " + cont + " ERRORES !!" + "\n" + "Debe introducir:" + "\n" + errores;	    	
	     	alert(errores);	     	
	     	colorFields(listaCampos);
    }    
}                

// Función que resalta con un borde rojo los campos no validados
function colorFields(lista)
{ 			
	  var cont = 0; 
		var size = lista.length;   
	 	for(cont = 0; cont < size; cont ++)
	 	{ 	 		
			  document.getElementById(lista[cont]).className="inputError";
	 	} 	 	
}