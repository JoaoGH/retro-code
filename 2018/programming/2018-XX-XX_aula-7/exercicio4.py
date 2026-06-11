arquivo = open("numimpar.txt", "r")
arquivomulti3 = open("multipl3.txt", "w")
for i in arquivo.readlines():
    t=int(i)
    if(t%3==0):
        arquivomulti3.write("%d\n" % t)
arquivo.close()