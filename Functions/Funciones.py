#Funciones
#Bloque de codigo reutilizable que realiza una sola tarea especifica
#DRY = Dont Repeat Yourself

#def <función>():
    # Codigo
    
def mostrar_mensaje():
    print('Hola, Mundo')

mostrar_mensaje()

#Parametros = Variable 
    #Es una variable que es parte de la funcion
    #Se incluyen en la definicion de la funcion

# def funcion(<parametero>):
    # Codigo

def mostrar_doble(num):
    print(num * 2)

mostrar_doble(2)

 #Si se usan mas de uno, se separa por comas
def Sumar(x, y):
    print(x + y)

Sumar(0, 0)

#Argumentos
    #Valor que se le asigna al parametro cuando se llama a la funcion
    #Se especifican cuando se llama a la funcion

#Definicion de la Funcion
def sumar(x, y):
    print(x + y)
#Lamada de la funcion
sumar(4, 5)
            #Argumento

#Retornar valores al programa principal
    #Retornar una valor luego de completar la tarea

#def <funcion>(<parametro>):
    # Codigo
    # return <valor>

def sumar(x, y):
    return x + y

Resultado = sumar(4, 5)
print(Resultado)

#Para incluirlo a una variable tien que haber RETURN

#Scope = Alcanse de una Variable

