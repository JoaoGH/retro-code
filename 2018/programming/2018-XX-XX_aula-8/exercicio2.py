# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
cursor.execute("select * from estados")
print(cursor.fetchone())
conexao.commit()
cursor.close()
conexao.close()