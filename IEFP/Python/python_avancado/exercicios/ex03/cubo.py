import pygame
from pygame.locals import *
import sys
import math

# Inicializar o Pygame
pygame.init()

# Configurações da tela
largura = 800
altura = 600
tela = pygame.display.set_mode((largura, altura))
pygame.display.set_caption("Cubo Giratório")

# Cores
PRETO = (0, 0, 0)
CINZA = (128, 128, 128)

# Definição dos vértices do cubo
vertices = [
    [-50, -50, -50],
    [50, -50, -50],
    [50, 50, -50],
    [-50, 50, -50],
    [-50, -50, 50],
    [50, -50, 50],
    [50, 50, 50],
    [-50, 50, 50]
]

# Definição das faces do cubo
faces = [
    [0, 1, 2, 3],
    [3, 2, 6, 7],
    [7, 6, 5, 4],
    [4, 5, 1, 0],
    [0, 3, 7, 4],
    [1, 2, 6, 5]
]

# Função para rotacionar um ponto 3D em torno do eixo Y
def rotacionar_ponto(ponto, angulo):
    x, y, z = ponto
    novo_x = x * math.cos(angulo) - z * math.sin(angulo)
    novo_z = x * math.sin(angulo) + z * math.cos(angulo)
    return novo_x, y, novo_z

# Função para projetar um ponto 3D em 2D (perspectiva simples)
def projetar_ponto(ponto):
    distancia = 1000
    x, y, z = ponto
    novo_x = x * distancia / (z + distancia) + largura / 2
    novo_y = y * distancia / (z + distancia) + altura / 2
    return novo_x, novo_y

# Loop principal
angulo = 0
while True:
    # Limpar a tela
    tela.fill(PRETO)

    # Processar eventos
    for evento in pygame.event.get():
        if evento.type == QUIT:
            pygame.quit()
            sys.exit()

    # Rotacionar e projetar os vértices do cubo
    vertices_rotacionados = []
    for vertice in vertices:
        vertice_rotacionado = rotacionar_ponto(vertice, angulo)
        vertice_projetado = projetar_ponto(vertice_rotacionado)
        vertices_rotacionados.append(vertice_projetado)

    # Desenhar as faces do cubo
    for face in faces:
        pontos_face = [vertices_rotacionados[i] for i in face]
        pygame.draw.polygon(tela, CINZA, pontos_face, 1)

    # Atualizar a tela
    pygame.display.flip()

    # Incrementar o ângulo de rotação
    angulo += 0.01
