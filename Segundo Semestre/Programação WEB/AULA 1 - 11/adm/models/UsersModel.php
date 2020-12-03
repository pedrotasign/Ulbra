<?php

class UsersModel{
    var $result;


    public function consultUser($login){
        require_once("bd/ConnectClass.php");
        $Oconn = new ConnectClass();
        $Oconn -> openConnect();
        $sql = 'SELECT * FROM users WHERE user="' .$login. '"';
        $conn = $Oconn -> getConnect();
        $this -> result = $conn -> query($sql);
    }

    public function getConsult(){
        return $this -> result;
    }

}
?>