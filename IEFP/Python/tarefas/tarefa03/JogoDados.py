'''
IEFP-Sintra-Python
Formador: Carlos Álvares
Exercício: Jogo Dados
'''
import random

#Funcao de boas vindas
def jogoDados():
    print("Jogo dos dados. O jogador vai jogar contra o PC")
    dadosPC = random.randrange(1,7)
    dadosUtilizador = random.randrange(1,7)
    print("O valor dos dados do jogador foi ", dadosUtilizador)
    print("O valor dos dados do PC foi ", dadosPC)
    
    if (dadosUtilizador == dadosPC):
        print("Foi um bem empate")
    elif (dadosUtilizador>dadosPC):
        print("Ganhou!")
    else:
        print("Perdeu!")
