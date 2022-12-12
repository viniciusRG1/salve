
def criaMatriz(nLinha, nColuna, valor):
      matriz = []
      for num in range(nLinhas):
            linha = []
            for nume in range(nColunas):
                  linha.append(random.randint(0,99))
            matriz.append(linha)
      return matriz
            
nColunas = 20
nLinhas = 20
import random
valor = 0
MaiorValorFinal = 0
tabela20x20 = criaMatriz(nLinhas, nColunas, valor)
for num in range(16):
      for nume in range(16):
            Valor = tabela20x20[num][nume]*tabela20x20[num][nume+1]*tabela20x20[num][nume+2]*tabela20x20[num][nume+3]
            if Valor > MaiorValorFinal:
                  MaiorValorFinal = Valor
            Valor = tabela20x20[num][nume]*tabela20x20[num+1][nume+1]*tabela20x20[num+2][nume+2]*tabela20x20[num+3][nume+3]       
            if Valor > MaiorValorFinal:
                  MaiorValorFinal = Valor
            Valor = tabela20x20[num][nume]*tabela20x20[num+1][nume+1]*tabela20x20[num+2][nume+2]*tabela20x20[num+3][nume]
            if Valor > MaiorValorFinal:
                  MaiorValorFinal = Valor
print(MaiorValorFinal)
