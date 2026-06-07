# -*- coding: utf-8 -*-
def multi(a,b):
    if(a%b==0):
        r=True
    else:
        r=False
    return (r)

n1=float(input("Número 1: "))
n2=float(input("Número 2: "))
print (multi(n1,n2))