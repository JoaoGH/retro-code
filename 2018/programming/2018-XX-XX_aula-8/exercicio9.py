# -*- coding: utf-8 -*-
import sqlite3
def qtd(r):
    cursor.execute("select * from estados where regiao='" + r + "'")
    resultado = cursor.fetchall() 
    return(len(resultado))
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
regiao = input("Digite a regiao do estado: ")
regiao = regiao.title()
print(qtd(regiao))
cursor.close()
conexao.close()
