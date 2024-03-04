

def ft_media(notas , nrMedia):
    media = 0
    for i in range(0 , nrMedia):
        media += notas[i]
    media /= nrMedia

    return media

notas = []
i = 0

entrada = input("digite as suas medias entre 1 : 20: ") # 10 20 15
num = [int (x) for x in entrada.split()] # 10 | 20 | 15

while (i < len(num)):
    print(i)
    if num[i] >= 0 and num[i] <= 20: 
        notas.append(num[i]) 
    else:
        notas.append(0)
    i += 1
    print(i)

nrMedia = len(notas)

media = ft_media(notas , nrMedia)

print("a sua media é: " , media)