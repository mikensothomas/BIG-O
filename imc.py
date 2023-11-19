from tkinter import *
import tkinter as tk

def pegar_imc():

  peso = float(peso_pessoa.get())
  altura = float(altura_pessoa.get())

  imc = peso / altura**2

  resultado = imc

  if imc < 18.5:
    msg['text'] ='Abaixo do peso'
  elif imc >= 18.5 and imc < 25:
    msg['text'] ='Peso normal'
  elif imc >= 25 and imc < 30:
    msg['text'] ='Acima do peso'
  else:
    msg['text'] = 'Obesidade'

  label_salvo['text'] = "{:.{}f}".format(resultado, 2)
 
janela = tk.Tk()
janela.title("Calculadora")
janela.config(bg="gray")
janela.geometry('500x425')

nome_calculadra = Label(janela, text= "Calculadora")
nome_calculadra.place(relx=.5, rely=.05, anchor="center")


peso = Label(janela, text= "Digite seu peso")
peso.place(relx=.3, rely=.2, anchor="center")

peso_pessoa = tk.Entry(janela)
peso_pessoa.place(relx=.6, rely=.2, anchor="center")

altura = Label(janela, text= "Digite sua altura")
altura.place(relx=.3, rely=.3, anchor="center")

altura_pessoa = tk.Entry(janela)
altura_pessoa.place(relx=.6, rely=.3, anchor="center")

botao = Button(janela, text="Calcular", command=pegar_imc)
botao.place(relx=.4, rely=.4)

label_salvo = Label(janela, text="", background="gray")
label_salvo.place(relx=.5, rely=.6, anchor="center")

imc = Label(janela, text= "Seu IMC é:")
imc.place(relx=.3, rely=.6, anchor="center")

msg = Label(janela, text="", background="gray")
msg.place(relx=.5, rely=.8, anchor="center")

janela.mainloop()