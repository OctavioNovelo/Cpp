#SyntaxError
#Error del programa cuando no se siguen las reglas formales de escribir el codigo



#Excepciones
#Errores detectado durante la ejecucion

    #IndexError
        #Cadena de caracteres fuera de rengo 

    #KeyError
       # Clave que no existe en un diccionario 

    #NameError
        #El nombre de una variable no a sido definido

    #RecursionError
       #El proceso de recursion hizo el maximo de llamadas de recursion, exploto el propgrama

try:
    # Intenta ejecutar este codigo
except:
    #Si oucrre una excepcion, detente
    #inmediatamente y ejecuta este codigo

#Ejemplo

num1 = int(input('Ingrese un numero: '))
num2 = int(input('Ingrese un numero: '))

try:
    resultado = num1 / num2
    print:('{num2} / {num2} =', resultado)
except ZeroDivisionError:
    print('Alerta, Excepcion.')
       
