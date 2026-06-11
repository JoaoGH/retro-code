#import smtplib

def grava(email):
    arquivo = open("emails.txt", "w")
    grava=email+";"
    arquivo.write("%d\n" % grava)
    arquivo.close()
    return ()

def enviar():
    #metodo ssl
    
    arquivo = open("emails.txt", "r")
    for i in arquivo.readlines():
        print(i[0:i.find(";")])
    
    
##        smtp = smtplib.SMTP_SSL('smtp.gmail.com', 465)
##        smtp.login('python.joao@gmail.com', '123456sete')
##        de = 'python.joao@gmail.com'    
##        para = ['seuemail@gmail.com']
##        msg = """From: %s
#        To: %s
#        Subject: Buteco Open Source
#
#        Email de teste do Buteco Open Source.#""" % (de, ', '.join(para))
##
##        smtp.sendmail(de, para, msg)
##
##        smtp.quit()
    
    arquivo.close()
    return()

rep=True
while(rep==True):
    opc=int(input("1- Cadastro de e-mail \n2- Enviar e-mail \n3- Finalizar programa"))
    while(opc==1):
        email=input("\nCadastre um e-mail na lista: ")
        grava(email)
        opc=int(input("\n1- Para cadastrar outro e-mail\n2- Para voltar ao menu\n"))
    while(opc==2):
        enviar(msg)
        
        