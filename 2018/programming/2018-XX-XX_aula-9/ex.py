# -*- coding: utf-8 -*-
from tkinter import *
master = Tk()

listbox = Listbox(master)
listbox.pack()


for item in ["one", "two", "three", "four"]:
    listbox.insert(END, item)

mainloop()