<div class="container-fluid">
    <div class="formRegister col-md-8">
        <h2>REGISTRO</h2>

        <form action="?controller=clients&action=registerView" method="post" class="formFormat">
        
            <div class="form-group">
                <label>Nome:</label>
                <input type="text" name="name" class="form-control" id="name" placeholder="Digite seu nome"  required>
            </div>
            <div class="form-group">
                <label>Telefone:</label>
                <input type="number" name="phone" class="form-control" id="phone" placeholder="Digite o seu telefone"  required>
            </div>
            <div class="form-group">
                <label>email:</label>
                <input type="email" name="email" class="form-control" id="email" placeholder="Digite seu email"  required>
            </div>
            <div class="form-group">
                <label>Endereço:</label>
                <input type="text" name="address" class="form-control" id="address" placeholder="Digite o seu endereço">
            </div>
            <button type="submit" class="btn btn-outline-danger">Submit</button>
        </form>
    </div>
</div