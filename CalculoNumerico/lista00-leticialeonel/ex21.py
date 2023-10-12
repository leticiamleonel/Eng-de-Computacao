# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:06:08 2022

@author: letic

A função shuffle() da biblioteca random permite embaralhar uma lista de elementos. Utilizando essa
função crie um código capaz de sortear elementos de uma lista. O usuário deve informar o número total
de elementos e quantos elementos devem ser sorteados.

"""


from random import shuffle

n_elementos = int(input('Informe o número de elementos: '))
n_sorteio = int(input('Informe a quantidade de elementos sorteados: '))

lista = list(range(1, n_elementos+1))
shuffle(lista)

print('Elementos sorteados:')
for cont in range(n_sorteio):
    print(lista[cont])