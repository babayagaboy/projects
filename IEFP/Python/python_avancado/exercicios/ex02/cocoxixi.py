from PIL import Image

# Carregar a imagem
imagem = Image.open("/Users/hugoguterres/Documents/projects/IEFP/Python/Python Avancado/exercicios/ex02/monalisa.jpeg")

# Definir os caracteres ASCII usados para representar os diferentes tons de cinza
caracteres_ascii = '@%#*+=-:. '

# Adicionar mais caracteres ASCII para aumentar a variedade de tons de cinza
caracteres_ascii += '`^",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$'

# Redimensionar a imagem mantendo a proporção
novo_largura = 100
largura_orig, altura_orig = imagem.size
nova_altura = int(altura_orig * novo_largura / largura_orig * 0.55)  # Manter a proporção
imagem = imagem.resize((novo_largura, nova_altura))

# Converter pixels para caracteres ASCII
pixels = imagem.getdata()
ascii_art = ''
for pixel in pixels:
    # Converter o pixel para escala de cinza usando a média dos valores RGB
    escala_cinza = int((pixel[0] + pixel[1] + pixel[2]) / 3 / 256 * len(caracteres_ascii))
    ascii_art += caracteres_ascii[escala_cinza]

    # Adicionar uma quebra de linha a cada linha da imagem
    if len(ascii_art) % novo_largura == 0:
        ascii_art += '\n'

# Mostrar o resultado
print(ascii_art)

# Salvar o resultado em um arquivo de texto
with open('ascii_art.txt', 'w') as arquivo:
    arquivo.write(ascii_art)
