# -*- coding: utf-8 -*-
def listinha(lis):
    soma=sum(lis)
    media=sum(lis.values())/len(lis)
    s=str(soma)
    me=str(media)
    resp="Soma: ",s,"\nMedia: ",m
    return (resp)

L=[]

valor=input("Adicione um valor a lista: ")
L.append(valor)
opc=int(input("Adicionar outro valor a lista?\n 1-Sim\n 0-Não\n"))

while(opc==1):
    valor=input("\nAdicione outro valor a lista: ")
    L.append(valor)
    opc=int(input("Adicionar outro valor a lista?\n 1-Sim\n 0-Não\n"))

print(L)
print(sum(L))
media=sum(L.values())/len(L)
#s=str(soma)
#me=str(media)
resp="Soma: ",soma,"\nMedia: ",media
print(resp)




#print (listinha(L))