<?php

session_start();
require './conectar.php';

$prod = $_POST['nome'];
$lugar = $_POST['lugar'];
$preco = $_POST['preco'];
if ($prod == 'computador') {
    $img = 1;
} else if ($prod == 'geladeira') {
    $img = 2;
} else if ($prod == 'ropeiro') {
    $img = 3;
} else if ($prod == 'mesa') {
    $img = 4;
} else {
    $img = 5;
}

$q = "insert into produtos (nomeProd, preco, lugar, img) values('$prod','$preco','$lugar', $img)";
$query = $conexao->query($q);

$q2 = "select qtdProd from usuarios where nome='" . $_SESSION['login'] . "'";
$query2 = $conexao->query($q2);
$qtd = $query2->fetch_array(MYSQLI_NUM);
$cad = $qtd[0] + 1;
//var_dump($cad);

$q3 = "update usuarios set qtdProd=" . $cad . " where nome='" . $_SESSION['login'] . "'";
$query3 = $conexao->query($q3);



header("location: ./perfil.php?qtd=$cad");


