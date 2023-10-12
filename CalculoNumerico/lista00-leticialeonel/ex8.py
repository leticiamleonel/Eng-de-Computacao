# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 10:58:27 2022

@author: letic

Crie um código que receba valores para as variáveis reais A, B e C e calcule a seguinte fórmula:
N = (A + B × C) − √ A × B × C / 2 × C + B

"""

#entrada
a = int(input('Insira A: '))
b = int(input('Insira B: '))
c = int(input('Insira C: '))

#operação

N = ((a + b * c) - (a * b * c)**0.5) / 2 * c + b

#saída
print ('Resultado: ', N)