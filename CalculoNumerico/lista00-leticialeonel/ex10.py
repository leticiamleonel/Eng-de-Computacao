# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 11:20:24 2022

@author: letic

Elabore um código que receba três notas considerando os pesos 0.3, 0.3 e 0.4 para as notas 1, 2 e 3,
respectivamente. A nota final é soma ponderada das três notas (NotaFinal = Nota1 ∗ 0.3 + Nota2 ∗
0.3 + Nota3 ∗ 0.4). O código deve receber estas notas para 10 alunos. É necessário informar se cada
aluno foi aprovado (nota final maior ou igual a 60) ou não. Também deve ser informada a média final
de todas as notas finais.

"""

#entrada

print ('Informe as notas de 10 alunos: ')

soma = 0 

#para 10 alunos
for i in range(10):
    print ('-----------------------------------')
    print('Aluno', i + 1)
    
    #lendo as notas
    nota1 = float(input('Insira a nota 1: '))
    nota2 = float(input('Insira a nota 2: '))
    nota3 = float(input('Insira a nota 3: '))
    
    #calculando nota final
    nota_final = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4)
    print('Nota final: ', nota_final)
    
    #soma
    soma = soma + nota_final
    
    #verificação
    if nota_final >= 60:
        print ('O aluno foi aprovado.' )
    else:
        print ('O aluno foi reprovado.')
        
        
#média final das notas
media_final = soma/10
print ('A média final das notas é: ', media_final)