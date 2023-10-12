# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:06:22 2022

@author: letic

Projete um código que preencha uma lista de 100 posições com números de 1 a 10 (utilize a função
randint() da biblioteca random). Em seguida, conte o número de vezes que cada número aparece e
armazene em um segunda lista. Por fim, exiba a quantidade de veses que cada número apareceu.

"""

from random import randint

lista = []
for cont in range(100):
    num = randint(1, 10)
    lista.append(num)

lista_cont = [0]*10

for num in lista:
    lista_cont[num-1] += 1

print('Contagem dos números:')

for cont in range(10):
    print(cont+1, ':', lista_cont[cont])