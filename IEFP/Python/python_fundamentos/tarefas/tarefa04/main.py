from class1 import*
from lista import*
import random
import os

os.system('clear' if os.name == 'posix' else 'cls')
 
# Set limit for number of persons
limite = 100
 
# Get user input
nome = input("Nome: ")
idd = int(input("Ano de nascimento: "))  # Cast to integer
nacio = input("Nacionalidade: ")
 
# Create empty list to store persons
pessoas = []
 
# Get user choice
y = int(input("""
1 - Estudante
2 - Professor
3 - Cozinheiro
4 - Programador
5 - Politico
6 - Militar
"""))
 
# Create user object based on choice
if y == 1:
    user = Estudante("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.nomeEsc = input("Nome da escola: ")
elif y == 2:
    user = Professor("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.materia = input("Nome da matéria: ")
elif y == 3:
    user = Cozinheiro("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.nomeRest = input("Nome do restaurante: ")
elif y == 4:
    user = Programador("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.lingua = input("Nome da linguagem: ")
elif y == 5:
    user = Politico("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.part = input("Nome do partido: ")
elif y == 6:
    user = Militar("", "", "", "")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.pat = input("Nome da patente: ")
 
# Add user object to list
pessoas.append(user)
 
# Generate random persons and add to list
index = 1
while index < limite:  # Corrected the loop condition
    y = random.randrange(1, 7)
    if y == 1:
        pessoas.append(Estudante(random.choice(listNomes), random.randrange(2006, 2015), random.choice(listNacio), random.choice(listNomEsc)))
    elif y == 2:
        pessoas.append(Professor(random.choice(listNomes), random.randrange(1960, 2000), random.choice(listNacio), random.choice(listMat)))
    elif y == 3:
        pessoas.append(Cozinheiro(random.choice(listNomes), random.randrange(1960, 2000), random.choice(listNacio), random.choice(listNomRest)))
    elif y == 4:
        pessoas.append(Programador(random.choice(listNomes), random.randrange(1960, 2000), random.choice(listNacio), random.choice(listLing)))
    elif y == 5:
        pessoas.append(Politico(random.choice(listNomes), random.randrange(1960, 2000), random.choice(listNacio), random.choice(listPartidos)))
    elif y == 6:
        pessoas.append(Militar(random.choice(listNomes), random.randrange(1960, 2000), random.choice(listNacio), random.choice(listPatentesMilitares)))
    index += 1
 
# Print details of each person
for obj in pessoas:
    print("=============================")
    if isinstance(obj, Estudante):
        print("Profissão: Estudante")
        print(f"Nome da Escola: {obj.nomeEsc}")

    elif isinstance(obj, Professor):
        print("Profissão: Professor")
        print(f"Matéria: {obj.materia}")
        
    elif isinstance(obj, Cozinheiro):
        print("Profissão: Cozinheiro")
        print(f"Restaurante: {obj.nomeRest}")
        
    elif isinstance(obj, Programador):
        print("Profissão: Programador")
        print(f"Partido: {obj.lingua}")
        
    elif isinstance(obj, Politico):
        print("Profissão: Politico")
        print(f"Linguagem: {obj.part}")
        
    elif isinstance(obj, Militar):
        print("Profissão: Militar")
        print(f"Patente: {obj.pat}")
        
    obj.imprim_nome()
    obj.imprim_idd()
    obj.imprim_nacio()
 