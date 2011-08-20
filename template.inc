<?php

include "layout2.php";

class mainTemplate extends template {

/**
 * method for printing out template header
 *
 * @param  array    assoc array containing current page info
 */
public static function printHeader(){ ?>


<!doctype html>
<html lang="<?=register::$vars['coscms_main']['lang']?>">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title><?php echo template::getTitle(); ?></title>


   <!-- <link rel="stylesheet" type="text/css" href="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/themes/ui-lightness/jquery-ui.css" />-->
<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/themes/hot-sneaks/jquery-ui.css" />

    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/1.5.0/jquery.min.js"></script>
    <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jqueryui/1.8.9/jquery-ui.js"></script>
    <link href="/templates/1kbgrid/grid.css" type="text/css" rel="stylesheet" media="screen"/>
   <!-- <link href="/templates/1kbgrid/common.css" type="text/css" rel="stylesheet" media="screen"/>-->

<?php

template::setTemplateCss('1kbgrid');
echo template::getCss();
echo template::getInlineCss();

echo template::getJs();
echo template::getInlineJs();

?>


</head>
<body>

    <div id ="hidden">
<a href="/account/login/index">logon</a>
</div>

<div id ="page">

    <div class="row">
            <div class="column grid_3">
            &nbsp;
            </div>
            <div class="column grid_9">

                <?php if (empty(register::$vars['coscms_main']['logo'])) { ?>
                <a href="/"><?php echo $_SERVER['HTTP_HOST']?></a><?php
            } else { ?>
                <div id = "logo_img"><a href="/"><img alt="<?php echo $_SERVER['HTTP_HOST']?>" src="/logo/<?=register::$vars['coscms_main']['logo']?>" /></a></div><?php
            } ?>



            </div>

    </div>

    <div class="row">
            <div class="column grid_3">
            &nbsp;
            </div>
            <div class="column grid_9">
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

                $blocks = layout::getBlocks();
                foreach ($blocks as $key => $val){
                    print $val;
                }

                ?>
                </div>
         </div>

         <div class="column grid_6">
             <div id="module_menu"><?php
               echo layout::getModuleMenu(); ?>
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
        <div class="column grid_3">
            <div id="sidebar_right">
                <?php

                $blocks = layout::getBlocksSec();
                foreach ($blocks as $key => $val){
                    print $val;
                }

                ?>
            </div>
         </div>
    </div>


    <div class="row">
            <div class="column grid_12">
            <?=template::getEndContent()?>
            </div>
    </div>
    
</div>
</body>
</html>

<? 

    // end function

    }
    
// end class
}

