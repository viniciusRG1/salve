#esse programa vai ler 6 números pares e mostralos de trás pra frente
A = [0, 0, 0, 0, 0, 0] #matriz
T = 0 #variavel que vai mostrar a posição sendo alterada na matriz
while T < 6: #contador
      A[T] = int(input('escolha um número par para essa localidade: ')) #vai receber um número para a posição T
      print() #pular linha
      if A[T] % 2 != 0: #caso for número impar
            print('você escreveu um número impar \n escreva um número par por favor')
            print() #pular linha
            A[T] = int(input('escolha um número par para essa localidade: ')) #vai receber um número para a posição T      
            T = T + 1 #avançar o contador
      else:
            T = T + 1 #avançar o contador
T = T - 1 
while T >= 0: #contador ao contrario
      print(f'o número é o: {A[T]}') #informar a posição da matriz e o número que está nesse lugar
      print()
      T = T - 1 #redução de T
