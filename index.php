<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">

<HTML>
			<HEAD>
						<TITLE>:: INSTALACIÓN DEL FORO ::</TITLE>			
						<META content="www.proyecto-final-beatrizuv.es.kz" name="Title" />
						<META content="ryokojoe@yahoo.es" name="Author" />
						<META content="Spanish" name="Language" />		
						<LINK rel="stylesheet" type="text/css" href="templates/Default/stylesheet/style.css" />	
						<LINK rel="stylesheet" type="text/css" href="includes/errores.css" />
						<SCRIPT type="text/javascript" src="includes/js/valForms.js"></SCRIPT>
						<SCRIPT language="JavaScript">
										var reloj=0;
										var frecuencia=1000;
              			function relojfechahora()
										{
												var ahora= new Date();
												
												var dia = ahora.getDate();
												if (dia < 10)
												{
												 	 dia = "0" + dia;
												}
												
												var mes = ahora.getMonth();
												if (mes < 10)
												{
												 	 mes = "0" + mes;
												}
												
												var anio = ahora.getFullYear();
												
												var hora = ahora.getHours();
												if (hora < 10)
												{
												 	 hora = "0" + hora;
												}
												
												var minutos = ahora.getMinutes();
												if (minutos < 10)
												{
												 	 minutos = "0" + minutos;
												}
												
												var segundos = ahora.getSeconds();
												if (segundos < 10)
												{
												 	 segundos = "0" + segundos;
												}
												
												var fecha = dia + "/" + mes + "/" + anio + " - " + hora + ":" + minutos + ":" + segundos + "&nbsp;";												
												var posicion = document.getElementById('capa_reloj');
												posicion.innerHTML = fecha;
												reloj = setTimeout("relojfechahora()",frecuencia);
                    }
						</SCRIPT>				
			</HEAD>

			<BODY onLoad="relojfechahora()">
						<CENTER>												       
										<TABLE class="tabla_principal" cellpadding="0" cellspacing="0">		
										       <TR>
										       		 <TD height="10"></TD>
													 </TR>											 
													 <TR>
													 		 <TD class="celda_header_top"><IMG width="600px" height="25px" src="templates/Default/img/header_top.gif" /></TD>
													 </TR>
													 <TR>
													 		 <TD id="capa_reloj" class="celda_header_middle1"></TD>
													 </TR>
													 <TR>
													 		 <TD class="celda_header_middle2"></TD>
													 </TR>
													 <TR>
													 		 <TD class="celda_header_bottom"> 
																	 <!-- TABLA PATH + PANEL -->											 		 		 
													 		 </TD>
													 </TR>
													 <TR>
													 		 <TD class="celda_cuerpo">		
																	  <TABLE class="tabla_acoplada">
																		     <TR>
											                	     <TD colspan="3" height="10"></TD>
											                	 </TR>											 		 		 
<?  
	 // Errores de formulario
	 if (isset($_GET["erroresForm"]))
	 {
	  	 $campos = split(";", $_GET["erroresForm"]);
		   $size = count($campos);
	 	   $cont = 0;	 	  
	 	   $numErrores;
	 	   $errores = "";
	 	   if ($size > 1)
	 	   {
	 	   		$numErrores = "SE HAN ENCONTRADO ".$size." ERRORES:";
		   }
		   else
		   {
  		    $numErrores = "SE HA ENCONTRADO ".$size." ERROR:";
			 }	 	   	 	 
	 
		 	 for ($cont = 0; $cont < $size; $cont++)
		 	 {   	  	 
		 	   $errores .= " - ";				  	 	     
				 $errores .= $campos[$cont];
				 $errores .= ".<BR>";
		 	 }
 	 } 
 	 // Errores de conexión
 	 if (isset($_GET["erroresConn"]))
 	 {
  	 	$errores = $_GET["erroresConn"];
 	 }
 
 	 if (!empty($errores))
	 {
  	 	include("includes/textFormater.inc");
  	 	$errores = charsFromGet($errores);  	 	
?>                                    
						                			       <TR>
						                			           <TD width="100"></TD>
						                			           <TD class="align_center">
						                			       		 		 <TABLE class="tabla_errores"  cellpadding="5" cellspacing="5">
<?
			if (isset($numErrores))						
			{															 
?>																									 						                			       		 						
                                                      <TR>
                                                       		<TD class="align_center">
                                                							<B><?=$numErrores?></B>
																													</TD>
																											</TR>
<?																											
      }
?>																											
																											<TR>
																													<TD class="align_left">																																				           
																													    <?=$errores?>
											                                    </TD>
															                        </TR>																														    
                                                 </TABLE>
																						 </TD>
																						 <TD width="100"></TD>										                	   	   
										                	   </TR>       				 	 									       
										                	   <TR>
										                	   	   <TD colspan="3" height="10"></TD>
										                	   </TR>
<?
   }
	?>													 		 		   <TR>
																				 		 <TD colspan="3">                                  
																                <TABLE class="tabla_acoplada">												                			       
												                			       <TR>
																                	   	   <TD>
																                	   	   		 <FORM action="install.php" method="POST" name="formInstall">																								
						                                             </TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD>
																                	   	   	   Bienvenido a la p&aacute;gina de instalación de tu foro.
																                	   	   	   <BR>Para poder instalarlo necesitas rellenar el siguiente formulario:
																                	   	   </TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD height="10"></TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD class="celda_acoplada" style="text-align: center;">													                	   	   	   							   
																                	   	   	   <TABLE class="tabla_acoplada">
																						   	   					        <TR>
																						   	   					      		  <TD colspan="2" class="texto_titulo_cuerpo">
																						   	   					      				 : : DATOS DE CONEXI&Oacute;N : :																	  						 			 				
																			  						 			 				      </TD>
																			  						 			 				  </TR>  									                	   	   	   				      
																  						 			 				        </TR>
																			  						 			 				      <TD colspan="2" class="texto_cuerpo">																	   	   					      				                	   	   	   																	
																								  						 			 			  Estos datos servir&aacute;n para poder guardar&nbsp;&nbsp;
																																						todo el contenido del foro en una base de datos.&nbsp;&nbsp;
																				  						 			 				    </TD>
																  						 			 				        </TR>
																  						 			 				        <TR>
																						   	   					      		<TD colspan="2" height="10"></TD>
																							   	   					      </TR>
																			   	   					 				      <TR>
																	                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Host de la BD&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																	                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="host" id="host" value="" size="25" /></TD>
																	                	   	   	   		  </TR>
																	                	   	   	   		  <TR>
																	                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Base de datos&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																	                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="name" id="name" value="" size="25" /></TD>
																	                	   	   	   		  </TR>
																	    								  						<TR>
																	                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Usuario de la BD&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																	                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="user" id="user" value="" size="25" /></TD>												                	   	   	   		  	  
																	                	   	   	   		  </TR>
																										  							<TR>
																	                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Clave de la BD&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																	                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="password" name="passwd" id="passwd"value="" size="25" /></TD>
																	                	   	   	   		  </TR> 
																														 </TABLE>	   
																                	   	   </TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD height="25" valign="middle"><HR width="75%" color="#BBBBBB" size="1"></TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD class="celda_acoplada" style="text-align: center;">												                    	   	                       	   	   
																						   	   					 <TABLE class="tabla_acoplada">
																						   	   					      <TR>
																						   	   					      		<TD colspan="2" class="texto_titulo_cuerpo">
																								   	   					      		: : DATOS DE ADMINISTRACI&Oacute;N : :
																					                    	   	  </TD>
															  						 			 				        <TR>
															  						 			 				        </TR>
																			  						 			 				    <TD colspan="2" class="texto_cuerpo">																   	   					      				                	   	   	   																	
																							  						 			 				Estos datos servir&aacute;n para crear un usuario administrador en el foro.
																			  						 			 				    </TD>
																						   	   					      </TR>
																						   	   					      <TR>
																						   	   					      		<TD colspan="2" height="10"></TD>
																						   	   					      </TR>
																		   	   					 				      <TR>
																                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Nombre del foro&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="ftitle" id="ftitle" value="" maxlength="25" size="25" /></TD>
																                	   	   	   		  </TR>
																                	   	   	   		  <TR>
																                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Login del Administrador&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="login" id="login" value="" maxlength="15" size="25" /></TD>
																                	   	   	   		  </TR>
																    								  						<TR>
																                	   	   	   		  	  <TD class="align_right" style="width: 45%;">Clave del Administrador&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="password" name="clave" id="clave" value="" maxlength="32" size="25" /></TD>												                	   	   	   		  	  
																                	   	   	   		  </TR>
																															    <TR>
																                	   	   	   		  	  <TD class="align_right" style="width: 45%;">(Repita clave)&nbsp;&nbsp;</TD>													                	   	   	   		  	  
																                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="password" name="clave2" id="clave2" value="" maxlength="32" size="25" /></TD>
																                	   	   	   		  </TR>  
																									  							<TR>
																                	   	   	   		  	  <TD class="align_right" style="width: 45%;">E-mail del Administrador&nbsp;&nbsp;:&nbsp;&nbsp;</TD>
																                	   	   	   		  	  <TD class="align_left" style="width: 55%;"> <INPUT class="input" type="text" name="email" id="email" value="" maxlength="100" size="25" /></TD>
																                	   	   	   		  </TR>  								            	   	   	   		  
																                	   	   	   </TABLE>                   	   	   
																                	   	   </TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD height="10"></TD>
																                	   </TR>
																                	   <TR>
																                	   	   <TD class="align_center"><INPUT class="button" type="button" name="Instalar" value="Instalar" onClick="valFormInstall()"/></TD>            	   	   	   		  	  
																	   	   	   		     </TR>
																										 <TR>
																                	   	   <TD>
																														 </FORM>
																											   </TD>
																                	   </TR>
																										 <TR>
																                	   	   <TD height="10"></TD>
																                	   </TR>			 
																                </TABLE>	
																						 </TD>
																				 </TR>
																		</TABLE>													          
													 		 </TD>
													 </TR>
													 <TR>
													 		 <TD class="celda_footer"> 
													 		 		 <TABLE class="tabla_acoplada" cellpadding="0" cellspacing="0">
													 		 		 				<TR>
													 		 		 						<TD class="celda_footer_left"><IMG width="15px" height="15px" src="templates/Default/img/footer_left.gif" /></TD>
													 		 		 						<TD class="celda_footer_center">Para dudas, quejas y/o sugerencias, escribir al <A class="link_celda_footer" HREF="mailto:ryokojoe@yahoo.es">webmaster</A></TD>
													 		 		 						<TD class="celda_footer_right"><IMG width="15px" height="15px" src="templates/Default/img/footer_right.gif" /></TD>
													 		 		 				</TR>
													 		 		 </TABLE>
													 		 </TD>
													 </TR>
													 <TR>
													 		 <TD class="texto_creditos" height="10">
													 		 		 Beatriz Urbano Vega, 3&ordm; ASI, Proyecto Final - 2008 Copyright &copy; / Dise&ntilde;o &copy; <A class="link_parrafo_creditos" HREF="http://www.abtu.net/inb/dsign/index.html" target="_blank">D_sign</A>
													 		 </TD>
													 </TR>
										</TABLE>																														
						</CENTER>
			</BODY>
</HTML>