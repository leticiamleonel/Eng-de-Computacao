# -*- coding: utf-8 -*-
#!/usr/bin/env python3
"""
Created on Mon Feb 28 14:07:40 2022

@author: letic

Implemente o módulo mat.py contendo as seguintes funções:
impar(numero): Retorna True ou False, caso o numero seja impar ou não;
area_circulo(raio): retorna a área de um círculo a partir de seu raio, área = raio2 × π (dica, importe
pi da biblioteca math)
Codifique as chamadas a essas funções em outro arquivo.

"""

from math import pi

def impar(numero):
    if numero % 2 != 0:
        return True
    else:
        return False

def area_circulo(raio):
    return raio*raio*pi


from mat import impar, area_circulo

n = int(input('Informe um número inteiro: '))

if impar(n):
    print(n, 'é ímpar')
else:
    print(n, 'é ímpar')

r = float(input('Informe o raio do círculo: '))

print('A área do círculo é ', area_circulo(r))