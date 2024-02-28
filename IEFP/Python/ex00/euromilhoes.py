import random

estrelas = [None , None]
numeros = [None, None, None, None, None]

i = 0
rnd = 0

entrada = input("digite dois numeros entre 1 : 12 e cinco entre 0 : 50: ")
num = [int (x) for x in entrada.split()]

estrelas[0] = num[0] if num[0] > 0 and num[0] <= 12 else None
estrelas[1] = num[1] if num[1] > 0 and num[1] <= 12 else None

numeros[0] = num[2] if num[2] > 0 and num[2] <= 50 else None
numeros[1] = num[3] if num[3] > 0 and num[3] <= 50 else None
numeros[2] = num[4] if num[4] > 0 and num[4] <= 50 else None
numeros[3] = num[5] if num[5] > 0 and num[5] <= 50 else None
numeros[4] = num[6] if num[6] > 0 and num[6] <= 50 else None

print(estrelas , numeros)

while (True):
    rnd = random.randrange(1,13)
    i += 1
    if (rnd == estrelas[0]):
        while (True):
            rnd = random.randrange(1, 13)
            i += 1
            if (rnd == estrelas[1]):
    
                break
        break

print("nr de tentatvas para achar as es duas estrelas: ", i)
print("probabilidade de acertar as estrelas é 1/144 ou " , 1/144 * 100 , "%")

i = 0

while (True):
    rnd = random.randrange(1, 51)
    i += 1
    if (rnd == numeros[0]):
        while (True):
            rnd = random.randrange(1,  51)
            i += 1
            if (rnd == numeros[1]):
                while (True):
                    rnd = random.randrange(1,  51)
                    i += 1
                    if (rnd == numeros[2]):
                        while (True):
                            rnd = random.randrange(1,  51)
                            i += 1
                            if (rnd == numeros[3]):
                                while (True):
                                    rnd = random.randrange(1,  51)
                                    i += 1
                                    if (rnd == numeros[4]):
                                        break
                                break
                        break
                break
        break

print("nr de tentatvas para achar as es cinco numeros: ", i)
print("probabilidade de acertar os numeros é 1/312500000 ou " , 1/312500000 * 100 , "%")
