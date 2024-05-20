listaNum = range(1, 21)
listaNum2 = list(range(1,12))

impar = list(filter(lambda x : x % 2 != 0, listaNum))
par = list(filter(lambda x : x % 2 == 0, listaNum))

print(list(listaNum))
print(list(map(lambda x : x == 2 , range(1, 5))))
print(list(filter(lambda x : x == 2 , range(1, 5))))
print(impar)
print(par)
print(listaNum2)
print(listaNum)


print(f"\naaaa\n{list(filter(lambda x : x % 2 == 0, listaNum))}")