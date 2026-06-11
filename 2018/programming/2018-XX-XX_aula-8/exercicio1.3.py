# -*- coding: utf-8 -*-
import sqlite3
dados = [("Acre", 732793),
        ("Alagoas", 3120922),
        ("Amapá", 668689),
        ("Amazonas", 3480937),
        ("Bahia", 14021432),
        ("Ceará", 8448055),
        ("Distrito Federal", 2562963),
        ("Espírito Santo", 3512672),
        ("Goiás", 6004045),
        ("Maranhão", 6569683),
        ("Mato Grosso", 3033991),
        ("Mato Grosso do Sul", 2449341),
        ("Minas Gerais", 19595309),
        ("Pará", 7588078),
        ("Paraíba", 3766834),
        ("Paraná", 10439601),
        ("Pernambuco", 8796032),
        ("Piauí", 3119015),
        ("Rio de Janeiro", 15993583),
        ("Rio Grande do Norte", 3168133),
        ("Rio Grande do Sul", 10695532),
        ("Rondônia", 1560501),
        ("Roraima", 451227),
        ("Santa Catarina", 6249682),
        ("São Paulo", 41252160),
        ("Sergipe", 2068031),
        ("Tocantins", 1383453)]
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
cursor.executemany("insert into estados (nome, populacao) values(?, ?)", dados)
conexao.commit()
cursor.close()
conexao.close()