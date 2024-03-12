import os

os.system('clear' if os.name == 'posix' else 'cls')  #da clear

class Pessoa:
    def __init__(self, nome, dataNasci, nacional):
        self.nome = nome
        self.idd = dataNasci
        self.nacio = nacional
    def key_nome(self):
            return self.nome.upper()
    def calAnos(self):
        x = 2024 - self.idd
        return x
    def imprim_nome(self):
        print(f"Nome: {self.nome}")
    def imprim_idd(self):
        print(f"Idd: {self.calAnos()}")
    def imprim_nacio(self):
        print(f"Nac: {self.nacio}")

user = Pessoa(" " , " " , " ")

user.nome = input("como se chama? ")
user.idd = int(input("em que ano nasceu? "))
user.nacio = input("qual a sua nacionalidade? ")

turma1 = [
    Pessoa("emma" , 2004 , "Russa"),
    Pessoa("sandro" , 2003 , "Portugues"),
    Pessoa("vasile" , 2002 , "Romeno"),
    Pessoa("lepo" , 2001 , "Czheco"),
    Pessoa("joane" , 2000 , "Francesa")
]

turma1.append(user)

turma1.sort(key = Pessoa.key_nome)

turma1.sort(key = lambda self: self.nome)

i = 1

for obj in turma1:
    print("=============================")
    print(f"N: {i}")
    obj.imprim_nome()
    obj.imprim_idd()
    obj.imprim_nacio()
    print("")
    i += 1

