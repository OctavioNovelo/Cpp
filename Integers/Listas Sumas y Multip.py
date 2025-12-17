Sumas = [0, ]
Multiplicaciones = []

def suma(n):
    a_with_numbers = [float(x) for x in n]
    return sum(a_with_numbers)

def multip (lista):
    Multiplicaciones = 1
    for i in lista:
        Multiplicaciones *= i
    return Multiplicaciones

Sumas.append(int(input('#1: ')))
Sumas.append(int(input('#2: ')))
Sumas.append(int(input('#3: ')))
Sumas.append(int(input('#4: ')))

Multiplicaciones.append(int(input('#1: ')))
Multiplicaciones.append(int(input('#2: ')))
Multiplicaciones.append(int(input('#3: ')))
Multiplicaciones.append(int(input('#4: ')))

print(Sumas)
print(Multiplicaciones)


suma(Sumas)
multip(Multiplicaciones)

print(suma(Sumas))
print(multip(Multiplicaciones))

