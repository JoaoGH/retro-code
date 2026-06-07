arquivo = open("lista.txt", "w+")
for i in range(1,11):
    nome=input("Nome: ")
    cidade=input("Cidade: ")
    curso=input("Curso: ")
    print()

    gravar=str(nome+";"+cidade+";"+curso)
    arquivo.write(gravar)
    arquivo.write("\n")
arquivo.close()