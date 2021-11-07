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
									    Ha recibidio un mensaje de \"".replaceCharsToHTML($forum_title)."\":
									</P>
									<HR color='#CCCCCC' size='1'>									
									<P class='texto_cuerpo'>    
											".replaceCharsToHTML($mensaje)."
									</P>									
									<BR>									
									<P class='texto_cuerpo'>
									    --&gt; Visite <A HREF='".$forum_path."' class='link_texto' target='_blank'>".$forum_path."</A>
									</P>
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