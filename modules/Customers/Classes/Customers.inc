<?php

class Customers {

  function __construct($value = null) {

    switch ($value) {
      case 'insert_books':
        $this->insertCustomer();
        break;     
      default:
        break;
    }
  }

  public function insertCustomer() {    
    $name = isset($_POST['name']) && $_POST['name'] ? $_POST['name'] : '';
    $lastname = isset($_POST['lastname']) && $_POST['lastname'] ? $_POST['lastname'] : '';
    $email = isset($_POST['email']) && $_POST['email'] ? $_POST['email'] : '';
    $phone = isset($_POST['phone']) && $_POST['phone'] ? $_POST['phone'] : '';
    $age = isset($_POST['age']) && $_POST['age'] ? $_POST['age'] : '';
    $country = isset($_POST['country']) && $_POST['country'] ? $_POST['country'] : '';
    $gender = isset($_POST['gender']) && $_POST['gender'] ? $_POST['gender'] : '';
    $subscribed = isset($_POST['subscribed']) && $_POST['subscribed'] ? $_POST['subscribed'] : '';
    $check_subscribed = $subscribed == 1 ? 1 : 0;
    
    
    $db = new Db();
    $escape_name = $db->escape($name);
    $escape_lastname = $db->escape($lastname);
    $fields = array();   
    $fields['name'] =$escape_name;
    $fields['lastname'] =$escape_lastname;
    $fields['email'] =$email;
    $fields['phone'] =$phone;
    $fields['age'] =$age;
    $fields['country'] =$country;
    $fields['gender'] =$gender;
    $fields['subscribed'] =$subscribed;  

    if($name){     
      //create record in users(customers)
      $table = 'users';
      $insert_customer_data = $db->insert($table, $fields);  
    }
 
  }

  public function getCustomers($id = null, $get_val = null) {


    $sql_get_data = "SELECT * 
                       FROM users as us
                     ORDER BY us.name,us.lastname";


    $db = new Db();
    $get_data = $db->select($sql_get_data);


    return $get_data;
  }

}
