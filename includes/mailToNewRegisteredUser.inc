<?
$body="<!DOCTYPE HTML PUBLIC '-//W3C//DTD HTML 4.01 Transitional//EN'>
        <HTML>
						<HEAD>
									<STYLE>																																
											A.link_texto:link {    
													color: #000000; text-decoration: underline;
											}
											A.link_texto:visited {
											    color: #000000; text-decoration: underline;
											}
											A.link_texto:hover {
											    color: #FFFFFF; text-decoration: none;
											    background-color: #CCCCCC;
											}
											A.link_texto:active {
											    color: #000000; text-decoration: underline;
											}
											A.link_footer:link {    
													color: #000000; text-decoration: none;
											}
											A.link_footer:visited {
											    color: #000000; text-decoration: none;
											}
											A.link_footer:hover {
											    color: #000000; text-decoration: underline;
											}
											A.link_footer:active {
											    color: #000000; text-decoration: none;
											}
											.texto_creditos {
											    font-family: Helvetica, Verdana, 'Bitstream Vera Sans', Arial, sans-serif;
													color: #C6C6C6; font-size: 9px; font-weight: bold;
											}
											.texto_footer {
											    font-family: Helvetica, Verdana, 'Bitstream Vera Sans', Arial, sans-serif;
													color: #999999; font-size: 10px; font-weight: bold;
											}
											A.link_creditos:link {
											    color: #000000; text-decoration: none; padding: 0px; font-weight: bold;
											}
											A.link_creditos:visited {
											    color: #000000; text-decoration: none; padding: 0px; font-weight: bold;
											}
											A.link_creditos:hover {
											    color: #000000; text-decoration: underline; padding: 0px; font-weight: bold;
											}
											A.link_creditos:active {
											    color: #000000; text-decoration: none; padding: 0px; font-weight: bold;
											}											
											.texto_titulo_cuerpo {
											    font-family: Helvetica, Verdana, 'Bitstream Vera Sans', Arial, sans-serif;
													color: #4F4F4F; font-size: 14px; vertical-align: middle;
													font-weight: bold;		
											}
											.texto_cuerpo {
											    font-family: Helvetica, Verdana, 'Bitstream Vera Sans', Arial, sans-serif;
													color: #4F4F4F; font-size: 11px; vertical-align: middle;		
											}
									</STYLE>									
						</HEAD>
			
						<BODY>																					       
									<P class='texto_titulo_cuerpo'>
									    Le damos la bienvenida a su nuevo foro \"".replaceCharsToHTML($forum_title)."\".
									</P>
									<HR color='#CCCCCC' size='1'>									
									<P class='texto_cuerpo'>    
											<BR>A continuaci&oacute;n le mostramos sus datos.
									</P>
									<BR>
									<P class='texto_cuerpo'>
									    <B>LOGIN :</B> ".replaceCharsToHTML($login)."
											<BR><B>CLAVE :</B> ".replaceCharsToHTML($clave)."
											<BR><B>E-MAIL :</B> ".$email."
									</P>
									<BR>
									<P class='texto_cuerpo'>
									    Para ver y/o modificar sus datos acceda a su ".$link.":
									</P>
									<P class='texto_footer'>
									    Si no puede hacer click sobre el link de su perfil, copie el siguiente código y péguelo en la barra de navegación de su navegador:    
									    <BR><SPAN style='font-size: 9px;'>".$forum_path."</SPAN>
									</P>
									<BR>									
									<HR color='#CCCCCC' size='1'>
									<P class='texto_creditos'>
									    Para dudas, quejas y/o sugerencias, escribir al <A class='link_footer' HREF='mailto:".$admin_email."'>webmaster</A>
									</P>									
									<P class='texto_creditos' height='10'>
											Beatriz Urbano Vega, 3&ordm; ASI, Proyecto Final - 2008 Copyright &copy; / Dise&ntilde;o &copy; <A class='link_creditos' HREF='http://www.abtu.net/inb/dsign/index.html' target='_blank'>D_sign</A>
									</P>									
						</BODY>
			</HTML>";
?>