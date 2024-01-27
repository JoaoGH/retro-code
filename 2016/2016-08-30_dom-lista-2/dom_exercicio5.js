function transformar() {
    paragrafos = document.getElementsByTagName("div");
    
    for (i = 0; i < paragrafos.length; i++) {  
        paragrafos[i].style.display = "none";
    }
}