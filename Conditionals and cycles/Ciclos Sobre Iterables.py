#Iterables
#for <var> in <iterable>:
    # Codigo

print('STRING')
for Palabra in 'Loops':
    print('Pendejo')

print('LISTAS')    
for lista in [1, 2, 3]:
    print(lista)

print('TUPLAS')
for Tupla in (1, 2, 3):
    print(Tupla)

letras = {'a' : 1, 'b' : 2}
            # 'a' = Clave  1 = Valor 'b' = Clave  2 = Valor

print('CLAVES')
for Claves in letras:
    print(Claves)

print('VALORES')
for Valores in letras.values():
    print(Valores)

print('CLAVE VALOR')
for Claves, Valores in letras.items():
    print(Claves, Valores)

