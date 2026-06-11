# -*- coding: utf-8 -*-
import sqlite3
from tkinter import *
conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()

def bt_click():
    user = ed1.get()
    senha = ed2.get()
    cursor.execute("select * from acesso where usuario='" + user + "' and senha='"+senha+"'")
    resultado = cursor.fetchone()
    if(resultado!=None):
        msg = " Acesso liberado"
    else:
        msg = "Acesso negado"
#    if(user == "admin" and senha == "admin"):
#        msg = "Acesso liberado"
#    else:
#        msg = "Acesso negado"
    Label(janela, text=msg, fg="white", bg=fundo).place(x=250, y=350)
janela = Tk()
janela.title("Login System")
janela.geometry("600x400+100+100")
fundo = "#550002"
janela["bg"] = fundo

lb = Label(janela, width=20, text="Tela de Login", bg=fundo, fg="white", font=("Verdana", 30))
lb.place(x=60, y=30)

lb = Label(janela, text="Usuário:", bg=fundo, fg="white", font=("Verdana", 12))
lb.place(x=100, y=200)
ed1 = Entry(janela, width=20, fg="black")
ed1.place(x=200, y=203)

lb2 = Label(janela, text="Senha:", bg=fundo, fg="white", font=("Verdana", 12))
lb2.place(x=100, y=230)
ed2 = Entry(janela, width=20, fg="black", show="*")
ed2.place(x=200, y=233)

bt = Button (janela, text="Entrar", bg=fundo, fg="white", command=bt_click)
bt.place(x=250, y=300)



janela.mainloop()


conexao.commit()
cursor.close()
conexao.close()