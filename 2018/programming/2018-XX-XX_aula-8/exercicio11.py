# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
def populoso(r):
    cursor.execute("select populacao from estados where regiao='"+r+"'")
    resultado=cursor.fetchall()
    m=0
    for registro in resultado:
        m=(int(registro[0]))+m
    m=str(m)
    return(" "+m)
#print("Estado mais populoso:\n",resultado)
p=[]
reg=["Sul","Norte","Nordeste","Centro-Oeste","Sudeste"]
for i in range(0,5):
    p[i]=(populoso(reg[i]))
    print(p[i])



#cursor.execute("select * from estados order by populacao asc")
#resultado=cursor.fetchone()
#print("\nEstado menas populoso:\n",resultado)
cursor.close()
conexao.close()

