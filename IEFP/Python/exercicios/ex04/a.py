import random

def greatings():
    msgBV = ["ola" , "boa tarde" , "bom dia" , "boa noite"]
    i = random.randrange(0 , len(msgBV))
    print(msgBV[i])

def parImpar(num , escolha):
    continuar = True
    rnd = random.randrange(1 , 11)

    while(continuar):
        if ((rnd + num) % 2 == 0 and escolha == "par"):
            print("acertou, o numero que o computador escolheu foi " , rnd)
        elif ((rnd + num) % 2 != 0 and escolha == "impar"):
            print("acertou, o numero que o computador escolheu foi " , rnd)
        elif ((rnd + num) % 2 != 0 and escolha == "par"):
            print("errou, o numero que o computador escolheu foi " , rnd)
        elif ((rnd + num) % 2 != 0 and escolha == "par"):
            print("errou, o numero que o computador escolheu foi " , rnd)
        else:
            print("valor invalido")

        j = input("invalido deseja continuar? (s/n)").lower()
        
        if j == "n":
            continuar = False
        elif j == "s":
            continuar = True
        else:
            print("erro")
            continuar == False
            