# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:02:32 2022

@author: letic

Desenvolva um código que, considerando um conjunto de números naturais A = {1, 2, 3, ..., n}, gere
todas as combinações com três elementos contidos em A. Antes de gerar as combinações o programa
deve perguntar o número de elementos de A ao usuário.

"""
#entrada
n = int(input('Informe o número de elementos do conjunto: '))
print('\nPossíveis combinações:')

for cont1 in range(n):
    for cont2 in range(n):
        for cont3 in range(n):
            print('(', cont1+1, ', ', cont2+1,', ', cont3+1, ')', sep='')