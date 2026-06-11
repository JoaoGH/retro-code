<?php
$q = "INSERT INTO info(titulo, ano, autor, autor2, autor3, editora)"
        . " VALUES ('$titulo',$ano,'$autor','$autor2','$autor3','$editora')";
$query = $conexao->query($q);
