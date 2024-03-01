import random

class Color:
    RED = '\033[91m'
    GREEN = '\033[92m'
    BLUE = '\033[94m'
    END = '\033[0m'

estrelas = [None , None]
numeros = [None, None, None, None, None]

euroEstrelas = [None , None]
euroNumeros = [None , None , None , None , None]

i = 0
rnd = 0
semanas = 0
pontos = 0
jogosGanhos = 0

def euromilhoes():
    euroEstrelas[0] = random.randrange(1 , 13)
    euroEstrelas[1] = random.randrange(1 , 13)

    euroNumeros[0] = random.randrange(1 , 51)
    euroNumeros[1] = random.randrange(1 , 51)
    euroNumeros[2] = random.randrange(1 , 51)
    euroNumeros[3] = random.randrange(1 , 51)
    euroNumeros[4] = random.randrange(1 , 51)

def entradaEuromilhoes():
    entrada = input("digite dois numeros entre 1 : 12: ") 
    num = [int (x) for x in entrada.split()]

    estrelas[0] = num[0] if num[0] > 0 and num[0] <= 12 else None # recebe os dois valores das estrelas
    estrelas[1] = num[1] if num[1] > 0 and num[1] <= 12 else None

    entrada = input("digite dois numeros entre 1 : 50: ")
    num = [int (x) for x in entrada.split()]

    numeros[0] = num[0] if num[0] > 0 and num[0] <= 50 else None # recebe os cinco valores dos numeros
    numeros[1] = num[1] if num[1] > 0 and num[1] <= 50 else None
    numeros[2] = num[2] if num[2] > 0 and num[2] <= 50 else None
    numeros[3] = num[3] if num[3] > 0 and num[3] <= 50 else None
    numeros[4] = num[4] if num[4] > 0 and num[4] <= 50 else None

entradaEuromilhoes()

estrelas.sort()
numeros.sort()

print()

while (semanas < 1000):

    pontos = 0

    euromilhoes() # gera o euro milhoes

    euroEstrelas.sort()
    euroNumeros.sort()

    for i in range(0 , 2):
        if (estrelas[i] == euroEstrelas[i]):
            pontos += 10
    for j in range(0 , 5):
        if (numeros[j] == euroNumeros[j]):
            pontos += 1                         #verifica se acertou algum numero ou estrela
    if (pontos == 21):
        print(Color.GREEN + "ganhou o quinto premio de 100 euros, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str , euroNumeros)) + Color.END)
        jogosGanhos += 1
    elif (pontos == 22):
        print(Color.GREEN + "ganhou o quarto premio de 1,000 euros, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str , euroNumeros)) + Color.END)
        jogosGanhos += 1
    elif (pontos == 23):
        print(Color.GREEN + "ganhou o terceiro premio de 10,000 euros, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str , euroNumeros)) + Color.END)
        jogosGanhos += 1
    elif (pontos == 24):
        print(Color.GREEN + "ganhou o segundo premio de 100,000 euros, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str , euroNumeros)) + Color.END)
        jogosGanhos += 1
    elif (pontos == 25):
        print(Color.BLUE + "ganhou o euromilhoes premio de 10,000,000 euros, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str , euroNumeros)) + Color.END)
        jogosGanhos += 1
    else:
        print(Color.RED + "perdeu, o euromilhoes era: " + ', '.join(map(str, euroEstrelas)) + " | " + ', '.join(map(str, euroNumeros)) + Color.END)
    semanas += 1


if (jogosGanhos != 0):
    print("\nGanhou " , jogosGanhos , " vezes")
else:
    print("\nnao ganhou nenhuma vez")
print(semanas, " tentativas")