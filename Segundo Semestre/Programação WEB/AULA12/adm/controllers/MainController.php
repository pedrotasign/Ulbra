<?php

    class mainController{
        function __construct(){
        }

        public function index()
        {
            if(!isset($_SESSION["login"])){
                header("Location: index.php?c=m&a=l");
            }
            require_once("views/Templates/Header.php");
            require_once("views/Templates/Home.php");
            require_once("views/Templates/Footer.php");
        }

        public function login()
        {
            require("views/users/login.php");
        }

        public function sessionDestroy()
        {
            session_destroy();
            header("Location: index.php?c=m&a=l");
        }
    }

?>