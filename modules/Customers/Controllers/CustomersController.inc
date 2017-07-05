<?php
  $arr = array();
  $arr['BG'] = "Bulgaria";
  $arr['ES'] = "Spain";
  $arr['DE'] = "Germany";
  $arr['FR'] = "France";
  $arr['UK'] = "United Kingdom";
  $arr['IT'] = "Italy";

  $customers = new Customers(); 
  $customers_list = new BaseModuleTemplater(ROOT . '/modules/Customers/tpl/customer_list.tpl.inc');
  $customers_list->set('get_customers', $customers->getCustomers());
  $customers_list->set('country', $arr);
  $customers_list->publish();

