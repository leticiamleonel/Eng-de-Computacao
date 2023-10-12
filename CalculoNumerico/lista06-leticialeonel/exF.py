# -*- coding: utf-8 -*-
"""
@author: letic
"""

import numpy as np


def f(x):
    return x**3 + 3 * x - 1

def fl(x):
    return 3 * x**2 + 3

def newtonRaphson(a, b, tol, n):
    x = (a + b)/2
    xant = float('nan')


    for i in range(n):
        
        x = x - f(x)/fl(x)
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


newtonRaphson(-5, 5, 10**-5, 20)