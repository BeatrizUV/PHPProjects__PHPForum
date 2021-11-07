<?
    require("includes/config/forum_config.inc");
    session_start();
    session_unset();
	  session_destroy();
    include("templates/".$template."/str/error.str");
?>