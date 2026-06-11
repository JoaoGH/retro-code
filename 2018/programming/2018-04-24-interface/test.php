<?php

$logins = array(
    0 => "adm",
);
$senhas = array(
    0 => "123",
);

$nome = $_POST['nome'];
$senha = $_POST['senha'];
if ($nome == $logins[0] && $senha == $senhas[0]) {
    $_SESSION['login'] = 'ok';
    header("location: ./perfil.php");
} else {
    $msg = "Dados inválidos.";
    header("location: ./index.php?retorno=$msg");
}
