<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Casa do Celular</title>
<link href="estilo_contato.css" rel="stylesheet" type="text/css" />
</head>
<body>
<div id="container">
    <div id="topo"></div> <!-- fim da div topo -->
        <div id="menu"> 
            <div id="link1"><a href="index.php">Início</a></div>
            <div id="link2"><a href="produtos.html">Produtos</a></div>
            <div id="link3"><a href="videos.html">Vídeos</a></div>
            <div id="link4"><a href="contato.php">Contato</a></div>
    </div> <!-- fim da div menu -->
<div id="conteudo"> 
    <div class="formulario">
        <h2> Fale conosco </h2>
        <form name="faleConosco" action="envia.php" method="post" >
            <label for="nome" id="nome">
                <span>Nome: </span> <input type="text" name="nome" id="nome" />
            </label>
            <label for="email" id="email">
                <span>E-mail: </span> <input type="text" name="email" id="email" /> 
            </label>
            <label for="cidade" id="cidade">
                <span>Cidade: </span> <input type="text" name="cidade" id="cidade" /> 
            </label>
            <label for="estado" id="estado">
                <span>Estado: </span>
                <select name="estado" id="estado">
                    <option>RS</option>
                    <option>SC</option>
                    <option>PR</option>
                    <option>SP</option>
                    <option>RJ</option>
                </select> 
            </label>
            <label for="assunto" id="assunto">
                <span>Assunto: </span> 
                <input type="text" name="assunto" id="assunto" />
            </label>
            <label for="mensagem" id="mensagem">
                <span>Mensagem: </span>
            <textarea name="mensagem" id="mensagem"> </textarea>
            </label>
            <button type="submit" id="enviar">Enviar </button>
        </form>
<?php
if (isset($_GET['retorno']))
{
  $mensagem=$_GET['retorno'];
  echo "<br />";
  echo "<font color ='F00' size='3'>";
  echo $mensagem;
  $mensagem=" ";
  echo "</font>";
} 
?>
    </div> <!-- fim da div class formulario -->
        <div class="mapa">
            <h2> Casa do celular - Sapiranga-RS </h2>
            <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d6934.998482490457!2d-51.03025201891511!3d-29.647284068776553!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x0000000000000000%3A0xe32828040c8f9fb6!2sIFSul+-+Campus+Sapiranga!5e0!3m2!1spt-BR!2sbr!4v1461668725107" width="320" height="320" frameborder="0" style="border:0" allowfullscreen></iframe>
        </div> <!-- fim da div class mapa -->
    </div> <!-- fim da div conteudo -->
        <div id="rodape"> <h3>Eduardo de Cristo Meurer</h3> </div> <!-- fim da div rodape -->
        </div> <!-- fim da div container -->
    </body>
</html>
