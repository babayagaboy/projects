import os

os.system('clear' if os.name == 'posix' else 'cls')  #da clear

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

# class Estudante(Pessoa):
#     def __init__(self, nome, dataNasci, nacional, nomeEscol):
#         Pessoa.__init__(self, nome, dataNasci, nacional)
#         self.nome_escola = nomeEscol
#     def imprim_escol(self):
#         print(f"esc: {self.nome_escola}")

estud = input("é estudante? (s/n): ").lower()

# if estud == "s":
#     user = Estudante(" ", " ", " ", " ")
# else:
user = Pessoa(" " , " " , " ")

user.nome = input("como se chama? ")
user.idd = int(input("em que ano nasceu? "))
user.nacio = input("qual a sua nacionalidade? ")

if estud == "s":
    user.nome_escola = input("nome da escola? ")

pessoas = [
    Pessoa("emma" , 2004 , "Russa", "g"),
    Pessoa("sandro" , 2003 , "Portugues", "g"),
    Pessoa("vasile" , 2002 , "Romeno", "g"),
    Pessoa("lepo" , 2001 , "Czheco", "g"),
    Pessoa("joane" , 2000 , "Francesa", "g")
]

turma1 = []

if isinstance(user , Pessoa):
   pessoas.append(user)
else:
    turma1.append(user)

pessoas.sort(key = lambda self: self.nome)

i = 1

# if turma1 == True:
#     for x in turma1:
#         print("=============================")
#         print(f"N: {i}")
#         x.imprim_nome()
#         x.imprim_idd()
#         x.imprim_nacio()
#         x.imprim_escol()
#         print("")
#         i += 1
#     print("-----------------------------")

for obj in pessoas:
    print("=============================")
    print(f"N: {i}")
    obj.imprim_nome()
    obj.imprim_idd()
    obj.imprim_nacio()
    print("")
    i += 1