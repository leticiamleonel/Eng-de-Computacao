# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 09:52:30 2022

@author: letic

Faça um código que receba um número e responda se o mesmo é par ou ímpar.
"""

#entrada

numero = int(input("Número: "))

#teste e saída

if numero % 2 == 0:
    print('O número é par.')
else:
    print('O número é ímpar.')