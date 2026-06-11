# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
cursor.execute("select * from estados order by populacao desc")
resultado=cursor.fetchone()
print("Estado mais populoso:\n",resultado)

cursor.execute("select * from estados order by populacao asc")
resultado=cursor.fetchone()
print("\nEstado menas populoso:\n",resultado)
cursor.close()
conexao.close()

