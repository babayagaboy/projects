import random

def parImpar(num , escolha):
    continuar = True
    rnd = random.randrange(1 , 11)

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
            