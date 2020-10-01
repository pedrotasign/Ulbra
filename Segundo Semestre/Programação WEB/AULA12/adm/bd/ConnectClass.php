<?php
class ConnectClass{
    var $conn;

    function openConnect(){
        $servername = 'localhost';
        $username = 'root';
        $password = '';
        $bdname = 'lpw_exemple';
        $this -> conn = new mysqli($servername, $username, $password, $bdname);
    }

    function getConnect (){
        return $this -> conn;
    }
}
?>