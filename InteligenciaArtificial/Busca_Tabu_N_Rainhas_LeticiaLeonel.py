#implementação do Trabalho 1 da disciplina de Inteligência Artificial do curso de Engenharia de Computação
#autora: Letícia Moreira Leonel
#--------------------------------------------------------------------------------------------------------

#bib para gerar números aleatórios
import random

#Essa função calcula o número de conflitos em um tabuleiro de xadrez ( as "peças não podem se atacar")
def CalculaConflitos(solucao):
    conflitos = 0 #inicia conflitos com 0, essa váriável conta o número de conflitos
    
    #essa função obtém o tamanho da solução passada como argumento e armazena em uma variável n
    #serve para iterar sobre as posições da solução
    n = len(solucao)
    # aqui vai iterando sobre as posições da solução começando do índice 0 até n-1
    for i in range(n):
        #aqui garante que não vai comparar a mesma posição duas vezes
        for j in range(i + 1, n):
            #aqui verifica se há um conflito entre duas peças na solução
            #verifica se as peças estão na mesma coluna ou verifica se as peças estão na mesma diagonal
            if solucao[i] == solucao[j] or abs(solucao[i] - solucao[j]) == abs(i - j):
                #compara as diferenças entre suas posições nas colunas e nas linhas e verifica
                #se essas diferenças têm o mesmo valor absoluto
                conflitos += 1 #se encontrar um conflito, incrementa 
    return conflitos


#gera vizinho para a solução anterior após trocar as posições
def GeraVizinho(solucao):
    #pega o tamanho do tabuleiro
    n = len(solucao)
    #cria uma cópia da solução e converte ela em uma lista e armazenada na variável vizinho
    # para solução original não ser modificada diretamente
    vizinho = list(solucao)
    #gera dois números inteiros aleatórios e armazenados nas variáveis para representar
    #as posições na solução que são trocadas
    i, j = random.sample(range(n), 2)
    
    #troca das posições i e j no vizinho
    vizinho[i], vizinho[j] = vizinho[j], vizinho[i]
    return vizinho

#função tabu que recebe n = numero de rainhas 
def Tabu(n):
    #cria uma lista inicialmente presumindo uma solução inicial onde cada rainha é colocada em uma coluna diferente
    
    melhor_solucao = list(range(n))
    #embaralha a lista aleatoriamente para criar uma solução inicial
    random.shuffle(melhor_solucao)
    #calcula o número de conflitos na solução inicial e armazena como melhor conflito
    melhor_conflito = CalculaConflitos(melhor_solucao)
    #lista vazia que serve para pegar soluções que são soluções que não devem ser consideradas novamente nas outras iterações
    tabu_lista = []
    #define um limite máximo de iterações
    max_iteracoes = 1000
    #inicializa com 0
    iteracoes = 0
   
    #while que continuará até que o número de conflitos seja igual a zero ou até o número máximo de iterações 
    while melhor_conflito > 0 and iteracoes < max_iteracoes:
        #gera uma solução vizinha com a solução atual
        vizinho = GeraVizinho(melhor_solucao)
        #calcula os conflitos e armazena
        vizinho_conflito = CalculaConflitos(vizinho)

        #testa se a solução vizinha é melhor do que a solução atual ou se é a primeira iteração
        if vizinho_conflito < melhor_conflito or iteracoes == 0:
            #se verdadeiro a solução vizinha é aceita como a nova melhor solução
            melhor_solucao = vizinho  #atualiza como melhor solução
            melhor_conflito = vizinho_conflito #atualiza os conflitos

        #solução vizinha é colocada na lista tabu para evitar que soluções parecidas
        tabu_lista.append(vizinho)
        #apenas verifica se a lista tabu passou da metade do tamanho do problema n
        if len(tabu_lista) > n // 2:
            #se sim a solução mais antiga na lista é removida
            tabu_lista.pop(0)
        #incrementa para verificar quantas iterações teve
        iteracoes += 1

    return melhor_solucao, melhor_conflito, iteracoes

#mostra o tabuleiro para 'Q' representa uma rainha posicionada e '.' representa uma posição vazia
def MostraTabuleiro(solucao):
    #para determinar o tamanho do tabuleiro
    n = len(solucao)
    for i in range(n):
        #para cada linha do tabuleiro cria uma lista row que representa a linha atual
        row = ['Q' if j == solucao[i] else '.' for j in range(n)]
        print(' '.join(row))

#main
if __name__ == "__main__":
    #entrada do n
    n = int(input("Digite o valor de n: "))
    #chama a função tabu e armazena os valores nas variáveis
    melhor_solucao, melhor_conflito, iteracoes = Tabu(n)
    #mostra a melhor solução
    print("\nMelhor solução encontrada:", melhor_solucao)
    #chama a função para mostrar o tabuleiro com a melhor solução
    MostraTabuleiro(melhor_solucao)
    #mostra quantidade de conflitos
    print("\nQuantidade de conflitos:", melhor_conflito)
    #mostra a quantidade de iterações
    print("Quantidade de iterações:", iteracoes)
