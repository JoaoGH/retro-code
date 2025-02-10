<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Empresa: Som e Vídeo</title>
<link href="estilo_contato.css" rel="stylesheet" type="text/css" />
</head>
<body>
<div id="container">
    <div id="topo"> </div> <!-- fim da div topo -->
    <div id="menu"> 
<div id="link1"><a href="index.html">Início</a></div>
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
</select> </label>
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
<h2> Rede Globo - Projact - Rio de Janeiro - RJ </h2>
<iframe width="320" height="320" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com.br/maps?q=rede+globo+projac+rio+de+janeiro&amp;ie=UTF8&amp;hl=pt-BR&amp;hq=rede+globo+projac&amp;hnear=Rio+de+Janeiro&amp;t=m&amp;ll=-22.923317,-43.30998&amp;spn=0.140674,0.310279&amp;output=embed"></iframe>
</div> <!-- fim da div class mapa -->

</div> <!-- fim da div conteudo -->
<div id="rodape"> <h3>Todos Direitos Reservados </h3> </div> <!-- fim da div rodape -->
</div> <!-- fim da div container -->
</body>
</html>
