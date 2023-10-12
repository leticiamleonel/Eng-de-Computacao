# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 09:56:48 2022

@author: letic

Faça um código capaz de calcular as raízes de uma equação de segundo grau no formato Ax^2+Bx+C = 0.
Considere as seguintes observações:
Se o termo A = 0 então a equação não é uma equação de segundo grau;
Seja ∆ = B2 − 4 × A × C. Se ∆ < 0 então a equação não possui raízes. Se ∆ = 0 então a equação
possui apenas uma raiz.

"""

#entrada
print('Considere a equação no formado Ax^2 + Bx + C: ')
a = int(input('Informe A: '))
b = int(input('Informe B: '))
c = int(input('Informe C: '))

#operação e teste

if a == 0:
    print('Não é equação de segundo grau.')
else:
    delta = (b**2) - 4 * a * c
    if delta < 0:
        print('A equação não possui raizes.')
    else:
        x1 = (-b + (delta**0.5)) / 2 * a
        if delta == 0:
            print('A equação possui apenas uma raiz, que é: ', x1)
        else:
            x2 = (-b - (delta**0.5)) / 2 * a
            
#saída     
print('As raízes são: ', '\n', 'X1 = ', x1, '\n', 'X2 = ', x2)