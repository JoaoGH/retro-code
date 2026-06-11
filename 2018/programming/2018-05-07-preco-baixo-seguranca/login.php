<?php
$logins = array(
    0 => "adm",
);
$senhas = array(
    0 => "123",
);
if (!isset($_POST['sub']) && empty($_POST['sub'])) {
	//o cara chegou aqui sem passar pelo form de login
    $msg = "Acesso negado - Efetue o login";
    header("location: ./index.php?retorno=$msg");
}

$nome = $_POST['nome'];
$senha = $_POST['senha'];

if ($nome==$logins[0] && $senha==$senhas[0]) {
    session_start();
    $_SESSION['login'] = $nome;
    header("location: ./perfil.php");
} else {
    $msg = "Dados inválidos.";
    header("location: ./index.php?retorno=$msg");
}