import random

def caraoucoroa(lado):
    rnd = random.randrange(0 , 2)

    if (rnd == 1 and lado == 1): # verifica se as duas escolhas foram iguais se nao perde
        print("ganhou")
    elif (rnd == 2 and lado == 2):
        print("ganhou")
    else:
        print("perdeu")