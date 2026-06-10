# -*- coding: utf-8 -*-
import sqlite3
from tkinter import *

conexao = sqlite3.connect("escola.db")
cursor = conexao.cursor()

def ListarN():    
    cursor.execute("select nome, cidade, curso from alunos order by nome asc")
    resultado = cursor.fetchall()
    xCntr = 0 
    ## apaga os registros anteriores
    for i in range (0, len(resultado)): 
        yCntr = int (i) - xCntr 
        listbox.delete (yCntr, yCntr) 
        xCntr  = xCntr+ 1
    ##insere os novos registros
    for item in resultado:            
        listbox.insert(END, item)
def ListarC():
    
    listbox.delete
    cursor.execute("select nome, cidade, curso from alunos order by curso asc")
    resultado = cursor.fetchall()
    xCntr = 0 
    ## apaga os registros anteriores
    for i in range (0, len(resultado)): 
        yCntr = int (i) - xCntr 
        listbox.delete (yCntr, yCntr) 
        xCntr  = xCntr+ 1
    ##insere os novos registros
    for item in resultado:            
        listbox.insert(END, item)
janela = Tk()
janela.title("Lista de alunos")
janela.geometry("700x500+100+100")

lb = Label(janela, width=23, text="Tela de Cadastro de Alunos", fg="black", font=("Verdana", 30))
lb.place(x=70, y=30)


listbox = Listbox(janela, width=70)
listbox.place(x=100, y=200)

bt = Button (janela, text="Listar Por Nome", fg="black", command=ListarN)
bt.place(x=100, y=400)
bt = Button (janela, text="Listar Por Curso", fg="black", command=ListarC)
bt.place(x=300, y=400)


lb = Label(janela, text="", fg="black")
lb.place(x=250, y=400)

janela.mainloop()

conexao.commit()
cursor.close()
conexao.close()