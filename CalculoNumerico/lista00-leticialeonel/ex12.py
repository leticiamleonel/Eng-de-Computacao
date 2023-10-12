# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 11:50:31 2022

@author: letic

A fórmula C = 9/5*(F − 32) representa a equivalência de temperaturas entre graus Celsius (C) e graus
Fahrenheit (F). Construa um código capaz de converter uma temperatura de Celsius para Fahrenheit e
outro que façam o contrário (F = 5×C/9 + 32). Junte os dois códigos de conversão em um único código.
Inicialmente deve ser perguntado ao usuário qual a conversão desejada para que em seguida seja usada
a fórmula adequada.

"""

#pergunta ao usuário
print('Qual conversão deseja fazer?')
print('A -- Fahrenheit para Celsius.')
print('B -- Fahrenheit para Celsius.')

resposta = input()

#teste e operação
if resposta == 'A':
    F = float(input('Informe a temperatura: '))
    C = (9 / 5)* (F - 32)
    print('A temperatura é: ', C, '°C.' )
    
if resposta == 'B':
    C = float(input('Informe a temperatura: '))
    F = (5 * (C/9)) + 32 
    print('A temperatura é: ', F, '°F.' )