# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 08:11:52 2022

@author: letic

Escreva um código que receba um número de segundos e converta esse número em horas, minutos e segundos.
Escreva também um programa que faça ao contrário.

"""

#programa1
segundos = float(input('Digite os segundos: '))

#operações
horas = segundos/3600

minutos = segundos/60

#mostrando resultado

print ('Horas: ', horas, '\n', 'Minutos: ', minutos, '\n')


#programa2
print('------------------------------------------------------------')

#entrada
horas = float(input('Digite as horas: '))
minutos = float(input('Digite os minutos: '))
segundos = float(input('Digite os segundos: '))

#operação
total = (horas*3600) + (minutos*60) + segundos

#saída
print('O total de segundos é: ', total)