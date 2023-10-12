# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:04:18 2022

@author: letic

Exercício 20:
Implemente um código que receba duas listas com 10 números e armazene em um terceira lista a soma
das duas primeiras, considerando as respectivas posições. Ao final, exiba o resultado na tela.

"""


lista1 = []
lista2 = []
lista_soma = []

print('Informe da primeira lista')

for cont in range(10):
    mensagem = 'Posição ' + str(cont) + ': '
    numero = float(input(mensagem))
    lista1.append(numero)

print('Informe da segunda lista')

for cont in range(10):
    mensagem = 'Posição ' + str(cont) + ': '
    numero = float(input(mensagem))
    lista2.append(numero)

#Soma

for cont in range(10):
    numero = lista1[cont] + lista2[cont]
    lista_soma.append(numero)

for cont in range(10):
    print('Posição ', cont, ':', lista1[cont], '+', lista2[cont],'=', lista_soma[cont])