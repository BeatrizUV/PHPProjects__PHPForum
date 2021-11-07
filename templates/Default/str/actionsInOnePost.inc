<?
if (isset($_SESSION["haySesion"]))
{
    $userLogged = unserialize($_SESSION["userlog"]);
			    
		/***** CHEQUEAR LOS PERMISOS DEL USUARIO *****/
		$query = "SELECT id_theme FROM phpforum_moderated_themes WHERE id_user LIKE ".$userLogged->getId_user()." AND id_theme LIKE ".$id_theme;			    
		$mode = $gesBD->selectOne($query, "id_theme");      		
		if (($userLogged->getRank() == -2) || ($userLogged->getRank() == -1) || ($mode))
		{			        
?>
<TABLE class="tabla_acoplada" style="text-align: left;">
		<TR>
				<TD width="100%"></TD>
				<TD>
<?
				if ($is_fixed == 0)
				{
?>
						<INPUT class="button" style="width: 45px; font-size: 9px; font-weight: bold;" type="button" name="pin" id="pin" value="Fijar" onClick="pinPost('<?=$id_post?>')" />
<?				
				}
				else if ($is_fixed == 1)
				{
?>
						<INPUT class="button" style="width: 45px; font-size: 9px; font-weight: bold;" type="button" name="unpin" id="unpin" value="Desfijar" onClick="unpinPost('<?=$id_post?>')" />
<?				
				}
?>			
				</TD>	 
				<TD>
<?
				if ($status == 0)
				{
?>
						<INPUT class="button" style="width: 40px; font-size: 9px; font-weight: bold;" type="button" name="abrir" id="abrir" value="Abrir" onClick="openPost('<?=$id_post?>')" />
<?				
				}
				else if ($status == 1)
				{
?>
						<INPUT class="button" style="width: 40px; font-size: 9px; font-weight: bold;" type="button" name="cerrar" id="cerrar" value="Cerrar" onClick="closePost('<?=$id_post?>')" />
<?				
				}
?>			
				</TD>	
				<TD><INPUT class="button" style="width: 16px; font-weight: bold; font-size: 9px;" type="button" name="borrar" id="borrar" value=" X " onClick="deletePost('<?=$id_post?>', '<?=$id_theme?>')" /></TD>
				<TD><INPUT type="checkbox" name="<?=$id_post?>" id="<?=$id_post?>" value="" /></TD>
		</TR>
</TABLE>	
<?									
		}					
		/**********/
}
?>					