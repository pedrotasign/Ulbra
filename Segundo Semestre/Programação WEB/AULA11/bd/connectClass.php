<?php
class connectClass{ 

    var $conn;

    function openConnect(){
        $servername = 'localhost';
        $username = 'root';
        $password = '';
        $dbname = 'lpw_exemple';
        $this -> conn = new mysqli($servername, $username, $password, $dbname);
    }

    function getConn(){
        return $this -> conn;
    }
}

?>