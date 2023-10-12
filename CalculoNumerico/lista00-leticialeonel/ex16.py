# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 13:54:33 2022

@author: letic

Elabore um código capaz de simular uma calculadora simples. O código deve solicitar ao usuário a
operação desejada (soma, multiplicação, divisão, subtração ou potência) ou então sair. Quando o usuário
escolhe uma operação, o programa deve solicitar dois números, realizar a operação sobre estes números
e exibir o resultado. O código deve sempre solicitar uma nova operação até que o usuário escolha sair.

"""

print('----------CALCULADORA-----------')
print()

#informação ao usuário

while True:
    print('+: soma')
    print('-: subtração')
    print('*: multiplicação')
    print('/: divisão')
    print('**: potência')
    print('s: sair')
    
    #entrada
    
    resposta = input('Informe a opção desejada: ')
    
    if resposta == 's':
        break
    
    if resposta not in ['+', '-', '*', '/', '**']:
        print('Opção inválida')
    else:
        print('Inforne dois números:')
        
        #entrada
        
        n1 = float(input('N1:'))
        n2 = float(input('N2:'))
        
        #cáculos
        
        if resposta == '+':
            r = n1 + n2
        elif resposta == '-':
            r = n1 - n2
        elif resposta == '*':
            r = n1 * n2
        elif resposta == '/':
            r = n1 / n2
        elif resposta == '**':
            r = n1 ** n2

#saída

print(n1, resposta, n2, '=', r)
