import os
from poi import*
from corc import*
from ppt import*
from JogoDados import*
from inicio import*

while (True):
    os.system('clear' if os.name == 'posix' else 'cls')  #da clear

    greatings()

    escolha = input("""

    1 - cara ou coroa
    2 - par ou impar                        
    3 - pedra papel tesoura
    4 - dados
                        
    """)

    if escolha == "1":
        print("")
        lado = int(input("1 - cara\n2 - coroa\n"))
        caraoucoroa(lado)
    elif escolha == "2":
        num = int(input("escolha um numero de 1 a 10: "))
        print("")
        j = input("(par/impar) ").lower()
        print("")
        parImpar(num , j)
    elif escolha == "3":
        print("")
        ppt = int(input("1 - pedra\n2 - papel\n3 - tesoura\n"))
        pedPapTesou(ppt)
    elif escolha == "4":
        print("")
        jogoDados()
    else:
        print("erro")

    rpt = input("desja repetir?   (s/n): ").lower

    if rpt == "n":              #mecanismo de rodar o codigo de novo
        break
    