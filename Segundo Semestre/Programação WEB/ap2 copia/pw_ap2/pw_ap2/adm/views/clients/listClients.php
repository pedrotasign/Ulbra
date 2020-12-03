<h1>Lista de Clientes</h1>
<table class="table">
    <tr>
        <th> Código</th>
        <th> Nome</th>
        <th> Email</th>
        <th> Telefone</th>
        <th> Endereço</th>
        <th> imagem </th>
        <th> Editar </th>
        <th> delete </th>

    </tr>
    
    <?php
    foreach ($arrayClients as $client) {
    ?>
    <tr>
        <td><?= $client["idClient"] ?></td>
        <td><?= $client["name"] ?></td>
        <td><?= $client["email"] ?></td>
        <td><?= $client["phone"] ?></td>
        <td><?= $client["address"] ?></td>
        <td>
            <?php 
                 if(is_file("assets/img/clients/{$client['idClient']}.jpg")){
                    echo("
                         <img style='max-width:100px; max-height:100px';
                         class='img-fluid rounded-circle border';
                         src='assets/img/clients/{$client['idClient']}.jpg'>

                    
                    ");
                 }else{
                        print('sem imagem');
   
                 }
        
             ?>
            </td> 
            <td>
             <a href="?controller=clients&action=updateClient&id=<?=$client
                 ['idClient']?>" class="btn btn-warning"> Editar </a>
  
         </td>
       
         <td>
            <a href="?controller=clients&action=deleteClient&id=<?=$client
                ['idClient']?>"class="btn btn-danger">Deletar</a>
        </td>
    </tr>
<?php
  }
?>
</table>