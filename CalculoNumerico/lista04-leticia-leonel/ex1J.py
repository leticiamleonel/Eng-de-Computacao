# -*- coding: utf-8 -*-
"""
@author: letic
"""
import numpy as np

def f(x):
    return x - 3 - (x**(-x))

def posFALSA(a, b, tol, n):
    xant = float('nan')

    for i in range(n):
        x = (a*f(b) - b*f(a))/(f(b) - f(a))
        fx = f(x)

        sinal = f(a) * f(x)
        
        error = abs((x-xant) / max(x,1))

        xant = x

        print(f"Iteração: {i} \n a: {a} \n b: {b} \n error: {error} \n x: {x} \n f(x): {fx} \n sinal: {sinal} \n //")

        if(fx == 0) or (error < tol):
            print(f"Raiz aproximada encontrada: {x}")
            break
        if(sinal > 0 ):
            a = x 
        else:
            b = x

posFALSA(0, 9, 10**-5, 20)
