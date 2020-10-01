<?php
    class UserController{
        

        public function validateLogin(){
            $login = $_POST['login'];
            require("models/UsersModel.php");
            $User = new UsersModel();
            $User -> consultUser($login);
            $result = $User -> getConsult();

            if($line = $result->fetch_assoc()){
                if($line['password'] == $_POST['password']){
                    $_SESSION['login'] = array(
                        "idUser" => $line['idUser'],
                         "name"=> $line['name']
                   
                    );
                    header("Location: Index.php?c=m&a=i");
                
            }else{
                print("usuário não existe");
            }

        }

    }
}
?>