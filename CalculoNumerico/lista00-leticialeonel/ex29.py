# -*- coding: utf-8 -*-
#!/usr/bin/env python3
"""
Created on Mon Feb 28 14:07:56 2022

@author: letic

Escreva um módulo com funções para calcular o máximo divisor comum (MDC) e o mínimo múltiplo
comum (MMC) de uma lista de números. Dica: comece calculando o MDC dos dois primeiros números e,
depois, para cada número, calcule o MDC desse número com o resultado anterior (o MMC pode ser feito
de fórmula análoga). Implemente também chamadas a essas funções números digitados pelo usuário.

"""

def mdc_simples(n1, n2):
    while True:
        resto = n1 % n2
        if resto == 0:
            return n2
        n1 = n2
        n2 = resto

def mdc_lista(lista_numeros):
    mdc_atual = lista_numeros[0]
    for cont in range(1, len(lista_numeros)):
        mdc_atual = mdc_simples(mdc_atual, lista_numeros[cont])
    return mdc_atual

def mmc_lista(lista_numeros, mdc):
    mmc_atual = lista_numeros[0]
    for cont in range(1, len(lista_numeros)):
        num = lista_numeros[cont]
        mdc = mdc_simples(num, mmc_atual)
        mmc_atual = mmc_atual * num // mdc
    return mmc_atual

print('Cálculo de MDC e MMC')
lista_str = input('Informe a lista de números inteiros: ')
lista_num = [int(num) for num in lista_str.split()]
mdc = mdc_lista(lista_num)
mmc = mmc_lista(lista_num, mdc)

print('MDC:', mdc)
print('MMC:', mmc)