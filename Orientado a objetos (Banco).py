class CuentaBancaria:
    
    def __init__(self, numero_cuenta, nombre_titular, balance):
            #Funcion de INICIALIZACION
        self.numero_cuenta = numero_cuenta
        self.nombre_titular = nombre_titular
        self.balance = balance
        #self = Instancia Actual
        
    def generar_balance(self):
        print(self.balance)

    def depositar(self, monto):
        if monto > 0:
            self.balance += monto
            print(self.balance)
            
#INSTANCIAS
            #Se le llama INSTANCIA a todo objeto que derive de algun otro objeto
                 #La instancia actual es la instancia en la que el codigo se ests ejeuctando actualmente
            
mi_cuenta = CuentaBancaria('123-456-789', 'Octavio Novelo', 1000)

mi_cuenta.generar_balance()
mi_cuenta.depositar(1000)

