# -*- coding: utf-8 -*-
"""
@author: letic
"""
import numpy as np
from numpy.lib.function_base import diff

def f(x):
    return np.sqrt(x) - np.cos(x)

def g(x, a):
    return x - a * f(x)

def pontoFixo(a, b, tol, n):
    
    xant = float('nan')

    for i in range(n):
        
        x = g(x,a)
        fx = f(x)

        sinal = f(a) * f(x)
        
        error = abs((x-xant) / max(x,1))

        xant = x
        x = x - f(x)/diff(f(x))

        print(f"Iteração: {i} \n a: {a} \n b: {b} \n error: {error} \n x: {x} \n f(x): {fx} \n sinal: {sinal} \n ------------------------------------------")

        if(fx == 0) or (error < tol):
            print(f"Raiz aproximada encontrada: {x}")
            break
        if(sinal > 0 ):
            a = x 
        else:
            b = x

pontoFixo(0, 2, 10**-5, 20)