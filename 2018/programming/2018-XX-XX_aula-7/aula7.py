arquivo = open( "numeros.txt" ,  "w" )
for linha in range(1, 501):
    arquivo.write( "%d\n" % linha)
arquivo.close()