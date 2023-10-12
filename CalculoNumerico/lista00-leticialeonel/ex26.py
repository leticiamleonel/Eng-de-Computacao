# -*- coding: utf-8 -*-
#!/usr/bin/env python3
"""
Created on Mon Feb 28 14:07:29 2022

@author: letic

Crie as funções input_int(mensagem) e input_float(mensagem) semelhantes à função input().
As funções devem receber uma mensagem, exibi-la ao usuário e garantir que o número digitado seja
válido. Enquanto o usuário digitar um número incorreto, as funções devem informar que o número é
inválido e solicitar e digitação novamente. Faça uma chamada a cada função para testá-las. Dica: utilize
a instrução try (tratamento de exceções).

"""

def input_int(mensagem):
    while True:
        try:
            return int(input(mensagem))
        except:
            print('Número inválido! Tente novamente.')


def input_float(mensagem):
    while True:
        try:
            return float(input(mensagem))
        except:
            print('Número inválido! Tente novamente.')


n = input_int('Informe um número inteiro: ')
print('Número informado:', n)
n = input_float('Informe um número fracionário: ')
print('Número informado:', n)