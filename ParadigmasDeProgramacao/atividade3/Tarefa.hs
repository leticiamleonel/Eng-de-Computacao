-- Atividade 3
-- Disciplina: Paradigmas de Programação
-- Aluna: Letícia Moreira Leonel
-------------------------------------------------------------------------------
module Tarefa where

data Tarefa = Tarefa { descricao :: String } deriving (Show)
type ListaDeTarefas = [Tarefa]

--Adicionando uma nova tarefa
adicionarTarefa :: ListaDeTarefas -> String -> ListaDeTarefas
adicionarTarefa lista descricaoTarefa = lista ++ [Tarefa descricaoTarefa]

--Removendo uma tarefa
removerTarefa :: ListaDeTarefas -> Int -> ListaDeTarefas
removerTarefa lista indice = take (indice - 1) lista ++ drop indice lista

--Printando as tarefas
exibirListaTarefas :: ListaDeTarefas -> IO ()
exibirListaTarefas lista = do
  putStrLn "--- Lista de Tarefas: ---"
  if null lista
    then putStrLn "Tarefas inexistentes."
    else mapM_ (putStrLn . formatarTarefa) (zip [1..] lista)

--formatando a lista
formatarTarefa :: (Int, Tarefa) -> String
formatarTarefa (indice, tarefa) = show indice ++ ". " ++ descricao tarefa

--Programa Principal
main :: IO ()
main = do
  putStrLn "Bem-vindo a sua lista de Tarefas!"
  exibirMenu []

-- Função para exibir o menu de opções e tratar a entrada do usuário
exibirMenu :: ListaDeTarefas -> IO ()
exibirMenu lista = do
  putStrLn "Selecione a opção desejada:"
  putStrLn "1. Adicionar uma nova tarefa."
  putStrLn "2. Remover uma tarefa."
  putStrLn "3. Exibir a lista de tarefas."
  putStrLn "4. Sair."

  putStr "> "
  comando <- getLine

  case comando of
    "1" -> do
      putStrLn "Digite a tarefa:"
      descricaoTarefa <- getLine
      let novaLista = adicionarTarefa lista descricaoTarefa
      putStrLn "Tarefa adicionada com sucesso!"
      exibirMenu novaLista

    "2" -> do
      putStrLn "Digite o número da tarefa a ser removida:"
      indiceStr <- getLine
      let indice = read indiceStr :: Int
      let novaLista = removerTarefa lista indice
      putStrLn "Tarefa removida com sucesso!"
      exibirMenu novaLista

    "3" -> do
      exibirListaTarefas lista
      exibirMenu lista

    "4" -> putStrLn "Lista de tarefas fechada com sucesso!"

    _ -> do
      putStrLn "Erro!"
      exibirMenu lista

