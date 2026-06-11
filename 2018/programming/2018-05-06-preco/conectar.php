<?php

$hostIP = 'localhost';
$usuario = 'root';
$senha = '';
$banco = 'precobaixo';
//comando para conectar com BD mysql
//$conexao = new PDO("mysql:host="$hostIP";dbname="$banco", "$usuario", "$senha")"; 
$conexao = mysql_connect($hostIP, $usuario, $senha);
//comando para selecionar o BD que vai utilizar
$base_dados = mysql_select_db($banco);
mysql_query("SET NAMES 'utf8'");
?>