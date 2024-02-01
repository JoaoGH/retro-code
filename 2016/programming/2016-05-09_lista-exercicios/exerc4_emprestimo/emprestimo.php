<html>
<head>
<title>cliente emprestimo  </title>
</head>
<body>
<?php
echo"<h2>";
echo "Emprestimos";
echo"</h2>";

$nome=$_POST['nome'];
$vlr_emp=$_POST['vlr_emp'];
$parcelas=$_POST['parcelas'];

$vlr_emp=str_replace(",",".",$vlr_emp);

$juros=$vlr_emp* $parcelas*0.05;
$total=$vlr_emp * $juros;

 $vlr_parc=($vlr_emp + $juros) / $parcelas;
  
  echo "Cliente: ".$nome;
   echo "<br/>";
   
   printf("Total de juros: %.2f",$juros);   
   printf("valor total a pagar: %.2f",$vlr_parc);
   echo"<br/>";
?>