# -*- coding: utf-8 -*-
from tkinter import *
import sqlite3

conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()

def cadastrar():
    selection =option.get()
    nome = ed1.get()
    cidade = ed2.get()
    if(selection=="1"):
        Scurso="Informática"
    elif(selection=="2"):
        Scurso="Eletromecânica"
    else:
        Scurso="Edificações"
    dados=[(nome, cidade, Scurso)]
    #cursor.executemany("insert into alunos (nome, cidade, curso) values(?, ?, ?)", dados)
    lb["text"]="Cadastro"
janela = Tk()
janela.title("Cadastro")
janela.geometry("700x500+100+100")

lb = Label(janela, width=23, text="Tela de Cadastro de Alunos", fg="black", font=("Verdana", 30))
lb.place(x=70, y=30)

lb1 = Label(janela, text="Nome:", fg="black", font=("Verdana", 12))
lb1.place(x=100, y=200)
ed1 = Entry(janela, width=20, fg="black")
ed1.place(x=200, y=203)

lb2 = Label(janela, text="Cidade:", fg="black", font=("Verdana", 12))
lb2.place(x=100, y=230)
ed2 = Entry(janela, width=20, fg="black")
ed2.place(x=200, y=233)

option = StringVar()
rd1 = Radiobutton(janela, text="Informática", fg="black", font=("Verdana", 12), variable=option, value=1, tristatevalue=0)
rd1.place(x=100, y=260)
rd2 = Radiobutton(janela, text="Eletromecânica", fg="black", font=("Verdana", 12), variable=option, value=2, tristatevalue=0)
rd2.place(x=100, y=290)
rd3 = Radiobutton(janela, text="Edificações", fg="black", font=("Verdana", 12), variable=option, value=3, tristatevalue=0)
rd3.place(x=100, y=320)


bt = Button (janela, text="Cadastrar", fg="black", command=cadastrar)
bt.place(x=250, y=350)


lb=Label(janela, text="", fg="black")
lb.place(x=250, y=400)

janela.mainloop()

conexao.commit()
cursor.close()
conexao.close()