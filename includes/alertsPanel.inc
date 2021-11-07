<?
	if (isset($_SESSION["haySesion"]))
	{
	 	  $userLogged = unserialize($_SESSION["userlog"]);
			      
			if (($userLogged->getRank() == -2) && ($is_banned_author == 0) && ($msg->getExistAuthor() == 1))
			{
?>
		  <A HREF="index.php?accion=AlertUser&op=positive&idu=<?=$id_author?>&idp=<?=$id_post?>" class="link_cuerpo" title="Alertar">[ + ]</A><? if ($alerts_author > 0) { ?> / <A HREF="index.php?accion=AlertUser&op=negative&idu=<?=$id_author?>&idp=<?=$id_post?>" class="link_cuerpo" title="Quitar alerta">[ - ]</A><? } ?>
<?	
			}		
	}
?>	 	