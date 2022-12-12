module Main (main) where

import System.IO(stdout, hSetBuffering, BufferMode(NoBuffering))

opc::(Int op) => op -> String
opc op =
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

  op <- getInt

  case op of
    1 -> imprimeSaldo  opc op
    2 -> imprimeExtrato opc op
    3 -> putStrLn "valor para depositar na conta"  
      valor <- getLine 
      deposito transfInt(valor)
      putStrLn "valor guardado"
      opc op
    4 -> putStrLn "valor para retirar da conta" 
      valor <- getLine 
      saque transfInt(valor)
      putStrLn "valor retirado"
      opc op
    5 -> "obrigado por utilizar nosso banco" 
    _ -> "opção invalida, o programa será finalizado" op

transfInt:: (String valor)->[Int]
transfInt valor = map read (words  valor)

imprimeExtrato:: IO()
imprime = do
  arq <- openFile "extrato.txt" ReadMode
  extrato <- hGetContents arq
  putStrLn extrato
  hClose arq

imprimeSaldo:: IO()
imprime = do
  arq <- openFile "saldo.txt" ReadMode
  saldo <- hGetContents arq
  putStrLn saldo
  hClose arq

deposito::(Int dinheiro)=>dinheiro -> IO
deposito dinheiro = 
  arq <- openFile "saldo.txt" ReadMode
  saldo <- hGetContents arq
  saldo = saldo + dinheiro
  arq <- openFile "saldo.txt" AppendMode
  putStrLn "novo valor atualizado"
  hPutStr arq saldo
  hFlush arq
  hClose arq

saque::(Int dinheiro)=>dinheiro -> IO
saque dinheiro = 
  arq <- openFile "saldo.txt" ReadMode
  saldo <- hGetContents arq
  saldo = saldo - dinheiro
  arq <- openFile "saldo.txt" AppendMode
  putStrLn "novo valor atualizado"
  hPutStr arq saldo
  hFlush arq
  hClose arq

main = IO()
main = do 

int op = 1
opc op




  
            

    
    

    
    
   

