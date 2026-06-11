# -*- coding: utf-8 -*-
def circulo(r):
    pi=3.14
    a=pi*(r*r)
    d=r*2
    c=pi*d
    a=str(a)
    d=str(d)
    c=str(c)
    resp="Area: "+a+"\nDiametro: "+d+"\nCircunferencia: "+c
    return (resp)

raio=float(input("Informe o raio do circulo: "))
print (circulo(raio))