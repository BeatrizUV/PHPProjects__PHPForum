<TR>		
    <TD width="10px"></TD>
		<TD style="text-align: left; width: 380px;">
			  <INPUT type="button" class="button" name="nuevo" value="Nuevo" onClick="createPost('<?=$id_theme?>')" />&nbsp;
<?
if (isset($_SESSION["haySesion"]))
{
    $userLogged = unserialize($_SESSION["userlog"]);
		     		
		if (($userLogged->getRank() == -2) || ($userLogged->getRank() == -1))
		{
?>
		 	  <INPUT type="button" class="button" style="width: 115px;" name="borrar" value="Borrar seleccionados" onClick="document.formDeletePosts.submit()" />&nbsp;
		 	  <INPUT type="button" class="button" name="vaciar" value="Borrar Todos" onClick="emptyTheme('<?=$id_theme?>')" />&nbsp;
<?		
		}
}					        
?>								
		</TD>
		<TD width="10px"></TD>
<TR>		