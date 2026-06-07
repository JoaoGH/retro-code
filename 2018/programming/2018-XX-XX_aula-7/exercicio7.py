# -*- coding: utf-8 -*-
arquivo = open("lista.txt", "r")
for i in arquivo.readlines():
    print(i[0:i.find(";")])
arquivo.close()