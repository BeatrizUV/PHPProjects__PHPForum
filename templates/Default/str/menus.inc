<?
  // Función que devuelve un menú dependiendo del tipo de usuario
	function menus($rank, $mpsUnread, $gesBD)
	{	 		
	   if ($rank != -3)
	   {	       
	       if ($rank == -2)
	       {	 
             $menu = "<TD width='2.33%'></TD>
						          <TD class='celda_panel_usuario' style='width: 416px;'>																							
  							        <UL id='menu'>	
                          <LI><A HREF='javascript:openAdminLogin()' title='Panel de administraci&oacute;n'><SPAN style='font-size: 9px; vertical-align: bottom;'>Administrar</SPAN></A></LI>";
				 }
				 else
				 {
				     $menu = "<TD width='62px'></TD>
                     	<TD class='celda_panel_usuario' style='width: 364px;'>																							
									      <UL id='menu'>";
				 }				 
				 
				 $menu .= "<LI><A HREF='index.php?accion=ShowUser' title='Perfil del usuario'>&nbsp;Perfil&nbsp;</A></LI>
 								     <LI><A HREF='index.php?accion=ShowUsers' title='Lista de usuarios'>&nbsp;Usuarios&nbsp;</A></LI>
										 <LI><A HREF='index.php?accion=ShowGroups' title='Lista de grupos'>&nbsp;Grupos&nbsp;</A></LI>
                     <LI><A HREF='index.php?accion=ShowMPs' title='Mensajes Privados'>&nbsp;M.P.";
                     
			   if ($mpsUnread > 0)
		     {
	           $menu .= "[".$mpsUnread."]";	   		
			   }  
         $menu .= "</A></LI>
									 <LI><A HREF='index.php?accion=Navigate&destino=main_finder' title='Buscar'>&nbsp;Buscar&nbsp;</A></LI>
									 <LI><A HREF='index.php?accion=Navigate&destino=main_faqs' title='F.A.Q.S.'>&nbsp;Ayuda&nbsp;</A></LI>
									 <LI><A HREF='index.php?accion=SessionLogout' title='Desconectar'>&nbsp;Salir&nbsp;</A></LI>";
		 }
		 else
		 {
		     $menu = "<TD width='114px'></TD>
									<TD class='celda_panel_usuario' style='width: 312px;'>
                   <UL id='menu'>																							    																						    
		 							    <LI><A HREF='index.php?accion=Navigate&destino=main_login' title='Conectarse'>&nbsp;Conectar&nbsp;</A></LI>
											<LI><A HREF='index.php?accion=Navigate&destino=main_register' title='Registrarse'>&nbsp;Registrar&nbsp;</A></LI>
											<LI><A HREF='index.php?accion=ShowUsers' title='Lista de usuarios'>&nbsp;Usuarios&nbsp;</A></LI>
											<LI><A HREF='index.php?accion=ShowGroups' title='Lista de grupos'>&nbsp;Grupos&nbsp;</A></LI>	
											<LI><A HREF='index.php?accion=Navigate&destino=main_finder' title='Buscar'>&nbsp;Buscar&nbsp;</A></LI>
											<LI><A HREF='index.php?accion=Navigate&destino=main_faqs' title='F.A.Q.S.'>&nbsp;Ayuda&nbsp;</A></LI>";
		 }   
		 
		 return $menu;
	}
?>
