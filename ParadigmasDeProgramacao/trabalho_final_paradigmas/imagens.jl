using Images

function suavizar_imagem(input_file::AbstractString, output_file::AbstractString)
    # Ler a imagem de entrada
    img = load(input_file)

    # Criar uma matriz vazia para a imagem suavizada
    suavizada = similar(img)

    # Obter as dimensões da imagem
    width, height = size(img)

    # Peso do pixel central
    central_weight = 0.4

    # Pesos dos pixels vizinhos
    side_weight = 0.1
    corner_weight = 0.05

    # Aplicar o filtro de suavização
    for y in 2:(height-1)
        for x in 2:(width-1)
            suavizada[x, y] = (
                corner_weight * img[x-1, y-1] + side_weight * img[x, y-1] + corner_weight * img[x+1, y-1] +
                side_weight * img[x-1, y]   + central_weight * img[x, y]   + side_weight * img[x+1, y]   +
                corner_weight * img[x-1, y+1] + side_weight * img[x, y+1] + corner_weight * img[x+1, y+1]
            )
        end
    end

    # Salvar a imagem suavizada
    save(output_file, suavizada)
end

# Caminho para a imagem de entrada e de saída
input_path = "G:\\Meu Drive\\2023\\Faculdade\\ParadigmasDeProgramacao\\trabalho_final_paradigmas\\mar.jpg"
output_path = "G:\\Meu Drive\\2023\\Faculdade\\ParadigmasDeProgramacao\\trabalho_final_paradigmas\\saida.png"

# Chamar a função para suavizar a imagem
suavizar_imagem(input_path, output_path)
