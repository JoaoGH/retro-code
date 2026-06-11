arquivo = open("numpar.txt", "r")
for i in arquivo.readlines():
    t=int(i)
    if(t%4==0):
        print(i)
arquivo.close()