<?php

include_once "layout2.php";

template::init('1kbgrid');



class mainTemplate extends template {


/**
 * method for printing out template header
 *
 * @param  array    assoc array containing current page info
 */
public static function printHeader(){ 

    ?>
<!doctype html>
<html lang="<?=config::$vars['coscms_main']['lang']?>">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title><?php echo template::getTitle(); ?></title>


   <!-- <link rel="stylesheet" type="text/css" href="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/themes/ui-lightness/jquery-ui.css" />-->
<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/themes/hot-sneaks/jquery-ui.css" />

    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.5.0/jquery.min.js"></script>
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/jquery-ui.js"></script>
    <link href="/templates/1kbgrid/grid.css" type="text/css" rel="stylesheet" media="screen"/>
<?php
echo template::getMeta();
echo template::getJsHead();

echo template::setTemplateCss('1kbgrid');
echo template::getCss();
echo template::getInlineCss();



?>


</head>
<body>
<?=template::geStartHTML()?> 

<div id ="page">
<?php

if (session::isAdmin()) { ?>
    <div class="row">
            <div class="column grid_12">
                <div id="system_admin_menu">
            <?php
$blocks = layout2::getBlock('blocks_top');
                foreach ($blocks as $key => $val){
                    echo $val;
                }

?>

                 </div>
                        
           </div>

    </div>
<?php } ?>
<div class="row">
	<div class="column grid_12">
<?=template::getLogoHTML(); ?>
        </div>
</div>

<div class="row">
	<div class="column grid_12">
            <div id="main_menu">
            <?php
                echo layout2::getMainMenu(); ?>
            </div>
        </div>
</div>

<div class="row">
    <div class="column grid_3">
            <div id="sidebar_left">
            <?php

            $blocks = layout2::getBlock('blocks');
            foreach ($blocks as $key => $val){
                print $val;
            }

            ?>
            </div>
     </div>

     <div class="column grid_9">
         <div id="module_menu"><?php
           echo layout2::getModuleMenu(); ?>
         </div>

         <div class="system_message">
        <?php

        echo session::getActionMessage();

        ?>
        </div>
         <div id="content">


<?php

// end of function

}

/**
 * method for print footer of page
 */
public static function printFooter(){ ?>
         </div>
     </div>	
</div>

<div class="row">
	<div class="column grid_12">&nbsp;
        <?=template::getEndContent()?>
        </div>
</div>
    
</div>
    
        <?php



    echo template::getInlineJs();
echo template::getJs();
?>
</body>
</html>

<? 

    // end function

    }
    
// end class
}

