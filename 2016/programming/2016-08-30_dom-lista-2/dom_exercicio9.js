function mudarrodape(){
    criar= document.createElement("div");
    criar.id="div";
    p= document.createElement("p");
    p.className= "rodape";
    p.innerHTML= "Copyright 2016 � Didi Moc�";
    criar.appendChild(p);
    document.body.appendChild(criar);
}