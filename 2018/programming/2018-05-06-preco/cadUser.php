<?php
require('conectar.php');

$nome = $_POST['nome'];
$senha = $_POST['senha'];
$senha2 = $_POST['senha2'];

$query = "select nome from usuarios where nome='".$nome."'";
$res = mysql_query($query) or die('ERRO...');
$num = mysql_num_rows($res);
if($num>0){
    $msg = "Nome de usuário já cadastrado.";
    header("location: ./index.php?retorno=$msg");
}else if($senha!=$senha2){
    $msg = "Senhas nao coincidem.";
    header("location: ./index.php?retorno=$msg");
}else{
    $query = "insert into usuarios (nome, senha) VALUES ('".$nome."', '".$senha."')";
    $res = mysql_query($query) or die('ERRO PORRA...');
    $num = mysql_num_rows($res);

    
    session_start();
    $_SESSION['login'] = $nome;
    header("location: ./perfil.php");
    
}
