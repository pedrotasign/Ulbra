<?php

Session_start();
   $requestMethod = $_SERVER['REQUEST_METHOD'];  //get, post, delete
   $local = $_SERVER['SCRIPT_NAME'];
   $uri = $_SERVER['PHP_SELF']; 
    
   $rout = str_replace($local, '',$uri); //  //xx/123
   $uriSegments = explode('/' , $rout);
  
    if(isset($uriSegments[1])){
        $controller = $uriSegments[1]; 
        switch($uriSegments[1]){
           case 'clients':    
               require_once('controllers/ClientsController.php');
               $Client = new ClientsController();  
               switch($requestMethod){
                  case 'GET':
                     if(isset($uriSegments[2]) && $uriSegments[2] != ''){
                        $Client -> listClient($uriSegments[2]);
                     }else{
                          $Client -> listClients();
                     } 
                     $Client -> listClients();
                  break;
                  case 'POST':
                       $Client -> insertClient();
                  break;
                  case 'PUT': 
                       $Client -> updateClient($uriSegments[2]);
                  break;     
                  case 'DELETE' : 
                       $Client -> deleteClient($uriSegments[2]);
                  break;    
              }
            case 'users' : 
               require_once('controllers/UsersController.php');
               $Users = new UsersController();
               switch($requestMethod){
                  case 'GET':
                     if(isset($uriSegments[2]) && $uriSegments[2] =='login'){
                         if(!isset($uriSegments) ||  $uriSegments [3] = ''){
                           $Users -> login();
                         }
                        
                     }
                  break;   
               } 
            break;   

        
         }
    }

?> 
