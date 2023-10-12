# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 10:50:59 2022

@author: letic

Faça um código para determinar se um ano é ou não bissexto. Um ano N é bissexto se N é múltiplo de
400, ou então se N é múltiplo de quatro, mas não é múltiplo de 100. Por exemplo, 2012 (múltiplo de 4,
mas não múltiplo de 100) é bissexto, 1900 (múltiplo de quatro e de 100) não é bissexto, 2000 (múltiplo
de 400) é bissexto).
                                                                                              
"""
#entrada

ano = int(input('Digite um ano: '))

#teste e saída

if ano % 400 == 0:
    print('O ano é bissexto.')
else:
    print('O ano não é bissexto.')