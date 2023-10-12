# -*- coding: utf-8 -*-
"""
@author: letic
"""

import numpy as np


def f(x):
    return x**3 + 3 * x - 1

def secante(a, b, tol, n):
    
    xant = float('nan')

    for i in range(n):
        
        x = a - f(a) * ((a - b)/f(a) - f(b))
        fx = f(x)

       
        sinal = f(a) * f(x)
        
       
        error = abs((x-xant) / max(x,1))

        xant = x

      
        print(f"Iteração: {i} \n a: {a} \n b: {b} \n error: {error} \n x: {x} \n f(x): {fx} \n sinal: {sinal} \n ")

       
        if(fx == 0) or (error < tol):
            print(f"Raiz aproximada encontrada: {x}")
            break
       
        if(sinal > 0 ):
            a = x 
        else:
            b = x  

secante(-5, 5, 10**-5, 20)