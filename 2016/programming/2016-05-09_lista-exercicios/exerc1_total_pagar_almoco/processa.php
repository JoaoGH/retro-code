<?php 
echo "<h2>";
echo "Restaurante COMILÃO";
echo "</h2>";
#pegar as variaveis que vieram por POST do formulario
$no=$_POST['nome'];
$alm=$_POST['almoco'];
$alm=str_replace(",",".",$alm); #trocar a virgula pelo ponto
$qt=$_POST['qtde'];
$qt=str_replace(",",".",$qt);#trocar a virgula pelo ponto
$refri=$_POST['vlr_refri'];
$refri=str_replace(",",".",$refri); #trocar a virgula pelo ponto
$total=($refri*$qt)+$alm; //calcular total a pargar
echo "Cliente: ".$no; //mostrar o nome do cliente
echo "<br />";
printf("Total Pagar: R$ %.2f ",		$total); //mostrar o total a pagar
?>
