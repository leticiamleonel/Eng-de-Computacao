# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:07:20 2022

@author: letic

Desenvolva um código que receba uma lista de números inteiros e, sem seguida, crie uma nova lista
contendo os mesmos números sem repetições.

"""

texto = input('Informe os elementos da lista (separados por vírgula): ')
lista = texto.split(',')
lista_sr = []

for elemento in lista:
    repete = False
    for elemento_sr in lista_sr:
        if elemento == elemento_sr:
            repete = True
            break
    if not repete:
        lista_sr.append(elemento)


print('Lista original: ', lista)
print('Lista sem prepetições: ', lista_sr)