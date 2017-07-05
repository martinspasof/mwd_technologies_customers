<?php 
session_start(); 
define('ROOT', dirname($_SERVER['SCRIPT_FILENAME']));
$WEB_ROOT = "http://" . $_SERVER['HTTP_HOST'] . dirname($_SERVER['PHP_SELF']) . "/";
define('WEB_ROOT', $WEB_ROOT);
require_once("modules/AutoLoader/Classes/AutoLoader.inc");
require './Db.inc';
?>
<!DOCTYPE html>
<html lang="en">
<head>
	 <title>Customers</title>
	  <meta charset="utf-8">
	  <meta name="viewport" content="width=device-width, initial-scale=1">
	  <link rel="stylesheet"
          href="<?php echo WEB_ROOT ?>/assets/css/bootstrap.css"/>
    <link rel="stylesheet" href="<?php echo WEB_ROOT ?>/assets/css/bootstrap-theme.min.css"/>
    <link rel="stylesheet" href="<?php echo WEB_ROOT ?>/assets/css/bootstrapValidator.min.css"/>
    <link rel="stylesheet" href="<?php echo WEB_ROOT ?>/assets/css/bootstrap-datetimepicker.css"/>
    <script src="<?php echo WEB_ROOT ?>/assets/js/jquery-2.2.4.js"></script>   
    <script src="<?php echo WEB_ROOT ?>/assets/js/bootstrap.js"></script>
    <script src="<?php echo WEB_ROOT ?>/assets/js/bootstrapvalidator.min.js"></script>
    <script src="<?php echo WEB_ROOT ?>/assets/js/jquery.dataTables.min.js"></script>
    
</head>
<body>      
   <?php
   include ROOT . '\modules\UserForm\Controllers\UserFormController.inc';

   if(isset($_POST['action']) && $_POST['action']=="add_user" ){
     new Customers('insert_books');
   }
 
   
   include ROOT . '\modules\Customers\Controllers\CustomersController.inc';
   ?>
  </div>
</div> 
</body>
</html>