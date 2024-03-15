class Pessoa:
    def __init__(self, nome, dataNasci, nacional):
        self.nome = nome
        self.idd = dataNasci
        self.nacio = nacional
    def calAnos(self):
        x = 2024 - self.idd
        return x
    def imprim_nome(self):
        print(f"Nom: {self.nome}")
    def imprim_idd(self):
        print(f"Idd: {self.calAnos()}")
    def imprim_nacio(self):
        print(f"Nac: {self.nacio}")

class Estudante(Pessoa):
    def __init__(self, nome, dataNasci, nacional, nomeEscola):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.nomeEsc = nomeEscola
    
class Professor(Pessoa):
    def __init__(self, nome, dataNasci, nacional, materia):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.materia = materia

class Cozinheiro(Pessoa):
    def __init__(self, nome, dataNasci, nacional, nomeRestaurant):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.nomeRest = nomeRestaurant

class Programador(Pessoa):
    def __init__(self, nome, dataNasci, nacional, lingua):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.lingua = lingua

class Politico(Pessoa):
    def __init__(self, nome, dataNasci, nacional, partido):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.part = partido

class Militar(Pessoa):
    def __init__(self, nome, dataNasci, nacional, patente):
        Pessoa.__init__(self, nome, dataNasci, nacional)
        self.pat = patente