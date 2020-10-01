<?php
    class ClientsModel{

        var $result;
        var $conn;

        public function __construct(){
            require_once('bd/connectClass.php');
            $Oconn = new ConnectClass();
            $Oconn -> openConnect();
            $this -> conn = $Oconn -> getConnect();
        }

        public function listClients(){
            $sql = 'SELECT * FROM clients';
            $this -> result = $this -> conn -> query($sql);
        }

        public function insertClient($arrayClient){
            $sql = "
                INSERT INTO clients
                    (name, phone, email, address)
                VALUES(
                    '{$arrayClient['name']}',
                    '{$arrayClient['phone']}',
                    '{$arrayClient['email']}',
                    '{$arrayClient['address']}'
                )
            ";
            $this -> conn -> query($sql);
        }

        public function getClient($idClient){
            $sql = "
                SELETC * FROM clients
                WHERE idClient = {$idClient}
                
            ";
            $this -> result = $this -> conn -> query($sql);
        }

       

        public function getConsult(){
            return $this -> result;
        }

    }
?>