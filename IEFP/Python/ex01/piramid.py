#     .   
#    ...  
#   .....
#  .......
# .........

altura = int(input("escreva a altura da piramid: "))

espaco = altura - 1
for j in range(1, 2 * altura ,2):
    print(' ' * espaco , '.' * j)
    espaco -= 1