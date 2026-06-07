# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
cursor.execute("ALTER TABLE estados ADD uf text")
cursor.execute("ALTER TABLE estados ADD regiao text")
conexao.commit()
cursor.close()
conexao.close()