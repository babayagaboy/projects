def calcSec(anoAtual , anoDado):
    return ((anoAtual / 100) - (anoDado / 100))

def calcDec(anoAtual , anoDado):
    return ((anoAtual / 10) - (anoDado / 10))

def calcAno(anoAtual , anoDado):
    return (anoAtual - anoDado)

def calcMes(anoAtual , anoDado):
    return ((anoAtual * 12) - (anoDado * 12))

def calcDia(anoAtual , anoDado):
    return ((anoAtual * 365) - (anoDado * 365))

def Mesm(mesAtual , mesDado):
    return (mesAtual - mesDado)

anoAtual = 2024
mesAtual = 3

anoDado = int(input("digite um ano para calcular...: "))
mesDado = int(input("digite um mes: "))

opcao = int(input("""
1 - calcular quantos seculos passaram / faltam
2 - calcular quantos decadas passaram / faltam
3 - calcular quantos anos passaram / faltam
4 - calcular quantos meses passaram / faltam
5 - calcular quantos dias passaram / faltam
"""))
if (opcao == 2):
    if (calcSec(anoAtual , anoDado) > 0):
        print("passaram " , calcSec(anoAtual , anoDado) , " decadas e " , Mesm(mesAtual , mesDado) , " meses")
    else:
        print("faltam " , -1 * calcSec(anoAtual , anoDado) , " decadas e " , -1 * Mesm(mesAtual , mesDado) , " meses")

elif (opcao == 2):
    if (calcDec(anoAtual , anoDado) > 0):
        print("passaram " , calcDec(anoAtual , anoDado) , " decadas e " , Mesm(mesAtual , mesDado) , " meses")
    else:
        print("faltam " , -1 * calcDec(anoAtual , anoDado) , " decadas e " , -1 * Mesm(mesAtual , mesDado) , " meses")

elif (opcao == 3):
    if (calcAno(anoAtual , anoDado) > 0):
        print("passaram " , calcAno(anoAtual , anoDado) , " anos e " , Mesm(mesAtual , mesDado) , " meses")
    else:
        print("faltam " , -1 * calcAno(anoAtual , anoDado) , " anos e " , -1 * Mesm(mesAtual , mesDado) , " meses")

elif (opcao == 4):
    if (calcMes(anoAtual , anoDado) > 0):
        print("passaram " , calcMes(anoAtual , anoDado) , " meses e " , Mesm(mesAtual , mesDado) , " meses")
    else:
        print("faltam " , -1 * calcMes(anoAtual , anoDado) , " anos e " , -1 * Mesm(mesAtual , mesDado) , " meses")

elif (opcao == 5):
    if (calcDia(anoAtual , anoDado) > 0):
        print("passaram " , calcDia(anoAtual , anoDado) , " dias e " , Mesm(mesAtual , mesDado) , " meses")
    else:
        print("faltam " , -1 * calcDia(anoAtual , anoDado) , " dias e " , -1 * Mesm(mesAtual , mesDado) , " meses")

else:
    print("erro")