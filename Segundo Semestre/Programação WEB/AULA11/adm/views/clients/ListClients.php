<div class="listBox">
    <table class="table table-striped">

        <tr>
            <th> ID Cliente </th>
            <th> Nome </th>
            <th> Telefone </th>
            <th> Email </th>
            <th> Endereço </th>
            <th colspan="2">Ações</th>

        </tr>

        <?php
        foreach ($arrayClient as $client){
        ?>
            <tr>
                <td>
                    <?=$client["idClient"]?>
                </td>
                <td>
                    <?=$client["name"]?>
                </td>
                <td>
                    <?=$client["phone"]?>
                </td>
                <td>
                    <?=$client["email"]?>
                </td>
                <td>
                    <?=$client["address"]?>
                </td>
                <td>
                    <a href="?c=c&a=uc&id=<?=$client['idClient']?>" class="btn btn-outline-warning">Editar</a>
                </td>
                <td>
                    <a href="?c=c&a=dc&id=<?=$client['idClient']?>" class="btn btn-outline-danger">X</a>
                </td>
            </tr>
        <?php
        }
        ?>
    </table>
</div>