<!DOCTYPE html>
<html lang="pt-BR">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.0/js/bootstrap.min.js"></script>
    <link rel="stylesheet" href="<?=base_url('assets/Style-Admin/styleAdmin.css')?>">
    <title>Área Administrativa</title>
</head>

<body>
    <header class="jumbotron mb-0">

        <h1>City Gallery</h1>
        <a href="<?=base_url('admin/logout')?>"><button class="btn btn-info">Logout</button> </a>
        
    </header>

    <div>
        <section class="row">
            <nav class="col-md-3">
                <h2>Menu</h2>
                <a class="dropdown-item" href="<?= base_url('admin') ?>">Home</a>
                <a class="dropdown-item" href="<?= base_url('admin/clients') ?>">Lista de Clientes</a>
                <a class="dropdown-item" href="<?= base_url('admin/clients/insert') ?>">Inserir Cliente</a>

                <br>
                </br>
                    
            </nav>
            <br>
            <article class="col-md-9">