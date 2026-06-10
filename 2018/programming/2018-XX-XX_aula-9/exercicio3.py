# -*- coding: utf-8 -*-
import sqlite3
conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()
cursor.execute("create table alunos(id integer primary key autoincrement, nome text, cidade text, curso text)")
conexao.commit()
cursor.close()
conexao.close()