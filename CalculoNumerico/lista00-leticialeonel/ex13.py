# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 12:01:19 2022

@author: letic

Elabore um código que calcule o fatorial de um número recebido. O fatorial de um número n, representado
por n!, é calculado da seguinte maneira n! = n × (n − 1) × ... × 2 × 1. Sendo que 1! = 0! = 1.

"""

#entrada
n = int(input('Informe um número inteiro: '))

fat = 1

#teste
if n > 1:
    for cont in range(2, n+1):
        fat = fat * cont

#saída
print('O fatorial de', n, 'é', fat)