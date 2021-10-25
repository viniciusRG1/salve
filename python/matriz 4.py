Z =[0, 0, 0, 0, 0, 0]
V = 0
N = 0
MAIOR = 0
MENOR = 0
G = 0
while V < 6:
            Z[V] = int(input('escolha um número para colocar na lista: '))
            print()
            V = V + 1

while N < 6:
            print(N)
            print()
            N = N + 1
MAIOR = Z[1]
MENOR = Z[1]
while G < 6:
                  if MAIOR < Z[G]:
                        MAIOR = Z[G]
                  if MENOR > Z[G]:
                        MENOR = Z[G]
                  G = G + 1

print('o maior número da lista é: ', MAIOR)
print()
print('o menor número da lista é: ', MENOR)

            
