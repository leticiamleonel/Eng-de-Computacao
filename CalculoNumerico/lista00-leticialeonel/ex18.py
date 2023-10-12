# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:04:09 2022

@author: letic

Considerando um conjunto A = {1, 2, 3, ..., n} com n informado pelo usuário, crie um código para obter
os subconjuntos de três elementos contidos em A. Lembre-se que um conjunto não possui elementos
repetidos.

"""

#entrada
n = int(input('Informe o número de elementos do conjunto: '))

print('\nSubconjuntos:')

#Operação
for cont1 in range(n):
    for cont2 in range(cont1+1, n):
        for cont3 in range(cont2+1, n):
            #saída
            print('{', cont1+1, ', ', cont2+1,', ', cont3+1, '}', sep='')