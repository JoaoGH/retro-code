# -*- coding: utf-8 -*-
from tkinter import *
import sqlite3
conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()

def bt_click():
    user = ed1.get()
    senha = ed2.get()
    dados=[(user, senha)]
    cursor.executemany("insert into acesso (usuario, senha) values(?, ?)", dados)
    Label(janela, text="cadastrado", fg="black").place(x=250, y=350)
janela = Tk()
janela.title("Cadastro")
janela.geometry("600x400+100+100")

lb= Label(janela, width=20, text="Tela de Cadastro", fg="black", font=("Verdana", 30))
lb.place(x=60, y=30)

lb= Label(janela, text="Usuário:", fg="black", font=("Verdana", 12))
lb.place(x=100, y=200)
ed1 = Entry(janela, width=20, fg="black")
ed1.place(x=200, y=203)

lb2= Label(janela, text="Senha:", fg="black", font=("Verdana", 12))
lb2.place(x=100, y=230)
ed2 = Entry(janela, width=20, fg="black", show="*")
ed2.place(x=200, y=233)

bt = Button (janela,  text="Cadastrar", fg="black", command=bt_click)
bt.place(x=250 , y=300)



janela.mainloop()

conexao.commit()
cursor.close()
conexao.close()