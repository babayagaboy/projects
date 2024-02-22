import random

estrelas = [None , None]
numeros = [None, None, None, None, None]

i = 0
rnd = 0

entrada = input("digite dois numeros entre 1 : 12 e cinco entre 0 : 50: ")
num = [int (x) for x in entrada.split()]

estrelas[0] = num[0] if num[0] > 0 and num[0] <= 12 else None
estrelas[1] = num[1] if num[1] > 1 and num[1] <= 12 else None

numeros[0] = num[2] if num[2] > 0 and num[2] <= 50 else None
numeros[1] = num[3] if num[3] > 0 and num[3] <= 50 else None
numeros[2] = num[4] if num[4] > 0 and num[4] <= 50 else None
numeros[3] = num[5] if num[5] > 0 and num[5] <= 50 else None
numeros[4] = num[6] if num[6] > 0 and num[6] <= 50 else None

while (True):
    rnd = random.randrange(1,13)
    i += 1
    if (rnd == estrelas[0]):
        print (i)
        while (True):
            rnd = random.randrange(1, 13)
            i += 1
            if (rnd == estrelas[1]):
                print (i)
                break
        break

print(estrelas , numeros, i)