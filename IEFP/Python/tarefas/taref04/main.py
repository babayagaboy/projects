from class1 import*
from lista import*
import random
import os

os.system('clear' if os.name == 'posix' else 'cls')

limite = 100

nome = input("nome: ")
idd = input("ano de nascimento: ")
nacio = input("nacionalidade: ")

pessoas = []

y = int(input("""

1 - Estudante
2 - Professor
3 - Cozinheiro
4 - Programador
5 - Politico
6 - Militar

"""))

if y == 1:
    user = Estudante("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.nomeEsc = input("nome escola: ")
if y == 2:
    user = Professor("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.materia = input("nome materia: ")
if y == 3:
    user = Cozinheiro("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.nomeRest = input("nome restaurant: ")
if y == 4:
    user = Programador("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.lingua = input("nome lingua: ")
if y == 5:
    user = Politico("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.part = input("nome partido: ")
if y == 6:
    user = Militar("","","","")
    user.nome = nome
    user.idd = idd
    user.nacio = nacio
    user.pat = input("nome patente: ")

pessoas.append(user)

index = 1
while (index <= limite):

    y = random.randrange(1,7)

    if y == 1:
        pessoas[index] = Estudante(random.choice(listNomes),random.randrange(2006 , 2015),random.choice(listNacio),random.choice(listNomEsc))

    if y == 2:
        pessoas[index] = Professor(random.choice(listNomes),random.randrange(1960 , 2000),random.choice(listNacio),random.choice(listMat))

    if y == 3:
        pessoas[index] = Cozinheiro(random.choice(listNomes),random.randrange(1960 , 2000),random.choice(listNacio),random.choice(listNomRest))

    if y == 4:
        pessoas[index] = Programador(random.choice(listNomes),random.randrange(1960 , 2000),random.choice(listNacio),random.choice(listLing))

    if y == 5:
        pessoas[index] = Politico(random.choice(listNomes),random.randrange(1960 , 2000),random.choice(listNacio),random.choice(listPartidos))

    if y == 6:
        pessoas[index] = Militar(random.choice(listNomes),random.randrange(1960 , 2000),random.choice(listNacio),random.choice(listPatentesMilitares))

    index += 1

    pessoas.sort(key = lambda x : x.nome)

for obj in pessoas:
    print("=============================")
    obj.imprim_nome()
    obj.imprim_idd()
    obj.imprim_nacio()
