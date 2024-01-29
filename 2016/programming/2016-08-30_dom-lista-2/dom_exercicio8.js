var c=2;
function trocarCor() {
    var elementdiv = document.getElementById("conteudo");
    var elementosdiv = elementdiv.children.length;
    if (c === 2)
    {
        for (i = 0; i < elementosdiv; i++)
        {
            var trocar = elementdiv.children[i];
            cor = trocar.style.color = "green";
            c=1;
        }
    }
    else if (c === 1)
    {
        for (i = 0; i < elementosdiv; i++)
        {
            var trocar = elementdiv.children[i];
            cor = trocar.style.color = "none";

        }
    }

}


