#Recursion
#Funcion Recursiva


#Proceso Base
def fibonacci(n):
    #Mientras mas quiera saber el valor de x lugar en la sucecion, mas llamadas recursivas
    #hare hasta que el resultado culmine en 1 para que el proceso base vuelva a ponerse en
    #marcha
    if n == 0 or n == 1:
        return n
#Funcion Recursiva 
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
