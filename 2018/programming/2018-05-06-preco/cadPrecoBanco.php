<?php
require('conectar.php');
session_start();
//session_destroy();

$nome = $_POST['nome'];
$preco = $_POST['preco'];
$local = $_POST['local'];

$query = "insert into produtos (nomeProduto, precoProduto, vendedorProduto) VALUES ('".$nome."', '".$senha."', '".$local."')";
$res = mysql_query($query) or die('ERRO...');
//$num = mysql_num_rows($res);

$user=$_SESSION['login'];
$queryqtd = "select cadastrado from usuarios where nome='".$user."'";
//$res = mysql_query($queryqtd) or die();
$qtd = mysql_fetch_array($queryqtd);
var_dump($user);
$query = "update usuarios SET cadastrado=".$qtd+1;
$res = mysql_query($query) or die('ERRO PORRA...');


header("location: ./perfil.php");


?>