<?
	if ((isset($_SESSION["haySesion"])) && ($msg->getExistAuthor() == 1))
	{
	    $userLogged = unserialize($_SESSION["userlog"]);
	    if ($userLogged->getId_user() != $id_author)
	    {
?>
		  <A HREF="index.php?accion=VoteUser&op=positive&idu=<?=$id_author?>&idp=<?=$id_post?>" class="link_cuerpo" title="Voto positivo">[ + ]</A> / <A HREF="index.php?accion=VoteUser&op=negative&idu=<?=$id_author?>&idp=<?=$id_post?>" class="link_cuerpo" title="Voto negativo">[ - ]</A>		  
<?	    
			}
	}
?>	 	