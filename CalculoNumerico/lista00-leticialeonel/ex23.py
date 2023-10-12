# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 14:06:30 2022

@author: letic

Construa um código capaz de calcular a velocidade média de uma viagem a partir das velocidades de
cada trecho. Uma viagem pode possuir de 1 a 50 trechos. O cálculo da velocidade média n trechos é
dado pela fórmula: (distância1 × velocidade1 + ... + distâncian × velocidaden) / distância1 + ... + distâncian
Após o cálculo da velocidade média, o programa deve exibir quais trechos tiveram velocidade acima da
média.

"""

num_trechos = int(input('Informe o número de trechos: '))

lista_dist = []
lista_vel = []
soma_dist = 0
soma_vel_dist = 0

for cont in range(num_trechos):
    print('------------------------------')
    print('Trecho ', cont+1)
    dist = float(input('Distância: '))
    lista_dist.append(dist)
    soma_dist += dist
    vel = float(input('Velocidade: '))
    lista_vel.append(vel)
    soma_vel_dist += vel*dist

vel_med = soma_vel_dist/soma_dist
print('Velocidade média:', vel_med)

print('Trechos com velocidade acima da média:')
for cont in range(num_trechos):
    if lista_vel[cont] > vel_med:
        print('Trecho ', cont+1 , ': diatância =', lista_dist[cont],', velocidade =', lista_vel[cont])