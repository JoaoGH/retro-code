var vazio;//'<div class="vazio" id="'+"0"+'" onclick="movimento('+"0"+')">'+"0"+'</div>';
var numero = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0];
function blocos() {
    saida = document.getElementById("saida");
    saida.innerHTML = "";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            k = (i * 4 + j);



            saida.innerHTML += '<div class="bloco" id="' + "" + k /*numero[k]*/ + '" onclick="movimento(' + k + ')">' + numero[k] + '</div>';


            

        }
    }
}
function embaralhar() {
    //embaralha os numero doidamente +  de  8000
    for (i = 0; i < 8001; i++) {
        aleatorio = Math.floor(Math.random() * 15);
        var sobressalente = numero[aleatorio];
        numero[aleatorio] = numero[0];
        numero[0] = sobressalente;
    }
    blocos();
}
function movimento(id) {

    //NAO MECHA \/

//if (numero["Iniciar"] === true)
    //if (id === pegarvalorvazio - 4 || id === pegarvalorvazio + 4 || id === pegarvalorvazio - 1 || id === pegarvalorvazio + 1) {

    numero[vazio] = numero[id];
    numero[id] = "";
    blocos();
    vazio = id;
    pegarvalor = document.getElementById(id);
    pegarvalor.className = "vazio";
    pegarvalorvazio = document.getElementsByClassName("vazio")[0].id;
    // }
    //NAO MECHA /\
}
function main() {
    msg = "Para que o jogo funcione com 100% do seu potencial, favor clicar primeiramente em inicar... Obrigado." +
            " Caso clique por engano em outro bloco, favor clicar em misturar";
    alert(msg);
    embaralhar();


} 