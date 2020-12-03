<?php
class clientsController{

    public function register(){
        require_once('views/templates/header.php');
        require_once('views/clientes/register.php');
        require_once('views/templates/footer.php');
    }


    public function registerView(){

        $client = array(
            'name' => $_POST['name'],
            'phone' => $_POST['phone'],
            'email' => $_POST['email'],
            'address' => $_POST['address']
            
        );
    
        require_once('views/templates/header.php');
        require_once('views/clientes/registerView.php');
        require_once('views/templates/footer.php');
   
   
    }
   
   
    function  listClients(){
        require_once("models/clientsModel.php");
        $client = new clientsModel();
        $client -> listClients();
        $result = $client -> getConsult();

        $arrayClient = array();

        while($line = $result -> fetch_assoc()){
            array_push($arrayClient,$line);
        }

        require_once("views/templates/header.php");
        require_once("views/clientes/listClients.php");
        require_once("views/templates/footer.php");
    }
}
?>