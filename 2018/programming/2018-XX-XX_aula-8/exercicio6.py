import sqlite3
conexao = sqlite3.connect("brasil.db")
cursor = conexao.cursor()
uf = input("Digite o UF do estado: ")
uf=uf.upper()
cursor.execute("select * from estados where uf='"+uf+"'")
resultado=cursor.fetchone()
if(resultado != None):
    print(resultado)
else:
    print ("Nada encontrado! ")
cursor.close()
conexao.close()