// Funci�n que redirige al ususario a la acci�n de crear un mensaje
function createMsg(id_post)
{
    location.href="index.php?accion=Navigate&destino=main_writeMsg&act=crearMsg&idp="+id_post;
}

// Funci�n que redirige al ususario a la acci�n de citar un mensaje
function quoteMsg(id_msg, id_post)
{  
    location.href="index.php?accion=ShowMsg&idm="+id_msg+"&idp="+id_post+"&pagina=main_writeMsg&act=citar";
}

// Funci�n que redirige al ususario a la acci�n de editar un mensaje
function editMsg(id_msg, id_post)
{
    location.href="index.php?accion=ShowMsg&idm="+id_msg+"&idp="+id_post+"&pagina=main_writeMsg&act=editarMsg";
}

// Funci�n que redirige al ususario a la acci�n de eliminar un mensaje
function deleteMsg(id_msg)
{
    location.href="index.php?accion=DeleteMsg&id="+id_msg; 
}

// Funci�n que redirige al ususario a la acci�n de cerrar un post
function closePost(id_post)
{
    location.href="index.php?accion=EditPost&status=0&id="+id_post;
}

// Funci�n que redirige al ususario a la acci�n de abrir un post
function openPost(id_post)
{
    location.href="index.php?accion=EditPost&status=1&id="+id_post;
}

// Funci�n que redirige al ususario a la acci�n de eliminar un post
function deletePost(id_post, id_theme)
{
    location.href="index.php?accion=DeletePost&idp="+id_post+"&idt="+id_theme;
}

// Funci�n que redirige al ususario a la acci�n de crear un post
function createPost(id_theme)
{
    location.href="index.php?accion=Navigate&destino=main_writeMsg&act=crearPost&idt="+id_theme;
}

// Funci�n que redirige al ususario a la acci�n de editar un post
function editPost(id_post)
{
    location.href="index.php?accion=ShowPost&idp="+id_post+"&pagina=main_writeMsg&act=editarPost";
}

// Funci�n que redirige al ususario a la acci�n de fijar un post
function pinPost(id_post)
{
    location.href="index.php?accion=EditPost&id="+id_post+"&pin=1";
}

// Funci�n que redirige al ususario a la acci�n de desfijar un post
function unpinPost(id_post)
{
    location.href="index.php?accion=EditPost&id="+id_post+"&pin=0";
}

// Funci�n que redirige al ususario a la acci�n de vaciar un tema
function emptyTheme(id_theme)
{
    location.href="index.php?accion=DeletePost&idt="+id_theme+"&all=on";
}

// Funci�n que redirige al ususario a la acci�n de crear un MP
function createMP()
{
    location.href="index.php?accion=Navigate&destino=main_writeMP";
}

// Funci�n que redirige al ususario a la acci�n de crear un MP
function responseMPToUser(idu)
{
    location.href="index.php?accion=Navigate&destino=main_writeMP&act=responderUser&idu="+idu;
}

// Funci�n que redirige al ususario a la acci�n de responder un MP
function responseMP(id_mp, box)
{    
    location.href="index.php?accion=ShowMP&id="+id_mp+"&pagina=main_writeMP&act=responder&box="+box;
}

// Funci�n que redirige al ususario a la acci�n de eliminar un MP
function deleteMP(id_mp, box)
{
    location.href="index.php?accion=DeleteMP&id="+id_mp+"&box="+box;
}

// Funci�n que redirige al ususario a la acci�n de vaciar una bandeja
function emptyBox(box)
{
    location.href="index.php?accion=DeleteMP&box="+box+"&all=on";
}

// Funci�n que redirige al ususario a la acci�n de cambiar de bandeja
function goTo(box)
{
    location.href="index.php?accion=ShowMPs&box="+box;
}