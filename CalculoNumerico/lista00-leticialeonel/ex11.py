# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 11:39:52 2022

@author: letic

Projete um código que leia uma quantidade indeterminada de números. A cada número informado, o
usuário deve informar se deseja continuar ou parar. Ao final, o código deve retornar o maior e o menor
número recebido.

"""

menor = float('Inf')
maior = float('-Inf')

while True:
    n = float(input('Informe um número: '))
    
    if n > maior:
        maior = n
        
    if n < menor:
        menor = n
        
    continuar = input('Deseja continuar(S/N)?')
    if continuar.upper() == 'N':
        break
        
print ('O maior número informado é: ', maior, '\n')
print ('O menor número informado é: ', menor, '\n')