function habilita() {
    segAutor = document.getElementById('segAutor');
    terAutor = document.getElementById('terAutor');
    if (segAutor.checked === true && terAutor.checked !== true) {
        document.getElementById("autor2").disabled = false;
        document.getElementById("autor2").required = true;
        terAutor.checked = false;
        document.getElementById("autor3").disabled = true;
        document.getElementById("autor3").value = "";
        segAutor.checked = true;
    } else if (terAutor.checked === true) {
        segAutor.checked = true;
        terAutor.checked = true;
        document.getElementById("autor2").disabled = false;
        document.getElementById("autor2").required = true;
        document.getElementById("autor3").disabled = false;
        document.getElementById("autor3").required = true;

    } else {
        segAutor.checked = false;
        document.getElementById("autor2").disabled = true;
        document.getElementById("autor2").value = "";
        terAutor.checked = false;
        document.getElementById("autor3").disabled = true;
        document.getElementById("autor3").value = "";
    }
}
function aparece(nome) {
    elem = document.getElementById(nome);
    elem.style = "display:block";
    elemSec = document.getElementById('secVer');
    elemSec.style = "display:none";
}
function cadLivros() {
    elemMSG = document.getElementById("msg");
    var ajax = new XMLHttpRequest();
    var url = "./controller/cadLivros.php";
    elemTitulo = document.getElementById("titulo");
    titulo = elemTitulo.value;
    elemAno = document.getElementById("ano");
    ano = elemAno.value;
    elemAutor = document.getElementById("autor");
    autor = elemAutor.value;
    //teste de mais autores
    testSegAutor = document.getElementById('segAutor');
    if (testSegAutor.checked === true) {
        elemAutor2 = document.getElementById("autor2");
        autor2 = elemAutor2.value;
    } else {
        autor2 = "";
    }
    testTerAutor = document.getElementById('terAutor');
    if (testTerAutor.checked === true) {
        elemAutor3 = document.getElementById("autor3");
        autor3 = elemAutor3.value;
    } else {
        autor3 = "";
    }
    elemEditora = document.getElementById("editora");
    editora = elemEditora.value;
    //alert(editora);
    ajax.open("POST", url, false);
    ajax.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    ajax.send("titulo=" + titulo + "&ano=" + ano + "&autor=" + autor + "&autor2=" + autor2 + "&autor3=" + autor3 + "&editora=" + editora);
    confirma = ajax.responseText;
    if (confirma === "True") {
        alert("Livro cadastrado com sucesso!");
        document.getElementById("titulo").value = "";
        document.getElementById("ano").value = "";
        document.getElementById("autor").value = "";

        segAutor.checked = false;
        document.getElementById("autor2").disabled = true;
        document.getElementById("autor2").value = "";
        terAutor.checked = false;
        document.getElementById("autor3").disabled = true;
        document.getElementById("autor3").value = "";

        document.getElementById("editora").value = "";
    } else {
        elemMSG.innerHTML = "Algo está errado! ";
    }
}
function verLivros() {
    elemMSG = document.getElementById("msg");
    var ajax = new XMLHttpRequest();
    var url = "./controller/verLivros.php";
    elemPesq = document.getElementById("pesq");
    pesq = elemPesq.value;
    ajax.open("POST", url, false);
    ajax.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
    ajax.send("pesq=" + pesq);
    confirma = ajax.responseText;
    if (confirma !== null) {
        elemSec = document.getElementById('secVer');
        elemSec.style = "display:block";
        elem = document.getElementById('ver');

        elemCad = document.getElementById('cad');
        elemCad.style = "display:none";

        elem.innerHTML = confirma;
    } else {
        elemMSG.innerHTML = "Algo está errado! ";
    }
}