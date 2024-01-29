<?php 
echo "<h2>";
echo "Empresa Falência Imediata Ltda";
echo "</h2>";
#pegar as variaveis que vieram por POST do formulario
$nome_func = $_POST['nome'];
$sal=$_POST['salario'];
#calcula 20% de aumento
$reajuste = $sal * 0.20;
#Soma o reajuste com o salario anterior
$sal_novo = $sal + $reajuste;
#mostra os dados solicitados
echo "Funcionário: ".$nome_func; 
echo "<br />";
printf("Salário anterior: R$ %.2f ",$sal);
echo "<br />";
printf("Valor do reajuste: R$ %.2f ",$reajuste);
echo "<br />";
printf("Salário a receber: R$ %.2f ",$sal_novo);
?>
