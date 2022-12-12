module Main (main) where
import System.IO(stdout, hSetBuffering, BufferMode(NoBuffering), Database.HDBC, Database.HDBC.PostgreSQL, System.IO)

main = IO()
main = do 

opc::IO()
opc = do
  putStrLn "=============================="
  putStrLn "Banco Vinicius Resende Garcia"
  putStrLn "=============================="
  putStrLn "Opções:"
  putStrLn "1. Saldo"
  putStrLn "2. Extrato"
  putStrLn "3. Depósito"
  putStrLn "4. Saque"
  putStrLn "5. Fim "
  putStrLn "Escolha uma opção:"

f op = do case op of 
  1 -> imprimeSaldo  
    op <- readLn 
    opc f op
  2 -> imprimeExtrato 
    op <- readLn
    opc f op
  3 -> putStrLn "valor para depositar na conta"  
    valor <- readLn 
    deposito transfInt(valor)
    putStrLn "valor guardado"
    op <- readLn
    opc f op
  4 -> putStrLn "valor para retirar da conta" 
    valor <- readLn 
    saque transfInt(valor)
    putStrLn "valor retirado"
    op <- readLn
    opc f op
  5 -> "obrigado por utilizar nosso banco"
  _ -> "opção invalida, o programa será finalizado" opc f op

imprimeExtrato::IO()
imprime = do
  arq <- readFile "extrato.txt" 
  extrato <- hGetContents arq
  putStrLn extrato
  hClose arq

imprimeSaldo::IO()
imprime = do
  arq <- readFile "saldo.txt"
  saldo <- read arq
  putStrLn saldo
  hClose arq

deposito::Float dinheiro =>dinheiro ->IO()
deposito dinheiro = do
  arq <- readFile "saldo.txt" 
  saldo <- read arq
  saldo <- saldo + dinheiro
  arq <- appendFile "saldo.txt"
  putStrLn "novo valor atualizado"

saque::Float dinheiro=>dinheiro ->IO()
saque dinheiro = do
  arq <- readFile "saldo.txt"
  saldo <- read arq
  saldo <- saldo - dinheiro
  arq <- appendFile  "saldo.txt"
  putStrLn "novo valor atualizado"




  
            

    
    

    
    
   

