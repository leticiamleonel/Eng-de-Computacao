# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 13:51:58 2022

@author: letic

Crie um código que calcule o mínimo múltiplo comum (MMC) entre dois números. O MMC de dois
números n1 e n2 pode ser calculado como MMC = n1∗n2/MDC , onde MDC é o máximo divisor comum entre
n1 e n2.

"""
#entrada
print('Informe dois números')
n1 = int(input('N1: '))
n2 = int(input('N2: '))

n1_copia = n1
n2_copia = n2

#teste e operação
if (n1 > 0) and (n2 > 0):
    while True:
        resto = n1 % n2
        if resto == 0:
            break
        n1 = n2
        n2 = resto
    mmc = n1_copia * n2_copia // n2
    
    #saída
    print('\nO MMC é ', mmc)