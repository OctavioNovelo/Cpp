class CuentaPaciente:

    def __int__ (self, dueño, nombre_paciente, edad, peso, Temperatura_actual, raza, color):

        self.dueño = dueño
        self.nombre_paciente = nombre_paciente
        self.edad = edad
        self.temp = temp
        self.raza = raza
        self.color = color
        self.peso = peso

    def dueño(self):
        input('Nombre Completo: ')
        print(self.dueño)

    def nombre_paciente(self):
        input('Nombre del paciente: ')
        print(self.nombre_paciente)

    def edad(self):
        input('Edad: ')
        print(self.edad)

    def temp(self):

        Temperatura_actual =  float (input('Temperatura actual: '))

        if Temperatura_actual  <= 34.:
            print('Temperatura baja:' + ' ' + str(Temperatura_actual))
            
        elif Temperatura_actual >= 37.5 and Temperatura_actual <= 39.:
            print('Temperatura normal:' + ' ' + str(Temperatura_actual))

        elif Temperatura_actual >= 40. and Temperatura_actual <= 41.:
            print('Temperatura alta:' + ' ' + str(Temperatura_actual))
        else:
            print('Ya mejor duermelo')
            
    def raza(self):
        input('Raza: ')
        print(self.raza)

    def color(self):
        input('Color: ')
        print(self.color)

    def peso(self):
        input('Peso: ')
        print(self.peso)

