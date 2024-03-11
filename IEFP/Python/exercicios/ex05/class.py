class Carro:
    def __init__(self, marca, modelo):
        self.marca = marca
        self.modelo = modelo

    def imprimirDados(self):
        print(f"a marca é {self.marca} e o modelo é {self.modelo}")

carroA = Carro("Opel" , "Corsa")
carroA.imprimirDados()
