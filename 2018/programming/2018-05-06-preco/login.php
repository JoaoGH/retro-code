<?php
require_once('conectar.php');
/*$logins = array(
    0 => "adm",
);
$senhas = array(
    0 => "123",
);
*/
if (!isset($_POST['sub']) && empty($_POST['sub'])) {
	//o cara chegou aqui sem passar pelo form de login
    $msg = "Acesso negado - Efetue o login";
    header("location: ./index.php?retorno=$msg");
}

$nome = $_POST['nome'];
$senha = $_POST['senha'];

$query = "select nome, senha from usuarios where nome='".$nome."' and senha='".$senha."'";
//mysql_query($query) or die(mysql_error());
$res = mysql_query($query) or die('ERRO...');
$num = mysql_num_rows($res);


if ($num > 0) {
    session_start();
    $_SESSION['login'] = $nome;
    header("location: ./index.php");
} else {
    $msg = "Dados inválidos.";
    header("location: ./index.php?retorno=$msg");
}