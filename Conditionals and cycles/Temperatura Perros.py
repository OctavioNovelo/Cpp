Nombre = input('Nombre: ')
Apellido = input('Apellido: ')
Temperatura_actual =  float (input('Temperatura actual: '))
print(Nombre + ' ' + Apellido)

if Temperatura_actual  <= 34.:
    print('Temperatura baja:' + ' ' + str(Temperatura_actual))

elif Temperatura_actual >= 37.5 and Temperatura_actual <= 39.:
    print('Temperatura normal:' + ' ' + str(Temperatura_actual))

elif Temperatura_actual >= 40. and Temperatura_actual <= 41.:
    print('Temperatura alta:' + ' ' + str(Temperatura_actual))
    
else:
    print('Ya mejor duermelo')
