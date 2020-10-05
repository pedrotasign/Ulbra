<?php
    session_start();

    if(!isset($_GET['c'])){
        require_once("controllers/MainController.php");
        $Main = new MainController();
        $Main -> index();

    }else{
        switch($_REQUEST['c']){
            
            case 'u':
                require_once("controllers/UserController.php");
                $User = new UserController();
                
                if(!isset($_GET['a'])){
                    $User -> index();
                }else{
                    switch($_REQUEST['a']){
                        case 'vl':
                            $User -> validateLogin(); 
                        break;
                    }
                }
            break;

            case 'm':
                require_once("controllers/MainController.php");
                $Main = new MainController();

                if(!isset($_GET['a'])){
                    $Main -> index();
                }else{
                    switch($_REQUEST['a']){
                        case 'i':
                            $Main -> index();
                        break;

                        case 'l':
                            $Main -> login();
                        break;

                        case 'sd':
                            $Main -> sessionDestroy();
                        break;
                    }
                }
            break;


            case 'c':
                require_once('controllers/ClientsController.php');
                $Client = new ClientsController();
                if(!isset($_GET['a'])){

                }else{
                    switch ($_REQUEST['a']){
                        case 'lc':
                            $Client -> listClients();
                        break;

                        case 'ic':
                            $Client -> insertClient();
                        break;
                        case 'ica':
                            $Client -> insertClientAction();
                        break;
                        case 'uc':
                            $id = $_GET['id'];
                            $Client -> updateClient($id);
                        break;
                        case 'uca':
                            $id = $_GET['id'];
                            $Client -> updateClientAction($id);
                        break;
                        case 'dc':
                            $id = $_GET['id'];
                            $Client -> deleteClient($id);
                        break;
                    }
                }
            break;

        }
    }

?>