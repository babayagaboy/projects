class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idd = idade
    def calcular(self):
        x = 10 - 5
        return x

aluno1 = Pessoa("ana" , 15)
aluno2 = Pessoa("jonny" , 14)
aluno3 = Pessoa("bruno" , 13)
aluno4 = Pessoa("sandro" , 16)
aluno5 = Pessoa("hugo" , 15)
aluno6 = Pessoa("vasile" , 15)
aluno7 = Pessoa("lepo" , 14)
aluno8 = Pessoa("joane" , 15)
aluno9 = Pessoa("felipa" , 14)

user = Pessoa(" " , " ")

user.nome = input("como se chama? ")
user.idd = input("quantos anos tem? ")

print(f"bem vindo a turma ,{user.nome}")
print(f"cal: {user.calcular()}")
