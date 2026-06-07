# -*- coding: utf-8 -*-
def triangulo(b,h):
    a=(b*h)/2
    a=str(a)
    resp="Area: "+a
    return (resp)

base=float(input("Informe a base do triangulo: "))
altura=float(input("Informe a altura do triangulo: "))
print (triangulo(base, altura))