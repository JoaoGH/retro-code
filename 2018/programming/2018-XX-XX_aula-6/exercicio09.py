# -*- coding: utf-8 -*-
cpfP = input("Digite os 9 primeiros digitos do CPF: ")
cpf=cpfP.replace(".","")
t1 = cpf.isdigit()
cont = 10
cont2 = 11
soma = 0
soma2=0
if(len(cpf) == 9 and t1 == True):
    lista = (list(cpf))
    for i in range(0, 9):
        soma += int(lista[i]) * cont
        cont = cont-1
    resto = soma % 11
    if(resto < 2):
        dig1 = 0
    else:
        dig1 = 11-resto
    for i in range(0, 9):
        soma2 += int(lista[i]) * cont2
        cont2 = cont2-1
    soma2+=dig1*2   
    resto2=soma2%11
    dig2=11-resto2
    if(dig2>9):
        dig2=0
    print("Seu CPF: "+str(cpfP)+"-"+str(dig1)+str(dig2))
else:
    print("Você não digitou os 9 primeiros digitos do cpf ou digitou caracteres invalidos")
