function selecionarTudo(acao) {

    if (acao=== "selecionar")
    {
        for (k = 1; k <= 3; k++)
        {
            selecionar = document.getElementById(k);
            selecionar.checked = true;
        }
    }
    else 
    {
        for (k = 1; k <= 3; k++)
        {
            selecionar = document.getElementById(k);
            selecionar.checked = false;
        }
    }
}
