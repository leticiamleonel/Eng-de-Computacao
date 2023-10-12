# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 09:35:45 2022

@author: letic

Construa um código que receba três números e informe o maior deles.
"""

#entrada

n1 = int(input('Insira o 1° número: '))
n2 = int(input('Insira o 2° número: '))
n3 = int(input('Insira o 3° número: '))

#teste

maior = n1

if n2 > maior:
    maior = n2

if n3 > maior:
    maior = n3
    
#saída

print('Maior: ', maior)