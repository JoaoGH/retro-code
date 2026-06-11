# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
regiao = input("Digite a regiao do estado: ")
regiao = regiao.title()
cursor.execute("select * from estados where regiao='"+regiao+"'")
resultado=cursor.fetchall()
if(resultado!=None):
    for registro in resultado:
        print(registro)
else:
    print("Nada encontrado! ")
cursor.close()
conexao.close()
