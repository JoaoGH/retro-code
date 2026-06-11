# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()
cursor.execute("create table acesso(id integer primary key autoincrement, usuario text, senha text)")
conexao.commit()
cursor.close()
conexao.close()