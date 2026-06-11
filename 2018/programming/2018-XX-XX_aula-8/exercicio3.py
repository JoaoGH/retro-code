# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
opc=input("Consulta na tablea\n\t1 - Por ordem alfabética de estado\n\t2 - Por ordem de população\n")
if(opc=="1"):
    cursor.execute("select * from estados order by nome asc")
    resultado=cursor.fetchall()
    for registro in resultado:
        print(registro)
elif(opc=="2"):
    cursor.execute("select * from estados order by populacao asc")
    resultado=cursor.fetchall()
    for registro in resultado:
        print(registro)
else:
    print("Opção invalida")
cursor.close()
conexao.close()