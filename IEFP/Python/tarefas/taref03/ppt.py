import random

def pedPapTesou(ppt):
    rnd = random.randrange(1,4)
    
    if rnd == 1: #pedra
        if ppt == 1: # pedra
            print("empatou o computador escolheu pedra")
        if ppt == 2: # papel
            print("ganhou o computador escolheu pedra")
        if ppt == 3: # tesoura
            print("perdeu o computador escolheu pedra")

    if rnd == 2: # papel
        if ppt == 1: # pedra
            print("perdeu o computador escolheu papel")
        if ppt == 2: # papel
            print("empatou o computador escolheu papel")
        if ppt == 3: # tesoura
            print("ganhou o computador escolheu papel")

    if rnd == 3: # tesoura
        if ppt == 1: # pedra
            print("ganhou o computador escolheu tesoura")
        if ppt == 2: # papel
            print("perdeu o computador escolheu tesoura")
        if ppt == 3: # tesoura
            print("empatou o computador escolheu tesoura")