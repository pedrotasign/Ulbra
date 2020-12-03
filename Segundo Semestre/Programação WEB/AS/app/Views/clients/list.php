
<table class="table table-hover table-light">
    <tr>
        <th>id</th>
        <th>Nome</th>
        <th>Email</th>
        <th>Enderço</th>
        <th>Ações</th>
    </tr>
    <?php
    foreach ($clients as $client) {
    ?>
     <tr>
            <td>
                 <?= $client["idClient"]?> 
            </td>
            <td>
                 <?= $client["name"]?>
            </td>
            <td>
                 <?= $client["email"]?> 
            </td>
            <td>
                 <?= $client["address"]?> 
            </td>
            <td> 
                 <a class="btn btn-outline-info" href=<?=base_url("admin/clients/{$client['idClient']}")?> role="button"> Ver detalhes</a>        
            </td>
    </tr
    <?php
      }
    ?>

