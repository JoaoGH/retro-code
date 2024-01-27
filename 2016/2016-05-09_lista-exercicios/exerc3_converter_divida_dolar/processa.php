<?php 
echo "<h2>";
echo "Converter divida Dólar US$ para Reais R$";
echo "</h2>";
#pegar as variaveis que vieram por POST do formulario
$nome = $_POST['nome'];
$dolar=$_POST['dolar'];
#calcular 
$total = $dolar * 3.50;
#mostra os dados solicitados
echo "Nome: ".$nome; 
echo "<br />";
printf("Dívida em Dólares: US$ %.2f ",$dolar);
echo "<br />";
printf("Divida em Reais a pagar: R$ %.2f ",$total);
?>
