#Sentencia With
    #Leer archivo
with open('Hola Cabron.txt', 'r') as Hola:
    for linea in Hola:
        print('=== Frase ===')
        print(linea)

    #Escribir archivo
notas = {
    'Nora' : 87,
    'Gino' : 100,
    'Loretto' : 67,
    'Talina' : 45
}
with open('darta_estudiantes.txt', 'w') as archivo:
    for nombre, nota in notas.items():
        archivo.write(nombre + '-' + str(nota) + '\n')

    #Agregar Datos
nuevas_notas = {
    'Emily' : 54,
    'Daniel' : 98,
    'Juliene' : 78
    }

with open('data_estudiantes.txt', 'a') as archivo:
    for nombre, notas in nuevas_notas.items():
        archivo.write(nombre + '_' + str(nota) + '\n')
         
