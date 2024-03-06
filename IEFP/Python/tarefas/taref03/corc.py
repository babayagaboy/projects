import random

def caraoucoroa(lado):
    rnd = random.randrange(0 , 10001)

    if (rnd <= 5000 and lado == 1):
        print("ganhou")
    elif (rnd > 5000 and lado == 2):
        print("ganhou")
    elif (rnd == 10001):
        print("decubriu um easter egg ; kys")
    else:
        print("perdeu")