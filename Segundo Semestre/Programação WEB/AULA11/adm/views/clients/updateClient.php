
<h1>Alterar cliente</h1>

<form action="?c=c&a=uca&id=<?=$arrayClient['idClient']?>" method=POST enctype='multipart/form-data'>
    <div class="form-group addForm">
        <div>
            <label for="name">ID:</label>
            <input type="text" class="form-control" name="name" value="<?=
            $arrayClient['idClient']?>" readonly="readonly">
        </div>
        <div>
            <label for="name">Nome:</label>
            <input type="text" class="form-control" name="name" value="<?=
            $arrayClient['name']?>">
        </div>
        <div>
            <label for="email">Email:</label>
            <input type="mail" class="form-control" name="email" value="<?=
            $arrayClient['email']?>">
        </div>
        <div>
            <label for="tel">Telefone:</label>
            <input type="text" class="form-control" name="phone" value="<?=
            $arrayClient['phone']?>">
        </div>
        <div>
            <label for="end">Endereço:</label>
            <input type="text" class="form-control" name="address" value="<?=
            $arrayClient['address']?>">
        </div>
        <br>
    
        <br>
        <button type="submit" class="btn btn-outline-success">Salvar</button>
    </div>
</form>
