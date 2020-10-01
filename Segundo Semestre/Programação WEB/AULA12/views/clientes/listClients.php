<div class="listBox">
    <table class="table table-striped">

        <tr>
            <th> ID Cliente </th>
            <th> Nome </th>
            <th> Telefone </th>
            <th> Email </th>
            <th> Endereço </th>
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
            </tr>
        <?php
        }
        ?>
    </table>
</div>    