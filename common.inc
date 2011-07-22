<?php

/**
 * File contains contains class for creating forms
 *
 * @package    coslib
 */

define('HTML_FORM_TEXT_SIZE', 60);
define('HTML_FORM_MAX_FILE_SIZE', 1048576); // 1 MB
define('HTML_FORM_PASSWD_SIZE', 8);
define('HTML_FORM_TEXTAREA_WT', 70);
define('HTML_FORM_TEXTAREA_HT', 20);
define('HTML_FORM_TH_ATTR', 'align="right" valign="top"');
define('HTML_FORM_TD_ATTR', '');
define('MENU_LIST_START', '<ul id="nav_main">');
define('MENU_LIST_END', '</ul>');
define('MENU_SUBLIST_START', '<li>');
define('MENU_SUBLIST_END', '</li>');
define('MENU_SUB_SEPARATOR', ' | ');
define('MENU_SUB_SEPARATOR_SEC', ' :: ');

/**
 * function for printing form errors
 *
 * @param  array    errors to display on wrong form submit
 */
function view_form_errors($errors){
    if (is_string($errors)){
        view_error($errors);
        return;
    }
    echo "<!-- view_form_errors -->\n";
    echo "<div class=\"form_error\"><ul>\n";
    foreach($errors as $error){
        echo "<li>$error</li>\n";
    }
    echo "</ul></div>\n";
    echo "<!-- / end form_error -->\n";
}

function template_view_errors($errors){
    if (is_string($errors)){
        view_error($errors);
        return;
    }
    echo "<!-- view_form_errors -->\n";
    echo "<div class=\"form_error\"><ul>\n";
    foreach($errors as $error){
        echo "<li>DADA$error</li>\n";
    }
    echo "</ul></div>\n";
    echo "<!-- / end form_error -->\n";
}

/**
 * function for displaying an confirm message
 * @param   string   message positive confirmation on correct filled form
 */
function view_confirm($message){
    echo "<!-- view_confirm -->\n";
    echo "<div class=\"form_confirm\">\n";
    echo "<ul><li>$message</li></ul>\n";
    echo "</div>\n";
}

/**
 *
 * @param string   error message
 */
function view_error($message){
    echo "<!-- view_error -->\n";
    echo "<div class=\"form_error\">\n";
    echo "<p>$message</p></div>\n";

}

/**
 * function for printing a top line title of your page.
 *
 * @param  string   headline message to be printed
 */
function headline_message($message){
    echo "<!-- headline_message -->\n";
    echo "<div class=\"headline\">\n";
    echo "$message\n";
    echo "</div>\n";
}
