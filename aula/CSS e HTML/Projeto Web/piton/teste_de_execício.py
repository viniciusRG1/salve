def criaMatriz(nLinhas, nColunas):
      matriz = []
      for num in range(nLinhas):
            linha = []
            for nume in range(nColunas):
                  linha.append(random.randint(0,99))
            matriz.append(linha)
      return matriz

nColuna = 3
nLinha = 3
import random
tabelaB = criaMatriz(nColuna, nLinha)
tabelaA = criaMatriz(nColuna, nLinha)
for num in range(3):
      for nume in range(3):
            tabelaB[num][nume] = (tabelaA[num][nume])*(tabelaA[num][nume])
            print(tabelaB[num][nume])


