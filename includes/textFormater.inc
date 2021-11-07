<?
	// Formatea el texto que llega desde el GET
	function charsFromGet($cadena)
	{
      $cadena = str_replace("[a]", "&aacute;", $cadena);
  	 	$cadena = str_replace("[e]", "&eacute;", $cadena);
  	 	$cadena = str_replace("[i]", "&iacute;", $cadena);
  	 	$cadena = str_replace("[o]", "&oacute;", $cadena);
  	 	$cadena = str_replace("[u]", "&uacute;", $cadena);
  	 	$cadena = str_replace("[A]", "&Aacute;", $cadena);
  	 	$cadena = str_replace("[E]", "&Eacute;", $cadena);
  	 	$cadena = str_replace("[I]", "&Iacute;", $cadena);
  	 	$cadena = str_replace("[O]", "&Oacute;", $cadena);
  	 	$cadena = str_replace("[U]", "&Uacute;", $cadena);  	 	
  	 	$cadena = str_replace("[n]", "&ntilde;", $cadena);
  	 	$cadena = str_replace("[N]", "&Ntilde;", $cadena);
  	 	$cadena = str_replace("%20%", " ", $cadena);
  	 	$cadena = str_replace("[quotdoble]", "&quot;", $cadena);
			$cadena = str_replace("[amp]", "&amp;", $cadena);
			$cadena = str_replace("[quotsimple]", "&#39;", $cadena);
	 	  $cadena = str_replace("[lt]", "&lt;", $cadena);
	 	  $cadena = str_replace("[gt]", "&gt;", $cadena);	 	  
	 	  $cadena = str_replace("[eur]", "&euro;", $cadena);
	 	  $cadena = str_replace("[excl]", "&iexcl;", $cadena);	 	 
		  $cadena = str_replace("[c]", "&copy;", $cadena); 
		  $cadena = str_replace("[1a]", "&ordf;", $cadena);
		  $cadena = str_replace("[1o]", "&ordm;", $cadena);
		  $cadena = str_replace("[miramal]", "&not;", $cadena);
		  $cadena = str_replace("[r]", "&reg;", $cadena);
		  $cadena = str_replace("[puntomedio]", "&midot;", $cadena);
		  $cadena = str_replace("[ceril]", "&ccedil;", $cadena);
		  $cadena = str_replace("[Ceril]", "&Ccedil;", $cadena);
		  $cadena = str_replace("[quest1]", "&iquest;", $cadena);
			$cadena = str_replace("[quest2]", "?", $cadena);
			$cadena = str_replace("[dolar]", "&#36;", $cadena);
			$cadena = str_replace("[almoadilla]", "&#35;", $cadena);
			$cadena = str_replace("[x100]", "&#37;", $cadena);
			$cadena = str_replace("barralinux", "&#47;", $cadena);
			$cadena = str_replace("[arroba]", "&#64;", $cadena);			
			$cadena = str_replace("[barrawindows]", "&#92;", $cadena);
			$cadena = str_replace("[circun]", "$#94;", $cadena);
			$cadena = str_replace("[key1]", "&#123;", $cadena);
			$cadena = str_replace("[key2]", "&#125;", $cadena);
			$cadena = str_replace("[barravertical]", "&#124;", $cadena);
			$cadena = str_replace("[onda]", "&#126;", $cadena);
			$cadena = str_replace("[igual]", "&#126;", $cadena);
			
			return $cadena;							  
	}
	
	// Formatea el texto para meterlo en el GET
	function charsToGet($cadena)
	{
      $cadena = str_replace("&aacute;", "[a]", $cadena);
  	 	$cadena = str_replace("&eacute;", "[e]", $cadena);
  	 	$cadena = str_replace("&iacute;", "[i]", $cadena);
  	 	$cadena = str_replace("&oacute;", "[o]", $cadena);
  	 	$cadena = str_replace("&uacute;", "[u]", $cadena);
  	 	$cadena = str_replace("&Aacute;", "[A]", $cadena);
  	 	$cadena = str_replace("&Eacute;", "[E]", $cadena);
  	 	$cadena = str_replace("&Iacute;", "[I]", $cadena);
  	 	$cadena = str_replace("&Oacute;", "[O]", $cadena);
  	 	$cadena = str_replace("&Uacute;", "[U]", $cadena);  	 	
  	 	$cadena = str_replace("&ntilde;", "[n]", $cadena);
  	 	$cadena = str_replace("&Ntilde;", "[N]", $cadena);
  	 	$cadena = str_replace(" ", "%20%", $cadena);
  	 	$cadena = str_replace("&quot;", "[quotdoble]", $cadena);
			$cadena = str_replace("&amp;", "[amp]", $cadena);
			$cadena = str_replace("&#39;", "[quotsimple]", $cadena);
	 	  $cadena = str_replace("&lt;", "[lt]", $cadena);	 	  
	 	  $cadena = str_replace("<", "[lt]", $cadena);
	 	  $cadena = str_replace(">", "[gt]", $cadena);
	 	  $cadena = str_replace("&gt;", "[gt]", $cadena);	 	  
	 	  $cadena = str_replace("&euro;", "[eur]", $cadena);
	 	  $cadena = str_replace("&iexcl;", "[excl]", $cadena);	 	 
		  $cadena = str_replace("&copy;", "[c]", $cadena); 
		  $cadena = str_replace("&ordf;", "[1a]", $cadena);
		  $cadena = str_replace("&ordm;", "[1o]", $cadena);
		  $cadena = str_replace("&not;", "[miramal]", $cadena);
		  $cadena = str_replace("&reg;", "[r]", $cadena);
		  $cadena = str_replace("&midot;", "[puntomedio]", $cadena);
		  $cadena = str_replace("&ccedil;", "[ceril]", $cadena);
		  $cadena = str_replace("&Ccedil;", "[Ceril]", $cadena);
		  $cadena = str_replace("&iquest;", "[quest1]", $cadena);
			$cadena = str_replace("?", "[quest2]", $cadena);
			$cadena = str_replace("&#36;", "[dolar]", $cadena);
			$cadena = str_replace("&#35;", "[almoadilla]", $cadena);
			$cadena = str_replace("#", "[almoadilla]", $cadena);
			$cadena = str_replace("&#37;", "[x100]", $cadena);
			$cadena = str_replace("&#47;", "[barralinux]", $cadena);
			$cadena = str_replace("&#64;", "[arroba]", $cadena);			
			$cadena = str_replace("&#92;", "[barrawindows]", $cadena);
			$cadena = str_replace("/", "[barralinux]", $cadena);
			$cadena = str_replace("@", "[arroba]", $cadena);			
			$cadena = str_replace("\\", "[barrawindows]", $cadena);
			$cadena = str_replace("$#94;", "[circun]", $cadena);
			$cadena = str_replace("&#123;", "[key1]", $cadena);
			$cadena = str_replace("{", "[key1]", $cadena);
			$cadena = str_replace("&#125;", "[key2]", $cadena);
			$cadena = str_replace("}", "[key2]", $cadena);
			$cadena = str_replace("&#124;", "[barravertical]", $cadena);
			$cadena = str_replace("|", "[barravertical]", $cadena);
			$cadena = str_replace("&#126;", "[onda]", $cadena);
			$cadena = str_replace("~", "[onda]", $cadena);
			$cadena = str_replace("=", "[igual]", $cadena);
			$cadena = str_replace("&#61;", "[igual]", $cadena);			
			
			return $cadena;							  
	}
	
	// Formatea el texto en formato HTML
	function replaceCharsToHTML($cadena)
	{	    
	    $cadena = str_replace("á", "&aacute;", $cadena);
	    $cadena = str_replace("é", "&eacute;", $cadena);
	    $cadena = str_replace("í", "&iacute;", $cadena);
	    $cadena = str_replace("ó", "&oacute;", $cadena);
	    $cadena = str_replace("ú", "&uacute;", $cadena);
	    $cadena = str_replace("Á", "&Aacute;", $cadena);
	    $cadena = str_replace("É", "&Eacute;", $cadena);
	    $cadena = str_replace("Í", "&Iacute;", $cadena);
	    $cadena = str_replace("Ó", "&Oacute;", $cadena);
	    $cadena = str_replace("Ú", "&Uacute;", $cadena);
	    $cadena = str_replace("ñ", "&ntilde;", $cadena);
	    $cadena = str_replace("Ñ", "&Ntilde;", $cadena);	 
			$cadena = str_replace("€", "&euro;", $cadena);
  	  $cadena = str_replace("¡", "&iexcl;", $cadena);   
  	  $cadena = str_replace("¿", "&iquest;", $cadena);
  	  $cadena = str_replace(">", "&gt;", $cadena);
  	  $cadena = str_replace("<", "&lt;", $cadena);
  	  //$cadena = str_replace("\"", "&quot;", $cadena);
  	  
  	  return $cadena;
	}
	
	// Formatea el texto en formato HTML salvo los caracteres que aparecen en las etiquetas HTML (<, >, /)
	function replaceCharsToHTML2($cadena)
	{	    
	    $cadena = str_replace("á", "&aacute;", $cadena);
	    $cadena = str_replace("é", "&eacute;", $cadena);
	    $cadena = str_replace("í", "&iacute;", $cadena);
	    $cadena = str_replace("ó", "&oacute;", $cadena);
	    $cadena = str_replace("ú", "&uacute;", $cadena);
	    $cadena = str_replace("Á", "&Aacute;", $cadena);
	    $cadena = str_replace("É", "&Eacute;", $cadena);
	    $cadena = str_replace("Í", "&Iacute;", $cadena);
	    $cadena = str_replace("Ó", "&Oacute;", $cadena);
	    $cadena = str_replace("Ú", "&Uacute;", $cadena);
	    $cadena = str_replace("ñ", "&ntilde;", $cadena);
	    $cadena = str_replace("Ñ", "&Ntilde;", $cadena);	 
			$cadena = str_replace("€", "&euro;", $cadena);
  	  $cadena = str_replace("¡", "&iexcl;", $cadena);   
  	  $cadena = str_replace("¿", "&iquest;", $cadena);
  	  
  	  return $cadena;
	}
	
	// Formatea el texto desde HTML a texto normal
	function replaceCharsFromHTML($cadena)
	{
	    $cadena = str_replace("&aacute;", "á", $cadena);
	    $cadena = str_replace("&eacute;", "é", $cadena);
	    $cadena = str_replace("&iacute;", "í", $cadena);
	    $cadena = str_replace("&oacute;", "ó", $cadena);
	    $cadena = str_replace("&uacute;", "ú", $cadena);
	    $cadena = str_replace("&Aacute;", "Á", $cadena);
	    $cadena = str_replace("&Eacute;", "É", $cadena);
	    $cadena = str_replace("&Iacute;", "Í", $cadena);
	    $cadena = str_replace("&Oacute;", "Ó", $cadena);
	    $cadena = str_replace("&Uacute;", "Ú", $cadena);
	    $cadena = str_replace("&ntilde;", "ñ", $cadena);
	    $cadena = str_replace("&Ntilde;", "Ñ", $cadena);	 
			$cadena = str_replace("&euro;", "€", $cadena);
  	  $cadena = str_replace("&iexcl;", "¡", $cadena);   
  	  $cadena = str_replace("&iquest;", "¿", $cadena);
  	  
  	  return $cadena;
	}
	
	// Formatea el texto de BBCode a HTML
	function replaceBBCodeToHTML($cadena)
	{
	    $id_img = time();
	    
	    $cadena = str_replace("[B]", "<B>", $cadena);
	    $cadena = str_replace("[/B]", "</B>", $cadena);
	    $cadena = str_replace("[I]", "<I>", $cadena);
	    $cadena = str_replace("[/I]", "</I>", $cadena);
	    $cadena = str_replace("[U]", "<U>", $cadena);
	    $cadena = str_replace("[/U]", "</U>", $cadena);
	    $cadena = str_replace("\n", "<BR>", $cadena);
	    $cadena = preg_replace("/\[COLOR=(.*?)\](.*?)\[\/COLOR\]/", "<SPAN style=\"color: \\1;\">\\2</SPAN>", $cadena);
	    $cadena = preg_replace("/\[SIZE=(.*?)\](.*?)\[\/SIZE\]/", "<SPAN style=\"font-size: \\1px;\">\\2</SPAN>", $cadena);
	   		      
	    while(ereg("\[QUOTE=", $cadena))
	    {
	        $cadena = preg_replace("/\[QUOTE=(.*?)\](.*?)\[\/QUOTE\]/", "<TABLE class=\"tabla_cita\"><TR><TD><B><I>\\1</I></B> dijo:</TD></TR><TR><TD class=\"celda_cita\">\\2</TD></TR></TABLE>", $cadena);	       
			}
	    
	    $cadena = preg_replace("/\[URL=(.*?)\](.*?)\[\/URL\]/", "<A HREF=\"\\1\" class=\"link_msg\" target=\"_blank\">\\2</A>", $cadena);
	    $cadena = preg_replace("/\[IMG\](.*?)\[\/IMG\]/", "<IMG src=\"\\1\" id=\"".$id_img."\" name=\"".$id_img."\" onLoad=\"resizeImg(\'".$id_img."\')\" />", $cadena);
			$cadena = str_replace("\'", "'", $cadena);	    
			
			/***** EMOTICONOS *****/
			$cadena = str_replace("[:D]", "<IMG src='includes/img/emoticonos/icon_bigsmile.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:)]", "<IMG src='includes/img/emoticonos/icon_smile.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:(]", "<IMG src='includes/img/emoticonos/icon_sad.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:o]", "<IMG src='includes/img/emoticonos/icon_surprised.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[O.oUu]", "<IMG src='includes/img/emoticonos/icon_shock.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:?]", "<IMG src='includes/img/emoticonos/icon_confused.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[8)]", "<IMG src='includes/img/emoticonos/icon_cool.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[XD]", "<IMG src='includes/img/emoticonos/icon_XD.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:x]", "<IMG src='includes/img/emoticonos/icon_mad.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[:P]", "<IMG src='includes/img/emoticonos/icon_tongue.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[¬///¬]", "<IMG src='includes/img/emoticonos/icon_redface.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[T.T]", "<IMG src='includes/img/emoticonos/icon_cry.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[):(]", "<IMG src='includes/img/emoticonos/icon_evil.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[):D]", "<IMG src='includes/img/emoticonos/icon_twisted.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[._.Uu]", "<IMG src='includes/img/emoticonos/icon_rolleyes.gif' width='15px' height='15px' />", $cadena);
			$cadena = str_replace("[;)]", "<IMG src='includes/img/emoticonos/icon_wink.gif' width='15px' height='15px' />", $cadena);
			/**********************/
			
			return $cadena;
	}

  // Formatea el texto de HTML a BBCode
  function replaceHTMLToBBCode($cadena)
	{
	    $id_img = time();
	    
	    $cadena = str_replace("<B>", "[B]", $cadena);
	    $cadena = str_replace("</B>", "[/B]", $cadena);
	    $cadena = str_replace("<I>", "[I]", $cadena);
	    $cadena = str_replace("</I>", "[/I]", $cadena);
	    $cadena = str_replace("<U>", "[U]", $cadena);
	    $cadena = str_replace("</U>", "[/U]", $cadena);
	    $cadena = str_replace("<BR>", "\n", $cadena);
	    $cadena = preg_replace("/<SPAN style=\"color: (.*);\">(.*)<\/SPAN>/", "[COLOR=\\1]\\2[/COLOR]", $cadena);
			$cadena = preg_replace("/<SPAN style=\"font-size: (.*)px;\">(.*)<\/SPAN>/", "[SIZE=\\1]\\2[/SIZE]", $cadena); 
			/***** [URL] *****/ 
			$cadena = preg_replace("/<A HREF=\"(.*)\" class=\"link_msg\" target=\"_blank\">(.*)<\/A>/s", "[URL=\\1]\\2[/URL]", $cadena);
			/***** [/URL] *****/  
			/***** [IMG] *****/
			$cadena = str_replace("\'", "'", $cadena);
			$cadena = preg_replace("/<IMG src=\"(.*)\" id=\"(.*)\" onLoad=\"(.*)\" \/>/s", "[IMG]\\1[/IMG]", $cadena);
	    /***** [/IMG] *****/
	    /***** [QUOTE] *****/
	    	   
	    while (ereg("<TABLE", $cadena))
			{
			    $cadena = preg_replace("/<TABLE (.*)><TR><TD>\[B\]\[I\](.*)?\[\/I\]\[\/B\] dijo:<\/TD><\/TR><TR><TD (.*)>(.*)<\/TD><\/TR><\/TABLE>/s", "[QUOTE=\\2]\\4[/QUOTE]", $cadena);     	
      }
			
			/***** [/QUOTE] *****/	
			
			/***** EMOTICONOS *****/
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_bigsmile.gif' width='15px' height='15px' />", "[:D]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_smile.gif' width='15px' height='15px' />", "[:)]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_sad.gif' width='15px' height='15px' />", "[:(]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_surprised.gif' width='15px' height='15px' />", "[:o]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_shock.gif' width='15px' height='15px' />", "[O.oUu]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_confused.gif' width='15px' height='15px' />", "[:?]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_cool.gif' width='15px' height='15px' />", "[8)]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_XD.gif' width='15px' height='15px' />", "[XD]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_mad.gif' width='15px' height='15px' />", "[:x]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_tongue.gif' width='15px' height='15px' />", "[:P]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_redface.gif' width='15px' height='15px' />", "[¬///¬]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_cry.gif' width='15px' height='15px' />", "[T.T]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_evil.gif' width='15px' height='15px' />", "[):(]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_twisted.gif' width='15px' height='15px' />", "[):D]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_rolleyes.gif' width='15px' height='15px' />", "[._.Uu]", $cadena);
			$cadena = str_replace("<IMG src='includes/img/emoticonos/icon_wink.gif' width='15px' height='15px' />", "[;)]", $cadena);
			/**********************/											
			
			return $cadena;
	} 
?>
