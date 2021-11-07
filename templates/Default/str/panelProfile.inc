		<A HREF="mailto:<?=$email_author?>" class="link_imagen" title="Mandar e-mail"><IMG src="templates/Default/img/email.gif" width="33px" height="22px" border="0" /></A>
		<A HREF="javascript:responseMPToUser('<?=$id_author?>')" class="link_imagen" title="Mandar MP"><IMG src="templates/Default/img/mp.gif" width="32px" height="22px" border="0" /></A>
<?
	if (!empty($msn_author))
	{
?>
	  <A HREF="http://members.msn.com/<?=$msn_author?>" class="link_imagen" target="_blank" title="Ver msn"><IMG src="templates/Default/img/msn.gif" width="33px" height="22px" border="0" /></A>
<?	
	}
	
	if (!empty($web_author))
	{
?>
	  <A HREF="<?=$web_author?>" class="link_imagen" target="_blank" title="Ver web"><IMG src="templates/Default/img/www.gif" width="33px" height="22px" border="0" /></A>
<?	
	}
?>	 	
