function senha(){
    msg="senhas iguais";
    msg2="senhas diferentes";
    senha1=document.getElementsByName("senha1")[0].value;
    senha2=document.getElementsByName("senha2")[0].value;
    if(senha1==senha2){
        document.write(msg);
    }
    else{
        document.write(msg2);
    }
}