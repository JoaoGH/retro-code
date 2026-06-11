<?php

$q = "SELECT * FROM info WHERE titulo LIKE '%$pesq%'"
        . " or ano LIKE '%$pesq%' or autor LIKE '%$pesq%' or autor2 LIKE '%$pesq%'"
        . " or autor3 LIKE '%$pesq%' or editora LIKE '%$pesq%'";
$query = $conexao->query($q);
$num = $query->num_rows;
$return = "";
$separador = $num;
$x = 0;
if ($num > 0) {
    while ($livro = mysqli_fetch_array($query)) {
        $x++;
        if ($separador > 1) {
            $linha = "<hr class='mb-0'>";
            $separador--;
        } else {
            $linha = "";
        }
        if ($x > 1) {

            $top = 'margin-top:-20%';
        } else {
            $top = "";
        }
        if ($livro['autor2'] == '' && $livro['autor3'] == '') {
            $return .= "<div class='col-lg-12 showcase-text mb-0' style='$top'>" .
                    "<div class='mx-auto mb-lg-3'>" .
                    "<h1>" . $livro['titulo'] . "</h1><br>" .
                    "<p class='lead mb-0'>Ano: " . $livro['ano'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a): " . $livro['autor'] . "</p>" .
                    "<p class='lead mb-0'>Editora: " . $livro['editora'] . "</p>" .
                    $linha . "<br>" .
                    "</div>" .
                    "</div>";
                    
                    
                    
        } else if ($livro['autor2'] != '' && $livro['autor3'] == '') {
            $return .=  "<div class='col-lg-12 showcase-text mb-0' style='$top'>" .
                    "<div class='mx-auto mb-lg-3'>" .
                    "<h1>" . $livro['titulo'] . "</h1><br>" .
                    "<p class='lead mb-0'>Ano: " . $livro['ano'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a): " . $livro['autor'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a)2: " . $livro['autor2'] . "</p>" .
                    "<p class='lead mb-0'>Editora: " . $livro['editora'] . "</p>" .
                    $linha . "<br>" .
                    "</div>" .
                    "</div>";
        } else {
            $return .= "<div class='col-lg-12 showcase-text mb-0' style='$top'>" .
                    "<div class='mx-auto mb-lg-3'>" .
                    "<h1>" . $livro['titulo'] . "</h1><br>" .
                    "<p class='lead mb-0'>Ano: " . $livro['ano'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a): " . $livro['autor'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a)2: " . $livro['autor2'] . "</p>" .
                    "<p class='lead mb-0'>Autor(a)3: " . $livro['autor3'] . "</p>" .
                    "<p class='lead mb-0'>Editora: " . $livro['editora'] . "</p>" .
                    $linha . "<br>" .
                    "</div>" .
                    "</div>";
        }
    }
    echo $return;
}
