function trocar(){
    msg=document.getElementById("m1");
    msg2=document.getElementById("m2");
    mensagem= msg.innerHTML;
    mensagem2=msg2.innerHTML;
    msg.innerHTML=mensagem2;
    msg2.innerHTML=mensagem;
    //alert("Voce nao tem namorada, ninguem gosta de voce, nao tem amigos, seus pais te deram como caso perdido \n\SE MATA LOGO! \n\Vai fazer um favor pro mundo");
}