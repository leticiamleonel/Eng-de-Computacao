# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 13:48:14 2022

@author: letic

Implemente o algoritmo de Euclides1 para calcular o máximo divisor comum (MDC) de dois números.

"""

#entrada
print('Informe dois números')
n1 = int(input('N1: '))
n2 = int(input('N2: '))

#teste e opração
if n1 < 1 or n2 < 1:
    print('\nNúmeros inválidos para MDC')
else:
    while True:
        resto = n1 % n2
        if resto == 0:
            break
        n1 = n2
        n2 = resto
        #saída
    print('\nO MDC é ', n2)