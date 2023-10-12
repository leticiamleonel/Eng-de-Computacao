# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 09:28:29 2022

@author: letic

Considere a fórmula para cálculo de juros simples:
J = (C × I × T)/100, onde J, C, I e T correspondem a juros, capital, taxa e tempo, respectivamente. 
Construa um código que solicite ao usuário os valores de C, I e T e calcule J.
"""

#entrada

c = float(input('Insira o capital: '))
i = float(input('Insira a taxa: '))
t = float(input('Insira o tempo: '))

#operação

j = (c * i * t) / 100

#saída

print('Juros: ', j)