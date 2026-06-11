arquivopar = open("numpar.txt", "w")
arquivoimpar = open("numimpar.txt", "w")
for i in range(1, 501):
    if(i % 2 == 0):
        arquivopar.write("%d\n" % i)
    else:
        arquivoimpar.write("%d\n" % i)
    
arquivoimpar.close()
arquivopar.close()