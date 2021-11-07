<TR>		
    <TD width="10px"></TD>
		<TD style="text-align: left; width: 380px;">		
<?    
	 if ($post_status == 1)
	 {
?>			  
			  <INPUT type="button" class="button" name="responder" value="Responder" onClick="createMsg('<?=$id_post?>')" />&nbsp;
<?	    
	 }
	 else if ($post_status == 0)
	 {
?>	 
	      <INPUT type="button" class="button" name="cerrado" value="Cerrado" disabled />&nbsp;
<?	      
	 }
?>							
		</TD>
		<TD width="10px"></TD>
<TR>		