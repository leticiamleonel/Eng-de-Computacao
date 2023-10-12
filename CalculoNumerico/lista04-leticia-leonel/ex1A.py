# -*- coding: utf-8 -*-
"""
@author: letic
"""

import numpy as np

def f(x): return np.log(x)

def posFALSA(a,b,tol,n):
    xant = float('nan')
    
    for i in range(n):
        x = (a*f(b)-b*f(a))/(f(b)-f(a))
        
        sinal = f(a)*f(x)
        
        error = abs((x-xant)/max(x,1))
        
        xant = x
        
        print(f"Iteração: {i} \n a: {a} \n b: {b} \n error: {error} \n x: {x} \n f(x): {f(x)} \n sinal: {sinal} \n//")
        if(f(x) == 0) or (error < tol):
            print(f"raiz aproximada encontrada: {x}")
            break
        if(sinal > 0):
            a  = x
        else:
            a = b
posFALSA(0.1, 3, 10**-5, 20)