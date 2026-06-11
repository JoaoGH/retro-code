# -*- coding: utf-8 -*-
import sqlite3

conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()

uf = ["AC",
    "AL",
    "AP",
    "AM",
    "BA",
    "CE",
    "DF",
    "ES",
    "GO",
    "MA",
    "MT",
    "MS",
    "MG",
    "PA",
    "PB",
    "PR",
    "PE",
    "PI",
    "RJ",
    "RN",
    "RS",
    "RO",
    "RR",
    "SC",
    "SP",
    "SE",
    "TO"]
regiao = ["Norte",
    "Nordeste",
    "Norte",
    "Norte",
    "Nordeste",
    "Nordeste",
    "Centro-Oeste",
    "Sudeste",
    "Centro-Oeste",
    "Nordeste",
    "Centro-Oeste",
    "Centro-Oeste",
    "Sudeste",
    "Norte",
    "Nordeste",
    "Sul",
    "Nordeste",
    "Nordeste",
    "Sudeste",
    "Nordeste",
    "Sul",
    "Norte",
    "Norte",
    "Sul",
    "Sudeste",
    "Nordeste",
    "Norte"]
for i in range(0, len(uf)):
    cursor.execute("UPDATE estados SET uf = ?, regiao = ? where id = ?", (uf[i], regiao[i], i+1))
#    print (uf,p)
#
conexao.commit()