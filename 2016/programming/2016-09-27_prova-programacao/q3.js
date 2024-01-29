i=0;
function votar(){
    variavel = document.getElementById("opc").value;
    valor_votos1 = document.getElementById("aluno1").value;
    valor_votos2 = document.getElementById("aluno2").value;
    valor_votos3 = document.getElementById("aluno3").value;
    parseInt(variavel);
    parseInt(valor_votos1);
    if(variavel=="aluno1"){
        original=valor_votos1.innerHTML;
        valor_votos1.innerHTML=valor_votos1+""+original;
    }
}