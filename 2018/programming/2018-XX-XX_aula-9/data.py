# -*- coding: utf-8 -*-
from tkinter import *
#def converter():
#    unidade = [
#    "um",
#    "dois",
#    "três",
#    "quatro",
#    "cinco",
#    "seis",
#    "sete",
#    "oito",
#    "nove"
#    ]
#    unidade2=[
#    "dez",
#    "onze",
#    "doze",
#    "treze",
#    "quatorze",
#    "quize",
#    "dezesseis",
#    "dezessete",
#    "dezoito",
#    "dezenove"
#    ]
#    dezena=[
#    "vinte",
#    "trinta",
#    "quarenta",
#    "cinquenta",
#    "sessenta",
#    "setenta",
#    "oitenta",
#    "noventa"
#    ]
#    centena=[
#    "cem",
#    "duzentos",
#    "trezentos",
#    "quatrocentos",
#    "quinhentos",
#    "seiscentos",
#    "oitocentos",
#    "novecentos"]
#    milhar=["mil"]
#    meses=[
#    "janeiro",
#    "fevereiro",
#    "março",
#    "abril",
#    "maio",
#    "junho",
#    "julho",
#    "agosto",
#    "setembro",
#    "outubro",
#    "novembro",
#    "dezembro"
#    ]
#    
#    
#    data = ed1.get()
#    datinha=""
#    for i in range (0,10):
#        if(data[i].isnumeric()):
#            datinha+=data[i]
#    diaS=datinha[0:2]
#    d=diaS[0]
#    D=diaS[1]
#    dia=int(diaS)
#    di=int(d)       
#    Di=int(D)
#    
#    mesS=datinha[2:4]
#    m=mesS[0]
#    M=mesS[1]
#    mes=int(mesS)
#    mi=int(m)
#    Mi=int(M)
#    
#    
#    
#    anoS=datinha[4:]
#    a1=anoS[0]
#    a2=anoS[1]
#    a3=anoS[2]
#    a4=anoS[3]
#    ano=int(anoS)
#    a1i=int(a1)
#    a2i=int(a2)
#    a3i=int(a3)
#    a4i=int(a4)
#    ad=int(""+a3+""+a4)
#    
#    
#    if(dia>0 and dia<32):
#        if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12):
#            if(dia>31):
#                parte1= ("dia inválido")
#            else:
#                for i in range(0,10):
#                    if(Di==0 and di!=1):
#                        parte1=""+dezena[di-2]
#                    elif(Di==i):
#                        if(di>1):
#                            parte1=""+dezena[di-2]+" e "+unidade[Di-1]
#                        elif(di==1):
#                            parte1=""+unidade2[Di]
#                        else:
#                            parte1=""+unidade[Di-1]
#        elif(mes!=2):
#            if(dia>30):
#                parte1= ("dia inválido")
#            else:
#                for i in range(0,10):
#                    if(Di==0 and di!=1):
#                        parte1=""+dezena[di-2]
#                    elif(Di==i):
#                        if(di>1):
#                            parte1=""+dezena[di-2]+" e "+unidade[Di-1]
#                        elif(di==1):
#                            parte1=""+unidade2[Di]
#                        else:
#                            parte1=""+unidade[Di-1]
#        else:
#            if(dia>29):
#                parte1= ("dia inválido")
#            elif(ano%4!=0):
#                if(dia==29):
#                    parte1= ("dia inválido")
#                else:
#                    for i in range(0,10):
#                        if(Di==0 and di!=1):
#                            parte1=""+dezena[di-2]
#                        elif(Di==i):
#                            if(di>1):
#                                parte1=""+dezena[di-2]+" e "+unidade[Di-1]
#                            elif(di==1):
#                                parte1=""+unidade2[Di]
#                            else:
#                                parte1=""+unidade[Di-1]
#            else:
#                for i in range(0,10):
#                    if(Di==0 and di!=1):
#                        parte1=""+dezena[di-2]
#                    elif(Di==i):
#                        if(di>1):
#                            parte1=""+dezena[di-2]+" e "+unidade[Di-1]
#                        elif(di==1):
#                            parte1=""+unidade2[Di]
#                        else:
#                            parte1=""+unidade[Di-1]
#    else:
#        parte1=("dia inválido")
#
#                
#                
#                
#    parte2=meses[mes-1]
#    
#    
#    
#    parte3=""
#    
#    if (ano>999):
#        if(ano>1999):
#            if(ad>9 and ad<20):
#                parte3=""+unidade[a1i-1]+" "+milhar[0]+" "+centena[a2i-1]+" "+unidade2[ad]
#            else:
#                parte3=""+unidade[a1i-1]+" "+milhar[0]+" "+centena[a2i-1]+" "+dezena[a3i-1]+" "+unidade[a4i-1]
#        else:
#            if(ad>9 and ad<20):
#                parte3=""+milhar[0]+" "+centena[a2i-1]+" "+centena[a2i-1]+" "+unidade2[ad]
#            else:
#                parte3=""+unidade[a1i-1]+" "+milhar[0]+" "+centena[a2i-1]+" "+dezena[a3i-1]+" "+unidade[a4i-1]
#    elif (ano>99):
#        if(ad>9 and ad<20):
#            parte3=""+centena[a2i-1]+" "+centena[a2i-1]+" "+unidade2[ad]
#        else:
#            parte3=""+centena[a2i-1]+" "+centena[a2i-1]+" "+dezena[a3i-1]+" "+unidade[a4i-1]
#    else:
#        if(ad>9 and ad<20):
#            parte3=""+unidade2[ad]
#        else:
#            parte3=""+dezena[a3i-1]+" "+unidade[a4i-1]
#            
#    msg=parte1+" de "+parte2+" de "+parte3
#    Label(janela, text=msg, fg="black", ).place(x=250, y=100)


#!/urb/bin/env python
# _*_ coding: utf-8 _*_

unidades = ["zero", "um", "dois", "três", "quatro",
            "cinco", "seis", "sete", "oito", "nove"]

teens = ["dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"]

tens = ["dez", "vinte", "trinta", "quarenta", "cinquenta",
        "sessenta", "setenta", "oitenta", "noventa"]

def tercia(num):
    numero=str(num)
    numero.zfill(3)
    a=int(numero[0])
    b=int(numero[1])
    c=int(numero[2])
    if a == 0:
        if b == 0:
            resultado=unidades[c]
            return resultado
        elif b == 1:
            if c >= 0 and c <= 9:
                resultado = teens[c]
                return resultado
        elif b == 2:
            if c == 0:
                resultado = 'vinte'
                return resultado
            elif c > 0 and c <= 9:
                resultado ='vinte e '+unidades[c]
                return resultado
        elif b >=3 and b <= 9:
            if c == 0:
                resultado = tens[b-1]
                return resultado
            if c >= 1 and c <= 9:
                resultado = tens[b-1]+' e '+unidades[c]
                return resultado
    if a == 1:
        if b == 0:
            if c == 0:
                resultado = 'cem'
                return resultado
            elif c > 0 and c <= 9:
                resultado ='cento e '+unidades[c]
                return resultado
        elif  b == 1:
            if c >= 0 and c <= 9:
                resultado = 'cento e '+teens[c]
                return resultado
        elif b == 2:
            if c == 0:
                resultado = 'cento e vinte'
                return resultado
            elif c > 0 and c <= 9:
                resultado ='cento e vinte e '+unidades[c]
                return resultado
        elif b >= 3 and b <= 9:
            if c == 0:
                resultado = 'cento e '+tens[b-1]
                return resultado
            elif c > 0 and c <= 9:
                resultado = 'cento e '+tens[b-1]+ ' e '+unidades[c]
                return resultado

    elif a >= 2 and a <= 9:
        if a == 2 and b ==0 and c == 0:
            prefix='duzentos'
        elif a ==2:
            prefix='duzentos e '

        if a == 3 and b ==0 and c == 0:
            prefix='trezentos'
        elif a == 3: 
            prefix='trezentos e '
        if a == 4 and b ==0 and c == 0:
            prefix='quatrocentos'
        elif a == 4:
            prefix='quatrocentos e '
        if a == 5 and b ==0 and c == 0:
            prefix='quinhentos'
        elif a == 5:
            prefix='quinhentos e '
        if a == 6 and b ==0 and c == 0:
            prefix='seiscentos'
        elif a == 6:
            prefix='seiscentos e '

        if a == 7 and b ==0 and c == 0:
            prefix='setecentos'
            
        elif a == 7:
            prefix='setecentos e '
        if a == 8 and b ==0 and c == 0:
            prefix='oitocentos'
        elif a == 8:
            prefix='oitocentos e '
        if a == 9 and b ==0 and c == 0:
            prefix='novecentos'
        elif a == 9:
            prefix='novecentos e '

        if b == 0:
            if c == 0:
                resultado = prefix
                return resultado
            elif c > 0 and c <= 9:
                resultado = prefix+unidades[c]
                return resultado
        elif b == 1:
            if c >= 0 and c <= 9:
                resultado = prefix+teens[c]
                return resultado
            #elif c >= 6 and c <= 9:
                #resultado = prefix+tens[b-1]+' e '+unidades[c]
                return resultado
        elif b == 2:
            if c == 0:
                resultado = prefix+'vinte'
                return resultado
            elif c > 0 and c <= 9:
                resultado = prefix+'vinte e '+unidades[c]
                return resultado
        elif b >= 3 and b <= 9:
            if c == 0:
                resultado = prefix+tens[b-1]
                return resultado
            elif c > 0 and c <= 9:
                resultado = prefix+tens[b-1]+' e '+unidades[c]
                return resultado
def main(num):
    result=''
    numero=str(num)
    numero=numero.zfill(9)+numero
    posicion=1
    for i in [0,3,6]:
        var=numero[i]+numero[i+1]+numero[i+2]
        if int(var) != 0:
            res=tercia(var)
            if i == 0:
                result=res+" milhões "
            elif i == 3:
                result=result+res+" mil "
            elif i == 6:
                result=result+res
    return result

def converter():
    
    data=ed1.get()
    datinha=""
    for i in range (0,10):
        if(data[i].isnumeric()):
            datinha+=data[i]
    dia=datinha[0:2]
    dia=int(dia)
    parte1=main(dia)
    mes=datinha[2:4]
    mes=int(mes)
    parte2=main(mes)
    ano=datinha[4:]
    ano=int(ano)
    parte3=main(ano)
    msg=parte1+" de "+parte2+" de "+parte3
    Label(janela, text=msg, fg="black", ).place(x=250, y=100)
 
janela = Tk()
janela.title("Login System")
janela.geometry("600x400+100+100")

lb = Label(janela, text="Data:", fg="black", font=("Verdana", 12))
lb.place(x=100, y=10)
ed1 = Entry(janela, width=20, fg="black")
ed1.place(x=150, y=13)


bt = Button (janela, text="Converter", fg="black", command=converter)
bt.place(x=250, y=50)



janela.mainloop()