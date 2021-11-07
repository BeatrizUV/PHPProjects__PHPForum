<?  
  // Código para paginar listas de elementos (no funciona)
  $totalLimit = $_GET["totalLimit"];
  $init = $_GET["init"];
  
  if ($totalLimit > 30)
  {
      $numPags = $totalLimit / 30;
      if ($numPags > 7)
      {
          $numPags = 7;
			}
	}  
	else
	{
	    $numPags = 1;
	}	
	
  $contLimit = 0;
  $pos = 0;
  $pags;  
  
  for ($contLimit = 1; $contLimit <= $numPags; $contLimit++)
  {
      //echo "entra en el for";
   		if (($contLimit * 30) == $init)
   		{
   		    //echo "encontrado el init";   		      		    
   		    if (($contLimit - 3) > 0)
   		    {   						    
   		        $pos = 0; 
   		        for ($pos = ($contLimit -3); $pos <= $numPags; $pos++)
   		        {
   		            if ($pos < 6)
   		            {
   		                if ($pos < 3)
		   		            {
		   		                if ($pos == 0)
		   		                {
		   		                    $pags["prev"] = $init - (30 * 3);
													}		   		                
													else if ($pos == 1)
													{
													    $pags[$pos] = $init - (30 * 2);
													}
													else if ($contPags == 2)
													{
													    $pags[$pos] = $init - 30;
													}
											}
											else if ($pos == 3)
											{
											 		 $pags[$pos] = $init;
											}
											else if ($pos > 3)
											{
											    if ($pos == 6)
											    {
											        $pags["next"] = $init + (30 * $pos);
													}
													else
													{
													    $pags[$pos] = $init + (30 * $pos);
													}											    
											}
									}   		            
							}
					}
   		    else
   		    {
   		        if (($contLimit - 2) > 0)
		   		    {   
		   		        $contLimitNoPrev = $contLimit - 2;
							}
							else if (($contLimit - 1) > 0)
							{
							    $contLimitNoPrev = $contLimit - 1;
							} 		        
							else 
							{
							    $contLimitNoPrev = $contLimit;
							}
							   		        
   		        $pos = 0; 
   		        for ($pos = $contLimitNoPrev; $pos <= $numPags; $pos++)
   		        {
   		            if ($pos < 6)
   		            {
   		                if ($pos < 3)
		   		            {		   		                		   		                
													if ($pos < 2)
													{
													    $pags[$pos] = $init - (30 * $pos);
													}
													else if ($pos == 2)
													{
													    $pags[$pos] = $init - 30;
													}
											}
											else if ($pos == 3)
											{
											 		 $pags[$pos] = $init;
											}
											else if ($pos > 3)
											{
											    if ($pos == 6)
											    {
											        $pags["next"] = $init + (30 * $pos);
													}
													else
													{
													    $pags[$pos] = $init + (30 * $pos);
													}											    
											}
									}  		            
							}
					}
			}
	}
		
	for ($pos = 0; $pos < count($pags); $pos++)
	{
	    if (count($pags) > 1)
	    {
?>Ir a la p&aacute;gina&nbsp;<?
	     	  if (isset($pags["prev"]))
					{
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags["prev"]?>" class="link_cuerpo"><< </A>, <?	 		
					}
					if (isset($pags[$pos]))
					{
					    if (($pos + 1) == count($pags))
					    {
					        if ($pags[$pos] == $limit)
					        {
?><?=$pos+1?><?					    
							    }							
						 	    else
							    {
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags[$pos]?>" class="link_cuerpo"><?=$pos+1?></A><?
		 		          } 								    
							}
							else
							{							
					        if ($pags[$pos] == $limit)
					        {
?><?=$pos+1?>, <?					    
							    }							
							    else
							    {
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags[$pos]?>" class="link_cuerpo"><?=$pos+1?></A>, <?
		 		          }	
              }		
					}
					if (isset($pags["next"]))
					{
?><A HREF="index.php?accion=<?=$accion?>&id=<?=$id?>&limit=<?=$pags["next"]?>" class="link_cuerpo"> >></A><?			
					}	    
			}	 		
	}  
?>