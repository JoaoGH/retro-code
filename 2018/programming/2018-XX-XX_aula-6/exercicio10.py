# -*- coding: utf-8 -*-
cpfP = input("Digite seu CPF: ")
cpf = cpfP.replace(".", "")
cpf = cpf.replace("-", "")
t1 = cpf.isdigit()
cont = 10
cont2 = 11
soma = 0
soma2 = 0
if(len(cpf) == 11 and t1 == True):
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
    soma2 += dig1 * 2   
    resto2 = soma2 % 11
    dig2 = 11-resto2
    if(dig2 > 9):
        dig2 = 0
        
    if(cpf[9] == str(dig1) and cpf[10] == str(dig2)):
        print("Seu CPF: " + str(cpfP))
    else:
        print("Errou")
        
else:
    print("Você não digitou seu cpf ou digitou caracteres invalidos")
