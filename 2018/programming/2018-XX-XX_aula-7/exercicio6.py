# -*- coding: utf-8 -*-
arquivo = open("lista.txt", "r")
for i in arquivo.readlines():
    if(i[0]=="G" or i[0]=="g"): 
#        pontoevirgula=i.find(";")
#        print("Posição: ",pontoevirgula)
        print(i[0:i.find(";")])
arquivo.close()