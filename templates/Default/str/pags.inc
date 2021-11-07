<?
  $limit = $_GET["limit"];  
  $totalLimit = $_GET["totalLimit"];
  
  if ($totalLimit > 30)
  {
      $numPags = $totalLimit / $limit;
	}  
	else
	{
	    $numPags = 1;
	}	
	
  $contLimit = 0;
  $pos = 0;
  $pags;
  $contPags = 0;
  
  for ($contLimit = 1; $contLimit <= $numPags; $contLimit++)
  {
      //echo "entra en el for";
   		if (($contLimit * 30) == $limit)
   		{
   		    //echo "encontrado el limit";
   		    $pos = $contLimit;   		    
   		    if (($pos - 3) > 0)
   		    {   		        
   		        echo "muestra previews";
   		        $init = $pos-3;
   		        for ($pos = $init; $pos <= $numPags; $pos++)
   		        {
   		            if ($contPags < 6)
   		            {
   		                if ($contPags == 0)
		   		            {
		   		                $pags["prev"] = $init * 30;
											}
											else if ($contPags < 5)
											{
											    $pags[$contPags] = $pos * 30;
											}
											else
											{
											    $pags["next"] = $pos * 30;
											}
									}   		            
							}
					}
   		    else
					{ 
					    //echo "No muestra previews <BR>";
							if (($pos - 2) > 0)
		   		    {
		   		     	  $init = $pos-2;		   		        
							}
							else if (($pos - 1) > 0)
			     	  {
			     	      $init = $pos-1;		   		        
							}
							else
							{
							    $init = $pos;							    
							}
							
							//echo $init;
							
							for ($pos = $init; $pos <= $numPags; $pos++)
   		        {
   		            //echo "Entra en el for sin prewiews";
   		            if ($contPags < 6)
   		            {   		                
											if ($contPags < 5)
											{
											    $pags[$contPags] = $pos * 30;
											}
											else
											{
											    $pags["next"] = $pos * 30;
											}
									}   		            
							}
					}
			}
	}
		
	for ($contPags = 0; $contPags < count($pags); $contPags++)
	{
	    if (count($pags) > 1)
	    {
?>Ir a la p&aacute;gina&nbsp;<?
	     	  if (isset($pags["prev"]))
					{
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags["prev"]?>" class="link_cuerpo">Anterior</A>, <?	 		
					}
					if (isset($pags[$contPags]))
					{
					    if ($pags[$contPags] == $limit)
					    {
?><?=$contPags+1?>, <?					    
							}
							else
							{
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags[$contPags]?>" class="link_cuerpo"><?=$contPags+1?></A>, <?
		 		      }			
					}
					if (isset($pags["next"]))
					{
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags["next"]?>" class="link_cuerpo">Siguiente</A><?			
					}	    
			}	 		
	}  
?>