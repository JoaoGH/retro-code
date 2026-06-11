<?php

$titulo = utf8_decode($_POST['titulo']);
$ano = utf8_decode($_POST['ano']);
$autor = utf8_decode($_POST['autor']);
$autor2 = utf8_decode($_POST['autor2']);
$autor3 = utf8_decode($_POST['autor3']);
$editora = utf8_decode($_POST['editora']);
require_once '../model/conectar.php';
require_once '../model/cadastrar.php';
echo"True";