<?php
    session_start();
    if(!isset($_GET['controller'])){
        require_once("controllers/site.php");
        $site = new siteController();
        $site -> index();
    }else{
        switch($_REQUEST['controller']){
            case 'site':
                require_once("controllers/site.php");
                $site = new siteController();

                if(!isset($_GET['action'])){
                 $site -> index();
                }else{
                    switch($_REQUEST['action']){
                        case 'home':
                            $site -> index();
                        break;

                        case 'sobre':
                            $site -> sobre();
                        break;

                        case 'produtos':
                            $site -> produtos();
                        break;

                        case 'contato':
                            $site -> contato();
                        break;
                    }
               
                }
            break; 
            
            case 'clients':
                require_once("controllers/clients.php");
                    $client = new clientsController();
                if(!isset($_GET['action'])){
                    $client -> index();
                }else{
                    switch($_REQUEST['action']){
                        case 'register':
                            $client -> register();
                        break;

                        case 'registerView':
                            $client -> registerView();
                        break;

                        case 'listClients':
                            $client -> listClients();
                        break;
                    }
                }
            break;
        }
    }
?>