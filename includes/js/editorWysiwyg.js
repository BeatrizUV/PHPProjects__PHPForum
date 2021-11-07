// Función que inserta etiquetas BBCode de estilo de texto
function editFontStyle(field, tag)
{
		var input = document.getElementById(field);
		if(typeof document.selection != 'undefined' && document.selection)
		{
				var str = document.selection.createRange().text;
				input.focus();
				var sel = document.selection.createRange();
				sel.text = "[" + tag + "]" + str + "[/" +tag+ "]";
				sel.select();
				return;
		}
		else if(typeof input.selectionStart != 'undefined')
		{
				var start = input.selectionStart;
				var end = input.selectionEnd;
				var insText = input.value.substring(start, end);
				input.value = input.value.substr(0, start) + '['+tag+']' + insText + '[/'+tag+']'+ input.value.substr(end);
				input.focus();
				input.setSelectionRange(start+2+tag.length+insText.length+3+tag.length,start+2+tag.length+insText.length+3+tag.length);
				return;
		}
		else
		{
				input.value+=' ['+tag+'][/'+tag+']';
				return;
		}
}	

// Funcion que inserta etiquetas BBCode de tamaño de texto
function editFontSize(field)
{
		var input = document.getElementById(field);
		var size = document.getElementById('fontsize').value;
		if(typeof document.selection != 'undefined' && document.selection)
		{
				var str = document.selection.createRange().text;
				input.focus();
				var sel = document.selection.createRange();
				sel.text = "[SIZE="+size+"]" + str + "[/SIZE]";
				sel.select();
				return;
		}
		else if(typeof input.selectionStart != 'undefined')
		{
				var start = input.selectionStart;
				var end = input.selectionEnd;
				var insText = input.value.substring(start, end);
				input.value = input.value.substr(0, start) + '[SIZE='+size+']' + insText + '[/SIZE]'+ input.value.substr(end);
				input.focus();
				input.setSelectionRange(start+2+size.length+insText.length+3+size.length,start+2+size.length+insText.length+3+size.length);
				return;
		}
		else
		{
				input.value+=' [SIZE='+size+'][/SIZE]';
				return;
		}
}	

// Función que inserta etiquetas BBCode de color de texto
function editFontColor(field)
{
		var input = document.getElementById(field);
		var color = document.getElementById('fontcolor').value;
		if(typeof document.selection != 'undefined' && document.selection)
		{
				var str = document.selection.createRange().text;
				input.focus();
				var sel = document.selection.createRange();
				sel.text = "[COLOR="+color+"]" + str + "[/COLOR]";
				sel.select();
				return;
		}
		else if(typeof input.selectionStart != 'undefined')
		{
				var start = input.selectionStart;
				var end = input.selectionEnd;
				var insText = input.value.substring(start, end);
				input.value = input.value.substr(0, start) + '[COLOR='+color+']' + insText + '[/COLOR]'+ input.value.substr(end);
				input.focus();
				input.setSelectionRange(start+2+color.length+insText.length+3+color.length,start+2+color.length+insText.length+3+color.length);
				return;
		}
		else
		{
				input.value+=' [COLOR='+color+'][/COLOR]';
				return;
		}
}

// Función que inserta etiquetas BBCode de cita
function insertQuote(field)
{
		var input = document.getElementById(field);
		
		var name = prompt("Cita de:", "");
    if (name == null)
    {
        name = "";
		}
		
		if(typeof document.selection != 'undefined' && document.selection)
		{
				var str = document.selection.createRange().text;
				input.focus();
				var sel = document.selection.createRange();
				sel.text = "[QUOTE="+name+"]" + str + "[/QUOTE]";
				sel.select();
				return;
		}
		else if(typeof input.selectionStart != 'undefined')
		{
				var start = input.selectionStart;
				var end = input.selectionEnd;
				var insText = input.value.substring(start, end);
				input.value = input.value.substr(0, start) + '[QUOTE='+name+']' + insText + '[/QUOTE]'+ input.value.substr(end);
				input.focus();
				//input.setSelectionRange(start+2+tag.length+insText.length+3+tag.length,start+2+tag.length+insText.length+3+tag.length);
				return;
		}
		else
		{
				input.value+=' [QUOTE='+name+'][/QUOTE]';
				return;
		}
}	

// Función que inserta etiquetas BBCode de links
function insertLink(field)
{
		var input = document.getElementById(field);
		
		var link = prompt("Url de la web:", "http://");
    if ((link != null) && (link != "http://"))
    {
        if(typeof document.selection != 'undefined' && document.selection)
				{				    
						var str = document.selection.createRange().text;
						var linkName = prompt("Nombre de la web:", str);
				    if (linkName == null)
				    {
				        linkName = link;
						}
						input.focus();
						var sel = document.selection.createRange();
						sel.text = "[URL="+link+"]" + linkName + "[/URL]";
						sel.select();
						return;
				}
				else if(typeof input.selectionStart != 'undefined')
				{
						var start = input.selectionStart;
						var end = input.selectionEnd;
						var insText = input.value.substring(start, end);
						var linkName = prompt("Nombre de la web:", insText);
				    if (linkName == null)
				    {
				        linkName = link;
						}
						input.value = input.value.substr(0, start) + '[URL='+link+']' + linkName + '[/URL]'+ input.value.substr(end);
						input.focus();
						//input.setSelectionRange(start+2+tag.length+insText.length+3+tag.length,start+2+tag.length+insText.length+3+tag.length);
						return;
				}
				else
				{
				    var linkName = prompt("Nombre de la web:", "");
				    if (linkName == null)
				    {
				        linkName = link;
						}
						input.value+=' [URL='+link+']'+linkName+'[/URL]';
						return;
				}
    }
}	

// Función que inserta etiquetas BBCode de imágenes
function insertImg(field)
{
		var input = document.getElementById(field);
		
		var img = prompt("Url de la imagen:", "http://");
    if ((img != null) && (img != "http://"))
    {	
        if(typeof document.selection != 'undefined' && document.selection)
				{				    
						var str = document.selection.createRange().text;						
						input.focus();
						var sel = document.selection.createRange();
						sel.text = "[IMG]" + img + "[/IMG]";
						sel.select();
						return;
				}
				else if(typeof input.selectionStart != 'undefined')
				{
						var start = input.selectionStart;
						var end = input.selectionEnd;
						var insText = input.value.substring(start, end);						
						input.value = input.value.substr(0, start) + '[IMG]' + img + '[/IMG]'+ input.value.substr(end);
						input.focus();
						//input.setSelectionRange(start+2+tag.length+insText.length+3+tag.length,start+2+tag.length+insText.length+3+tag.length);
						return;
				}
				else
				{				    
						input.value+=' [IMG]'+img+'[/IMG]';
						return;
				}
    }
}	

// Función que inserta etiquetas BBCode de emoticonos o smileys
function insertEmoticon(field, code)
{
		var input = document.getElementById(field);
		
    if(typeof document.selection != 'undefined' && document.selection)
		{				    
				var str = document.selection.createRange().text;						
				input.focus();
				var sel = document.selection.createRange();
				sel.text = ' '+code+' ';
				sel.select();
				return;
		}
		else if(typeof input.selectionStart != 'undefined')
		{
				var start = input.selectionStart;
				var end = input.selectionEnd;
				var insText = input.value.substring(start, end);						
				input.value = input.value.substr(0, start) + ' '+code+' ' + input.value.substr(end);
				input.focus();
				//input.setSelectionRange(start+2+tag.length+insText.length+3+tag.length,start+2+tag.length+insText.length+3+tag.length);
				return;
		}
		else
		{				    
				input.value += ' '+code+' ';
				return;
		}
}	

// Función que cambia el puntero a hand cuando pasa por encima de los emoticonos o smileys
function mano(pos)
{
    if (pos == "in")
    {
        document.body.style.cursor="hand";
		}
		else if (pos == "out")
		{
		    document.body.style.cursor="default";
		}
}