<form action="<?= base_url('/admin/clients') ?>" method="GET" class="form-group input-group">
    <span class="input-group-addon">
        <i class="glyphicon glyphicon-search"></i>
    </span>
    <input name="consulta" id="txt_consulta" placeholder="Consultar" type="text" class="form-control">
</form>

<table class="table table-hover table-light">
    <tr>
        <th>id</th>
        <th>Nome</th>
        <th>Email</th>
        <th>Enderço</th>
        <th colspan="3"> </th>
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
                 <a class="btn btn-primary" href=<?=base_url("admin/clients/{$client['idClient']}")?> role="button"> Ver detalhes</a>        
            </td>
            <td> 
              <a class="btn btn-warning" href=<?=base_url("admin/clients/update/{$client['idClient']}")?> role="button"> Alterar</a>
            <td>
              <a class="btn btn-danger" href=<?=base_url("admin/clients/delete/{$client['idClient']}")?> role="button"> deletar</a>  
           </td>
     </tr
    <?php
      }
    ?>

