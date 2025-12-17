try:
    
    def fibonacci(n):
        if n == 0 or n == 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n -2)
            #La suma de la resta de los dos numeros anteriores
    print(fibonacci(6))

except RecursionError:
    print('Exploto')
