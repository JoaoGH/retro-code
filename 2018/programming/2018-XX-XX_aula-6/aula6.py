# -*- coding: utf-8 -*-
def maior(a,b):
    if(a>b):
        s=a," é maior que ",b
    else:
        s=b," é maior que ",a
    return (s)

a=float(input("Número 1: "))
b=float(input("Número 2: "))
print (maior(a,b))