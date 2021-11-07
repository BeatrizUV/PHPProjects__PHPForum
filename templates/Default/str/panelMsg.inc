<?
	if (isset($_SESSION["haySesion"]))
	{
	 	  $userLogged = unserialize($_SESSION["userlog"]);
	 	  
	 	  if ($post_status == 1)
	 	  {
?>
		  <INPUT type="button" class="button" style="width: 40px; font-size: 9px;" name="citar" value=" CITAR " onClick="quoteMsg('<?=$id_msg?>', '<?=$id_post?>')" />
<?	 	  
			}
			
			if (($id_author == $userLogged->getId_user()) || ($userLogged->getRank() == -2) || ($userLogged->getRank() == -1))
			{
			    if ($is_first == 1)
			    {
?>
		  <INPUT type="button" class="button" style="width: 48px; font-size: 9px;" name="editar" value=" EDITAR " onClick="editPost('<?=$id_post?>')" />	
<?			    
					}
					else if ($is_first == 0)
					{
?>
		  <INPUT type="button" class="button" style="width: 48px; font-size: 9px;" name="editar" value=" EDITAR " onClick="editMsg('<?=$id_msg?>', '<?=$id_post?>')" />
<?					
					}	
			}
	
			if ($is_first == 0)
			{
			 	  if ((($id_author == $userLogged->getId_user()) && ($is_last == 1)) || (($userLogged->getRank() == -2) || ($userLogged->getRank() == -1) || ($mode)))
					{
?>
	    <INPUT type="button" class="button" style="width: 17px; font-size: 9px;" name="borrar" value=" X " onClick="deleteMsg('<?=$id_msg?>')" />
<?	
					}	
			}	
	}
?>	 	