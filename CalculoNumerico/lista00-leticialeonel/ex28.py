# -*- coding: utf-8 -*-
#!/usr/bin/env python3
"""
Created on Mon Feb 28 14:07:48 2022

@author: letic

Implemente um módulo com as seguintes funções:
ano_bissexto(ano): retorna True se o ano for bissexto e False, em caso negativo;
dias_mes(ano, mes): retorna a quantidade de dias do mês (deve usar a função ano_bissexto);
nome_mes(mes): retorna o nome do mes informado (1 a 12)
Construa um programa que receba uma data do usuário (mês e ano) e mostre o resultado das funções
implementadas sobre essa data.

"""


def ano_bissexto(ano):
    if (ano % 400 == 0):
        return True
    elif (ano % 4 == 0) and not (ano % 100 == 0):
        return True
    else:
        return False


def dias_mes(ano, mes):
    if mes in [1, 3, 5, 7, 8, 10, 12]:
        return 31
    elif mes in [4,6,9,11]:
        return 30
    elif mes == 2:
        if ano_bissexto(ano):
            return 29
        else:
            return 28
    else:
        return -1


def nome_mes(mes):
    lista_nomes = ['janeiro', 'fevereiro', 'março',
                   'abril', 'maio', 'junho', 'julho',
                   'agosto', 'setembro', 'outubro',
                   'novembro', 'dezembro']

    if 1 <= mes <= 12:
        return lista_nomes[mes-1]
    else:
        return 'Mês inválido'
    
    
print('Informe a data')
ano = int(input('Ano: '))
mes = int(input('Mês: '))


print('Ano bissexto:', ano_bissexto(ano))
print('Dias do mês:', dias_mes(ano, mes))
print('Nome do mês:', nome_mes(mes))