/*int main()
{

    // cout << "Ola CodCad!"; // printf do C++
    int x;
    int num;

    cout << "escreva dois numeros que vc deseja somar" << endl ;

    cin >> x; // � o scanf do C++
    cin >> num;

    x = x*2;

    cout << x+num << endl;

    return 0;
}*/
/*int main ()
{
    double raio;

    cin >> raio;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << raio*raio*3.14159 << endl;
    return 0;
}*/
/*int main (){
    double a ,b;
    cin >> a >> b;
    cout << a/b;
    return 0;
}*/
/*#include <iostream>

using namespace std;
int main (){
    int a, b;
    cin >> a >> b;

    cout << (a+b)/2;

    return 0;
}*/
/*
#include <iostream>

using namespace std;
int main (){

    int x, y;

    cin >> x >> y;
    while (x <= y){
        if(x%2 == 0){
        cout << x << endl;
        }
        x = x + 1;
    }
    cout << "saiu do while" << endl;

return 0;
}
*/
/*
    #include <iostream>

using namespace std;

int main () {

    int x, y = 0;

    while (x < 1000000){
        cin >> x;
        y = y + 1;
    }
    cout << "foi necessario " << y << " dias";
return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main (){

    int N, receptor, lampada_1 = 0, lampada_2 = 0;
    cin >> N;
    for(int tempo = 0; tempo < N; tempo++){
      cin >> receptor;
      if(receptor%2 == 0){
        if(lampada_1 == 0){
            if(lampada_2 == 0){
                lampada_1 = 1;
                lampada_2 = 1;

            }
            if(lampada_2 == 1){
                lampada_1 = 1;
                lampada_2 = 0;
            }
        }
            else if(lampada_1 == 1){
                if(lampada_2 == 0){
                lampada_1 = 0;
                lampada_2 = 1;
                }
                if(lampada_2 == 1){
                lampada_1 = 0;
                lampada_2 = 0;
                }
            }
      }
        else{
            if(lampada_1 == 0){
                lampada_1 = 1;
            }else{
            lampada_1 = 0;
            }
        }
    }
    cout << lampada_1  << endl << lampada_2 << endl;
return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main(){

    int X;
    cin >> X;
    for(int marcador = 1; marcador <= X; marcador++){
        if(X%marcador == 0){
            cout << marcador;
        }
    }

return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main(){

    int N, MaiorG = 0, MaiorF = 0;
    cin >> N;
    int Matriz[N];
    for(int marcador = 0; marcador < N; marcador++){
        cin >> Matriz[marcador];
    }
    for(int marcador = 0; marcador < N; marcador++){
        for(int marcado = 0; marcado < N; marcado++){
            if(Matriz[marcador] == Matriz[marcado]){
                MaiorG++;
            }
        if(MaiorG > MaiorF){
            MaiorF = MaiorG;
            MaiorG = 0;
        }else{
            MaiorG = 0;
    }
    }
    }

    cout << MaiorF;
return 0;
}
*/
//pow(x, y) = x elevado a y ou X^Y
//sqrt(x) = raiz quadrada de x
//flor(x) = arredonda para baixo
//ceil(x) = arredonda para cima


/*
#include <iostream>
#include <cmath> // biblioteca matem�tica

using namespace std;

int main(){
    cout.precision(4);
    cout.setf(ios::fixed);
    int Time;
    cin >> Time;
    double N[Time];
    for(int time = 0; time < Time; time++){
        cin >> N[time];
    }

    for(int time = 0; time < Time; time++){
        cout << sqrt(N[time]) << endl;
    }
return 0;
}
*/

/*
    #include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout.precision(4);
    cout.setf(ios::fixed);

    double x, y;
    cin >> x >> y;

    cout << pow(x, y);

return 0;
}
*/
/*
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int N = 0;
    cin >> N;
    int matriz[N];
    int contador = 0;
    for(int marcador = 0; marcador < N; marcador++){
        cin >> matriz[marcador];
    }
    for(int time = 0; time < N; time++){
        if(matriz[time] == 1){
            if(matriz[time+1] == 0){
                if(matriz[time+2] == 0){
                    contador++;
        }else{
            continue;
        }
        }else{
            continue;
        }
        }else{
            continue;
        }
    }
    cout << contador;
return 0;
}
*/
/*
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int N;
    cin >> N;
    char matriz[N];
    for(int marcador = 0; marcador < N; marcador++){
        cin >> matriz[marcador];
    }
    for(int marcado = 1; marcado < N; marcado++){
        if(matriz[marcado] == 'x'){
            if(matriz[marcado - 1] == 'x'){
                if(matriz[marcado + 1] == 'x'){
                    cout << 3;
                }else{
                    cout << 2;
                }
            }else{
                cout << 1;
            }
        }else{
            cout << 0;
        }
    }


return 0;
}

*/
/*
#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int x, n = 0, p = 0, y = 1;
    cin >> x;
    int matriz[x];
    for(int time = 0; time < x; time++){
        cin >> matriz[time];
    }
    for(int tempo = 0; tempo < x; tempo++){
        if(matriz[tempo] != 0){
            while(y !=0){
                if(matriz[tempo+p] == 0){
                    cout <<  p;
                    y = 0;
                }else if(matriz[tempo-p] == 0){
                    cout << p;
                    y = 0;
                }else{
                    p = p + 1;
                }
            }

            }else{
            cout << 0;
            }
            y = 1;
            p = 1;
        }
return 0;
    }
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

int main (){
int N, soma = 0, magico = 0, p = 0;
cin >> N;
int x[N][N];

for(int time = 0; time < N; time++){
    for(int tempo = 0; tempo < N; tempo++){
        cin >> x[time][tempo];
    }
}
for(int time = 0; time < N; time++){
    for(int tempo = 0; tempo < N; tempo++){
        soma = soma + x[time][tempo];
    }
    if(soma == 15){
    }else{
        cout << "nao e magico";
        break;
    }
soma = 0;
}
for(int time = 0; time < N; time++){
    soma = soma + x[p][p];
    p++;
}
 if(soma == 15){
    }else{
        cout << "nao e magico";
        cout << "1" << endl;
    }
p = 0;
soma = 0;

for(int time = 0; time < N; time++){
    soma = soma + x[time][N - time];
    cout << x[time][N - time];

}
    if(soma == 15){
    }else{
        cout << "nao e magico";
        cout << "2" << endl;
    }
p = 0;
soma = 0;
for(int time = 0; time < N; time++){
    for(int tempo = 0; tempo < N; tempo++){
        soma = soma + x[tempo][time];
    }
    if(soma == 15){
        magico = 1;
    }else{
        cout << "nao e magico";
        cout << "3" << endl;
        break;
    }
soma = 0;
}
while(magico == 1){
    cout << "o quadrado e magico";
    break;
}

return 0;
}

*/

/*
#include <iostream>
 using namespace std;

 int main (){

 char letra;

 cin >> letra;

 if(letra == 'a'){
    cout << "e a letra a";
 }else{
    cout << "nao e letra a";
 }

 return 0;
 }
*/
/*
#include <iostream>

using namespace std;

int main(){

    char escolha;
    cin >> escolha;
    int M, P;
    cin >> M >> P;
    if(escolha == 'M'){
        cout << M*P;
    }else{
        cout << M/P;
    }

return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main (){

    int N, P, Q;
    char C;
    cin >> C >> N >> P >> Q;
    if(C == '+'){
        cout << P+Q << endl;

        if(P+Q > N){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }else{
        cout << P*Q << endl;
        if(P*Q > N){
            cout << "OVERFLOW";
        }else{
            cout << "OK";
        }
    }

return 0;
}
*/

/*
    #include <iostream>

using namespace std;

int main(){

    string nome, S, juntar, vida;

    cin >> nome >> S;

    cout << nome << endl; // nessa situa��o imprimira toda a string

    cout << nome[2] << endl; // vc escolheu a segunda posi��o da palavra

    cout << nome << " " << S <<endl; // juntamos de forma pregui�osa as duas string

    juntar = juntar + nome;
    juntar = juntar + " "; // tb chamado de concatenar
    juntar = juntar + S; // dessa forma seria juntar na ordem q foram associadas

    cout << juntar << endl;

    getline(cin, vida); // serve para escrever toda a frase na string, q n�o seria possivel devido ao enter

    cout << vida;
return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main (){

    int questoes, acertos = 0;
    string respostas, perguntas;

    cin >> questoes >> respostas >> perguntas;

    for(int time = 0; time < questoes; time++){
        if(respostas[time] == perguntas[time]){
            acertos = acertos + 1;
        }
    }
cout << acertos;
return 0;
}
*/

/*
#include <iostream>

using namespace std;

double media(double x, double y, double z){ // fun��o

double media = (x+y+z)/3.0;

return media;
}


int main (){

cout << media(5,6,7) << endl;

return 0;
}

*/

/*
#include <iostream>

using namespace std;
int global = 7;

int incremento(int x){

    global = global + x;

return global;
}


int main () {

    int x;
    cin >> x;
    cout << incremento(x) << endl;

return 0;
}

*/

/*
#include <iostream>

using namespace std;

string title(string F){
    int contador = 0;
    while(F[contador] != '\0'){
        contador++;
    }

    if(F[0] >= 65 && F[0] <= 90){
        for(int tempo = 1; tempo < contador; tempo++){
            if(F[tempo] >= 97 && F[tempo] <= 122){
                continue;
        }else{
              if( F[tempo] >= 65 && F[tempo] <= 90){
                   F[tempo] = F[tempo] + 32;
        }
        }
    }
    }else{
        F[0] = F[0] - 32;
        for(int tempo = 1; tempo < contador; tempo++){
            if(F[tempo] >= 97 && F[tempo] <= 122){
                continue;
        }else{
              if(F[tempo] >= 65 && F[tempo] <= 90){
                  F[tempo] = F[tempo] + 32;
        }
        }
    }

    }
    return F;
}

int main (){

  string F;

  getline(cin, F);

  cout << title(F) << endl;

return 0;
}
*/

/*
#include <iostream>

using namespace std;

bool eh_primo(int x){
	int contador = 0;
	for(int tempo = 2; tempo <= x; tempo++){
        if(x%tempo == 0){
                contador++;
        }
	}if(contador == 1){
        x = true;
	}else{
        x = false;
	}
    return x;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
*/

/*
#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	int total = 0;
	for(int i=0; i < n; i++){
        total = total + v[i];
	}
return total;
}

int main(){

	int n, v[100100];
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}
*/
/*
#include <iostream>

using namespace std;

int x;

int t = 2;

int fimose(int x){
int fimo[x];
    fimo[0] = 1;
    fimo[1] = 1;
for(t = 2; t <= x; t++){
        fimo[t] = fimo[t-1] + fimo[t-2];
        cout << fimo [t] << endl;
}

return 0;

}


int main(){

    cin >> x;

    cout << 0 << endl << 1 << endl;

    fimose(x);

return 0;
}
*/

/*
    #include <iostream>

using namespace std;

int main(){
    int v[4] = {1,5,3,4};
    //bubble sort forma simples de ordena��o existente, usado at� 10^4
    int ordenado = 0;
    while(ordenado == 0){
        ordenado = 1;
        for(int i = 0; i < 4; i++){
            if(v[i] > v[i + 1]){
                ordenado = 0;
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                i = 0;
            }
        }
    }
                for(int i = 0; i < 4; i++){
                    cout << v[i];
            }

}
*/

/*
    #include <iostream>
#include <algorithm> // at� o momento ele serve para usar o sort
using namespace std;

int main (){

    int v[4] = {1,5,2,3};

    sort(v,v+4); // aqui quer dizer que a posi��o v vai para v+1. o primeiro espa�o antes da ',' � o valor q ser� passado, o depois � at� onde ele vai. � tipo boubble sort s� q curto

    for(int i = 0; i < 4; i++){
                    cout << v[i];
            }

return 0;
}
*/
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int v[5] = {1, -7, 1000, 2, 4};

    sort(v, v+5);

    for(int i = 0; i< 5; i++){
        cout << v[i] << endl;
    }

return 0;
}
*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int N_b = 0;

    cin >> N_b;

    int H_b[N_b];

    for(int t = 0; t < N_b; t++){
        cin >> H_b[t];
    }
    for(int tt = 0; tt < N_b; tt++){
        if(H_b[tt] > H_b[tt + 1]){
            cout << H_b[tt];
        }
    }


return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
using namespace std;

struct aluno{
    string nome;
    double media;
};

int func(aluno a, aluno b){

    return a.media > b.media; // ordenar do maior para o menor

}

int main(){
    aluno v[5];

    for(int i = 0; i < 5; i++){
        cin >> v[i].nome >> v[i].media;
    }

    sort(v, v+5, func);
    for(int i = 0; i < 5; i++){
        cout << v[i].nome << " "<< v[i].media << endl;
    }

return 0;
}
*/


/*
#include <iostream>
#include <algorithm>
#include <vector> // com isso vc pode criar um vector q � um array din�mico, ou seja, adapta conforme a necessidade

using namespace std;

int main(){
    vector<int> V; // array de inteiro

    V.push_back(10); // add o elemento 10 no final do vector V
    V.push_back(7); // add o elemento 7 no final do vector V

    cout << V[0] << endl;
    cout << V[1] << endl;

    V.resize(10); // aqui ele d� um tamanho ao vector, e caso o vector tenha um n�mero menor q espa�o escolhido, ele ser� preenchido com elemnteo nulo

   // V.pop_back(); // apaga o ultimo elemento do vector

   // V.clear(); // remove todos os elementos de vector deixando ele vazio

    // � possivel vc ordenar todo o vector da seguinte forma

    sort(V.begin(), V.end()); //dessa forma ordenar� todo o vector

    for(int t = 0; t < 10; t++){
        cout << V[t] << endl;
    }

return 0;
}

*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int qtd_i, qtd_d, vari, tt = 0, arg = 0;
    vector <int> fila, s_fila;

     cin >> qtd_i;

     for(int t = 0; t < qtd_i; t++){
        cin >> vari;
        fila.push_back(vari);
     }
     cin >> qtd_d;
     for(int t = 0; t < qtd_d; t++){
        cin >> vari;
        s_fila.push_back(vari);
        while(fila[tt] != vari){
            if(fila[tt] == vari){
                fila.erase(fila.begin()+tt); // eliminar um elemento especifico
            tt++;
            continue;
            }
        tt++;
        }
     }
     tt = 0;
     cout << qtd_d << endl;
     for(int t = 0; t < qtd_d; t++){
        cout << s_fila[t] << endl;
     }
     for(int t = 0; t < qtd_i; t++){
        for(int te = 0; te < qtd_d; te++){
            if(s_fila[te] == fila[t]){
                te = qtd_d;
                continue;
            }else{
                arg++;
            }
            if(arg == qtd_d){
                cout << fila[t] << endl;
                arg = 0;
            }
        }
     }
return 0;
}
*/

/*
    #include <iostream>

using namespace std;
int main(){

    pair < string, int > p; // aqui criamos uma variavel pair, pair serve para vc ter a possibilidade de armazenar dois valores em uma UNICA variavel
    // "pair < 'primeiro tipo', 'segundo tipo' > p
    cin>>p.first>>p.second; // aqui vemos como � armazenado os valores dentro de pair, � bem did�dico, first � no primeiro espa�o e second � no segundo espa�o
    // outra coisa q fica bem notorio � q o primeiro espa�o do pair � para uma string e a segunda � pra um int como visto na sua declara��o
    pair < string, pair<double, double>> o; // uma coisa muito interessante q vemos aqui � o fato de vc poder usar uma pair dentro de outra pair, fazendo com q uma variavel possa guarda cerca de 3 informa�es
    o.first = "vinicius";// as 2 seguintes informa��es est�o guardada na variavel 'o'
    o.second.first = 8.2; // pair tem algumas fun��es, a primeira � guarda informa��es relacionadas e outra � poder se comparar com outra pair
    o.second.second = 10;

    pair<int, string> a;
    pair<int, string> b;

    a.first = 10;
    a.second = "vinicius";

    b.first = 5;
    b.second = "ana";

    if(a > b){
        cout<< a.second<< "eh melhor\n";
    }else{
        cout<< b.second<< "eh melhor\n";
    } // usa pair para comparar � muito importante, d� uma praticidade muito grande em alguns pontos, ocmo comprar nota de aluno, detalhe q caso houve-se impate na primeira variavel iria ser decidida na segunda

    // outra coisa q d� pra misturar com pair � vector, isso auxilia muito na organiza��o dentro do pair.

    vector< pair<int, string> >v;
    pair<int, string> tmp;

    for(int i=1; i<10; i++){
        cin>> tmp.first>>tmp.second;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    // por fim temos a fun��o make_pair, a fun��o dela � poder retornar o pair j� com variaveis j� completa
    vector< pair< int, string> >v;
    int a;
    string b;

    for(int i = 1; i < 10; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct time{
    string jogador[5000];
};
typedef struct time time;

int main(){
    int n_j, n_t, b, tttt, t;
    string a;
    vector< pair<string, int>>o;
    string j_o[5000];
    cin >> n_j>> n_t;
    for(int i = 0; i < n_j; i++){
        cin >> a >> b;
        o.push_back(make_pair(a,b));
   }
   sort(o.begin(), o.end());
    for(int i = 0; i < n_j; i++){
       j_o[i] += o[i].first;
    }
    int k = 0;
    time times[t];
    for(int ii = 0; ii < n_j; ii++){
        if(t != n_t){
            times[t].jogador[ii] += j_o[ii];
            t++;
        }else{
            t = 0;
        }
    for(int iii = 0; iii < n_t; iii++){
        for(int ii = 0; ii < n_j; ii++){
            cout << tttt;
            if(tttt != n_j/n_t){
            cout << times[tttt].jogador[ii] << endl;
        }else{
            tttt++;
        }
        }
        }
        }
return 0;
}
*/

/*
    #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){

    int number_s, a, b, c = 1, d = 0, tt = 0;
    pair<int,int>tamanhoP;
    tamanhoP.first += 0;
    cin >> tamanhoP.second >> number_s;
    vector< pair<int, int>>o;
    for(int t = 0; t < number_s; t++){
        cin >> a >> b;
        o.push_back(make_pair(a,b));
    }
    sort(o.begin(), o.end());
    pair<int, int>espaco;
    a = 0;
    b = 0;
    espaco.second = o[a].second;
    espaco.first = o[a].first;
    while(c != number_s){
        for(int t = 0; t < number_s; t++){
            if(o[t].second > o[number_s - t].first){
                espaco.second = o[number_s - t].second;
            }
        }
        for(int t = 0; t < number_s; t++){
            if(o[t].first < o[number_s - t].first){
                espaco.first = o[number_s - t].first;
            }
        }
        cout << espaco.first <<endl<< espaco.second << endl;
        c++;
    }

return 0;
}
*/

/*
    queue � uma estrutura do tipo fila, ela funciona exatamente como uma fila tradicional, entra por ultimo e sai o primeiro
    usa o estilo FIFO (first in first out), uma grande vantagem do queue � poder acessar melhor o primeiro e o ultimo elemento
    assim
    para poder implementar o queue vc precisa usar #include <queue>, para poder usar o queue

*/

/*
#include <iostream>
#include <queue> //fifo

using namespace std;

int main(){

	queue<int> fila;
	int op;
	int id;

	while(cin>>op){ //Vamos ler cada opera��o
		if(op == 0){
			break; //Se opera��o for 0, o caixa do supermercado quebrou.
		}

		if(op == 1){ //Algu�m chega na fila
			cin>>id; //Lemos o id da pessoa que chegou e colocamos na fila.
			fila.push(id);
		}else if(op == 2){ //O caixa vai atender algu�m da fila
			if(fila.empty() == false){ //Se a fila n�o for vazia, ou seja, tiver algu�m na fila
				fila.pop(); //O caixa atende a pessoa na frente da fila, e deletamos essa pessoa da fila.
			}

		}
	}


	while(fila.empty() == false){
		int p = fila.front();
		cout<<p<<" ";

		fila.pop();
	}

	return 0;
}
*/


/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int posicao = 0;
    char oitavas [16] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    char quartas [8];
    char semi [4];
    char fimal [2];

    pair<int,int>resultado;

    for(int t = 0; t < 8; t++){
        cin >> resultado.first >> resultado.second;
        if(resultado.first > resultado.second){
            quartas[t] = oitavas[posicao];
            posicao = posicao + 2;
        }else{
            quartas[t] = oitavas[posicao + 1];
            posicao = posicao + 2;
        }

    }
    posicao = 0;
    for(int t = 0; t < 4; t++){
        cin >> resultado.first >> resultado.second;
        if(resultado.first > resultado.second){
            semi[t] = quartas[posicao];
            posicao = posicao + 2;
        }else{
            semi[t] = quartas[posicao + 1];
            posicao = posicao + 2;
        }

    }
    posicao = 0;

    for(int t = 0; t < 2; t++){
        cin >> resultado.first >> resultado.second;
        if(resultado.first > resultado.second){
            fimal[t] = semi[posicao];
            posicao = posicao + 2;
        }else{
            fimal[t] = semi[posicao + 1];
            posicao = posicao + 2;
        }

    }
    posicao = 0;
    cin >> resultado.first >> resultado.second;
    if(resultado.first > resultado.second){
        cout << fimal[0];
    }else{
        cout << fimal[1];
    }
return 0;
}
*/

/*
    o stack � tambem conhecido como pilha, onde vc pode apenas retirar ou colocar elementos no topo dela usando um metodo chamado lifo (lost in first out), q pode ser usado em programas para
    organizar uma pilha, para poder usar vc deve usar a biblioteca #include<stack> e depois para poder declarar no seu programa vc deve usar o 'stack <tipo> nome_da_variavel'. Na parte de
    manipula��o de stack temos 3 pilares:
     push - quer serve para colocar um elemento no topo da pila
     pop - para caso vc queira remover o elemento do topo da tabela
     empty - para caso a pilha esteja vazia

     nesse programa tem tudo q o stack pode oferecer e a forma correta da sua utiliza��o


     #include <iostream>
#include <stack>

using namespace std;

int main(){

	int op;
	int x;
	stack<int> pilha; //Cria uma vari�vel stack que armazena inteiros

	while(cin>>op){
		if(op == 0){ //Opera��o de finalizar o programa
			break; //Encerra o while
		}

		if(op == 1){ //Adicionar elemento na pilha
			cin>>x;
			pilha.push(x); //Adiciona o elemento x no topo da pilha
		}else if(op == 2){
			if(!pilha.empty()){ //Se a pilha n�o estiver vazia
				pilha.pop(); //Remove elemento do topo da pilha
			}
		}else if(op == 3){
			if(pilha.empty()){
				cout<<"-1\n";
			}else{
				cout<<pilha.top()<<"\n";
			}
		}


	}

	return 0;
}

#include <iostream>
#include <stack>

using namespace std;

int main(){

	string expressao;
	stack<char> pilha;
	bool ok;

	cin>>expressao;


	ok = true; //Usamos a ideia de que a express�o � v�lida, at� que se prove o contr�rio
	for(int i=0;i<(int)expressao.size();i++){ //Passamos por cada caractere da express�o
		if(expressao[i] == '('){ //Se achamos um par�ntese abrindo, adicionamos ele na pilha
			pilha.push('(');
		}else if(expressao[i] == ')'){ //Se achamos um par�ntese fechando, verificamos se o topo dapilha tem um par�ntese abrindo
			if(pilha.empty()){ //Se a pilha � vazia, a express�o � inv�lida
				ok = false;
				break;
			}else{
				pilha.pop(); //Caso exista um par�ntese abrindo no topo da pilha, removemos ele.
			}
		}
	}

	if(!pilha.empty()){ //Se ap�s processar toda a express�o ainda restar algum par�ntese abrindo, a express�o tamb�m � inv�lida
		ok = false;
	}

	if(ok){
		cout<<"Valida\n";
	}else{
		cout<<"Invalida\n";
	}

	return 0;
}
*/
/*
#include <iostream>
#include <stack>

using namespace std;

int main(){

	string expressao;
	stack<char> pilha;
	bool ok;

	cin>>expressao;


	ok = true; //Usamos a ideia de que a express�o � v�lida, at� que se prove o contr�rio
	for(int i=0;i<(int)expressao.size();i++){ //Passamos por cada caractere da express�o
		if(expressao[i] == '('){ //Se achamos um par�ntese abrindo, adicionamos ele na pilha
			pilha.push('(');
		}else if(expressao[i] == ')'){ //Se achamos um par�ntese fechando, verificamos se o topo dapilha tem um par�ntese abrindo
			if(pilha.empty()){ //Se a pilha � vazia, a express�o � inv�lida
				ok = false;
				break;
			}else{
				pilha.pop(); //Caso exista um par�ntese abrindo no topo da pilha, removemos ele.
			}
		}
		if(expressao[i] == '{'){ //Se achamos um par�ntese abrindo, adicionamos ele na pilha
			pilha.push('{');
		}else if(expressao[i] == '}'){ //Se achamos um par�ntese fechando, verificamos se o topo dapilha tem um par�ntese abrindo
			if(pilha.empty()){ //Se a pilha � vazia, a express�o � inv�lida
				ok = false;
				break;
			}else{
				pilha.pop(); //Caso exista um par�ntese abrindo no topo da pilha, removemos ele.
			}
		}if(expressao[i] == '['){ //Se achamos um par�ntese abrindo, adicionamos ele na pilha
			pilha.push('[');
		}else if(expressao[i] == ']'){ //Se achamos um par�ntese fechando, verificamos se o topo dapilha tem um par�ntese abrindo
			if(pilha.empty()){ //Se a pilha � vazia, a express�o � inv�lida
				ok = false;
				break;
			}else{
				pilha.pop(); //Caso exista um par�ntese abrindo no topo da pilha, removemos ele.
			}
		}
	}

	if(!pilha.empty()){ //Se ap�s processar toda a express�o ainda restar algum par�ntese abrindo, a express�o tamb�m � inv�lida
		ok = false;
	}

	if(ok){
		cout<<"S\n";
	}else{
		cout<<"N\n";
	}

	return 0;
}

*/

/*
    set � uma arvore de busca eficiente, a sua declara��o � a seguinte


    include <set> //Biblioteca do set

    using namespace std;

    int main(){
    set<int> S; //Cria uma vari�vel do tipo set para armazenar n�meros inteiros
    }

    ele � utilizado como um vetor din�mico, porem,  com um modo mais r�pido de inserir os elementos

    S.insert(10); //Adiciona o elemento 10 no set
    S.insert(3); //Adiciona o elemento 3 no set

    detalhe q n podemos incrementar o msm elemento 2 vezes seguidas

    como disse, o set serve para a procura de elementos especificos, de forma r�pida dentro do set, usamos o comando find

    if(S.find(3) != S.end()){ //Se 3 est� no conjunto
    cout<<3<<"\n"; // ele procurou sem a necessidade de se criar um programa q percorre todo o conjunto se o 3 est� ou n�o dentro de set

    da mesma facilidade com o qual o elemento � colocado, ele tambem � retirado, o comando pra sua retirada � erase, usado da exata forma do insert

    S.erase(10); //Apaga o elemento 10 do set

    alem do erase, tambem pode ser usado (clear, size, begin, end),

    for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){ // percorre todo o conjunto
      cout << *it << " ";
    }
    cout<<"\n";
} // lembrando q os elementos dentro do set � ordenado naturalmente

*/

/*
    #include <iostream>
#include <set>

using namespace std;

int main (){

    int aluno = 1, aux = 0, total = 0;
    set<int> presenca;
    set<int> presenca_final;

    while(aluno != 0){

        cin >> aluno;
        presenca.insert(aluno);

    }
    for(set<int>::iterator aux = presenca.begin(); aux != presenca.end(); aux++){
         if(presenca_final.find(*aux) != presenca_final.end()){
            continue;
         }else{
            presenca_final.insert(*aux);
            total++;
         }
    }
    total--;
    cout << total << endl;
return 0;
}
*/

/*

    #include <iostream>
#include <set>

using namespace std;

int main (){
    int cartas_troca_a = 0, cartas_troca_b = 0, aux = 1;
    set<int> cartas_a;
    set<int> cartas_b;

    while(aux != 0){

        cin >> aux;
        cartas_a.insert(aux);
    }

    cartas_a.erase(0);

    aux = 1;

    while(aux != 0){

        cin >> aux;
        cartas_b.insert(aux);
    }
    cartas_b.erase(0);

    for(set<int>::iterator aux1 = cartas_a.begin(); aux1 != cartas_a.end(); aux1++){
         if(cartas_b.find(*aux1) != cartas_b.end()){
            continue;
         }else{
            cartas_troca_a++;
         }
    }
    for(set<int>::iterator aux2 = cartas_b.begin(); aux2 != cartas_b.end(); aux2++){
         if(cartas_a.find(*aux2) != cartas_a.end()){
            continue;
         }else{
            cartas_troca_b++;
         }
    if(cartas_troca_a >= cartas_troca_b){
        cout << cartas_troca_b << endl;
    }else{
        cout << cartas_troca_a << endl;
    }
    }

return 0;
}

*/


/*o maps � um set de struct porem sem definir a struct, ex: para guarda duas informa��es na msm variavel vc usava a pair
    porem para acessar kd uma das informa��es tinha q ser separadamente, ou seja, m.first pra primeira e m.second pra segunda,
    j� no map ele aponta diretamente da primeira pra segunda, ex: map<string, int> M; // aqui o nome q for escrito em string referenciar� o int

#include<iostream>
#include<map> //Biblioteca do map

using namespace std;

int main(){
    map<string, int> M; //Cria uma vari�vel do tipo map que mapeia strings em int
}

    para poder incrementar alguma informa��o em maps temos dois caminhos, o primeiro � inserir por insert e make_pair:
    M.insert(make_pair("Alana", 10));
    a segunda forma � mais simples de se utilizar:
    M["Alana"] = 10; // � mais sint�tico

    para poder pesquisar alguma chave (q � o first do maps), vc utiliza find, de forma semelhante ao set

    if(M.find("Alana") != M.end()){ //Se a chave "Alana" foi inserida no map
      cout<<"Sim"<<"\n";
    }else{
      cout<<"Nao"<<"\n";
    }

    detalhe muito importante, � q CASO vc tenta imprimir alguma chave, oq sair� na verdade vai ser oq ela referencia
    para ficar mais simples de se entender podemos colocar assim [chave]=> elemento, bem no estilo struct

    e assim como no set, a forma mais f�cil de deletar algum termo do maps � usando o erase, com um simples comando de
    M.erase("Alana"); // procurar� a chave Alana dentro do map e retirar� o seu elemento, assim como o set tem outras formas de deletar
    clear: Apaga todos os elementos.
    size: Retorna a quantidade de elementos.
    begin: Retorna um ponteiro para o inicio do map
    end: Retorna um ponteiro para o final do map

    por fim para poder passar por todos os elementos presente em maps usamos esse c�digo

    for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
      cout<< "("<< it->first<< ", "<< it->second<< ") ";
    }
    cout<<"\n";


 */

 /*
    #include <iostream>
 #include <map>

 using namespace std;



 int main(){

    int T_programa_instalado = 0, N_total_programa = 0, programa = 1, versao, total_programa = 0, aux1, aux2, programas_instalar = 0;
    map<int, int> Programa_e_versao;
    map<int, int> aux;


    cin >> T_programa_instalado >> N_total_programa;

    while(programa != 0){

        cin >> programa >> versao;

        if(Programa_e_versao.find(programa) != Programa_e_versao.end()){
            Programa_e_versao[programa] = versao;
            cout << "escreva a proxima versao" << endl << "ou aperte 0 para continuar" << endl;
        }else if(Programa_e_versao.find(programa) == Programa_e_versao.end() && total_programa < N_total_programa){
            Programa_e_versao[programa] = versao;
            total_programa++;
            cout << "escreva a proxima versao" << endl << "ou aperte 0 para continuar" << endl;
        }else{
            cout << "ja ultrapassou o limite de programa" << endl;
            cout << "escreva a proxima versao" << endl << "ou aperte 0 para continuar" << endl;
        }

    }
     for (map<int, int>::iterator it=Programa_e_versao.begin(); it!=Programa_e_versao.end(); ++it){
            for (map<int, int>::iterator itt=Programa_e_versao.begin(); itt!= Programa_e_versao.end(); ++itt){
                if(it->first == itt->first){
                    if(it->second < itt->second){
                        aux1 = itt->first;
                        aux2 = itt->second;
                    }else{
                        aux1 = it->first;
                        aux2 = it->second;
                    }
                }
    aux[aux1] = aux2;
    }
    }

for (map<int, int>::iterator it=aux.begin(); it!=aux.end(); ++it){
    if(programas_instalar < T_programa_instalado){
    cout<< "("<< it->first<< ", "<< it->second<< ") ";
    }

}
return 0;
}
 */

/*
 #include <iostream>
 #include <map>
 #include <vector>

 using namespace std;

 int main (){

    map<int, int> pedacos;
    pair<int, int> pedaco_tamanho;
    int aux, aux1, tamanho = 0, local = 1, qt_quer_comer;

    cin >> pedaco_tamanho.first >> pedaco_tamanho.second >> qt_quer_comer;
    aux = pedaco_tamanho.first;
    aux1 = pedaco_tamanho.second;

    for(int t = 0; t < aux; t++){

        if(tamanho < aux1){
            cin >> tamanho;
            if((tamanho + aux1) <= pedaco_tamanho.second){
                pedacos[local] = tamanho;
                local++;
            }else{
                cout << "tente novamente" << endl;
                t--;
            }
        }

    }
    tamanho = 0;
    local = 0;
    for (map<int, int>::iterator it=pedacos.begin(); it!=pedacos.end(); ++it){
    if(tamanho < qt_quer_comer){
        tamanho = it->second;
    }else{
        continue;
    }

}

cout << tamanho << endl;


 return 0;
 }
*/

/*
    aqui mostra como funciona a rede union-find

#include <iostream>
#define MAXN 100100

int pai[MAXN]; // crio o vetor que armazenar� os pais

// fun��o find: retorna o patriarca de um elemento x
int find(int x){

    // se ele for pai de si mesmo, ele � o patriarca
    if(pai[x]==x) return x;

    // se n�o, devo olhar o patriarca de seu pai
    return find(pai[x]);
}

// fun��o join: faz a uni�o dos conjuntos dos elementos x e y
void join(int x, int y){

    // basta fazer o patriarca de um se tornar pai do patriarca do outro
    pai[find(x)]=find(y);
}

*/
/*
#include <iostream>

#define MAXN 100100

using namespace std;

int n, k;

int pai[MAXN], peso[MAXN];

// fun��es do Union-Find
int find(int x){

    if(pai[x]==x) return x;
    return find(pai[x]);
}
// fun��o find otimizada
int find(int x){

    // se x for o patriarca, retorne x
    if(pai[x]==x){
        return x;
    }

    // se n�o, retorne o valor do patriarca de seu pai
    return pai[x]=find(pai[x]); // mas lembre-se de salv�-lo em pai[x]
}

void join(int x, int y){

    pai[find(x)]=find(y);
}
// fun��o join otimizada
void join(int x, int y){ // ela recebe os elementos a serem unidos

    // como s� vamos unis os patriaarcas s� precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);

    // agora x e y s�o os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if(x==y){
        return; // ent�o os conjuntos j� est�o unidos e retornamos
    }

    // se um dos dois patriarcas tiver peso menor, fa�o ele ser filho do outro
    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }

    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){

        // escolho um para ser o novo patriarca
        pai[x]=y;

        // e guardo que seu peso aumentar� um uma unidade
        peso[y]++;
    }
}

int main(){

    // leio os valores de n e k
    cin>>n>>k;

    // inicializo todos os bancos como pais de si mesmos
    for(int i=1; i<=n; i++){
        pai[i]=i;
    }

    char op;
    int banco1, banco2;

    // para cada opera��o a ser realizada
    for(int i=1; i<=k; i++){

        // leio o tipo de opera��o e os bancos envolvidos
        cin>>op>>banco1>>banco2;

        // se a opera��o for a de fus�o
        if(op=='F'){
            join(banco1, banco2); // realizo a uni�o dos conjuntos
        }

        // se n�o for, � uma consulta
        else{
            // se os bancos estiverem no mesmo conjunto
            if(find(banco1)==find(banco2)){
                cout<<"S\n"; // imprimo 'S'
            }
            else{ // se n�o, imprimo 'N'
                cout<<"N\n";
            }
        }
    }

    return 0;
}
*/
/*
aqui temos a fun��o union-find otimizado

#include <iostream>

#define MAXN 100100

using namespace std;

// declaro as vari�veis que vou precisar
int n, k, pai[MAXN], peso[MAXN];

// fun��es do Union-Find otimizadas
int find(int x){

    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}

// fun��o join otimizada que atualiza o tamanho dos conjuntos
void join(int x, int y){ // ela recebe os elementos a serem unidos

    // como s� vamos unir os patriaarcas s� precisamos trabalhar com eles
    // e fazemos cada um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);

    // agora x e y s�o os patriarcas dos conjuntos que desejamos unir

    // se eles forem o mesmo patriarca
    if(x==y){
        return; // ent�o os conjuntos j� est�o unidos e retornamos
    }

    // se o patriarca x tiver peso menor que o patriarca y
    if(peso[x]<peso[y]){
         pai[x]=y; // fa�o x ser filho do y
         qtd[y]+=qtd[x]; // e atualizo o n�mero de descendentes de y
    }

    // se o patriarca y tiver peso menor que o patriarca x
    if(peso[x]>peso[y]){

         pai[y]=x; // fa�o y ser filho de x
         qtd[x]+=qtd[y]; // e a tualizo o n�mero de descendentes de x
    }

    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){

        // escolho um para ser o novo patriarca
        pai[x]=y;

        // e guardo que seu peso aumentar� um uma unidade
        peso[y]++;

        // e atualizo o seu n�mero de descendentes
        qtd[y]+=qtd[x];
    }
}

// os comandos da main seguem os mesmo do c�digo anterior, n�o otimizado
int main(){

    cin>>n>>k;

    for(int i=1; i<=n; i++){
        pai[i]=i;
    }

    char op;
    int banco1, banco2;

    for(int i=1; i<=k; i++){

        cin>>op>>banco1>>banco2;
        if(op=='F'){
            join(banco1, banco2);
        }
        else{
            if(find(banco1)==find(banco2)){
                cout<<"S\n";
            }
            else{
                cout<<"N\n";
            }
        }
    }

    return 0;
}
*/
/*
#include <iostream>

#define MAX 100000

using namespace std;

int pai[MAX], peso[MAX];


int find(int x){

    if(pai[x]==x){
        peso[x]++;
        return x;
    }
    peso[x]++;
    return pai[x]=find(pai[x]);
};

void join(int x, int y){

    x=find(x);
    y=find(y);

    if(x==y){
        return;
    }

    if(peso[x]<peso[y]){
         pai[x]=y;
    }


    if(peso[x]>peso[y]){

         pai[y]=x;
    }

    if(peso[x]==peso[y]){

        pai[x]=y;

        peso[y]++;

    }
}



int main(){

    int  N, K, esc1, esc2;
    char escolha;


    cin >> N>> K;

    int Banco[N];


    for(int t = 0; t < K; t++){
        cin >> escolha >> esc1 >> esc2;
        if(escolha == 'F' || escolha == 'f'){

            join(Banco[esc1], Banco[esc2]);

        }else{
            if(find(esc1)!=find(esc2)){
                cout << "S" << endl;
            }
            else{
                cout << "N" << endl;
            }
        }

    }

return 0;
}
*/

/*
    BFS = usado para grafos que não tem peso, que coloca a distância do ponto inicial

#include <bits/stdc++.h>
using namespace std;
#define INF 100000000
#define NMAX 100010

vector <int> grafo[NMAX];
int dist[NMAX];

int main (){
    int n, m, u, v, i;
    queue< int > fila;
    cin >> n >> m;

    for(i = 1; i <= n; i++){
        dist[i] = INF;
    }
    for(i = 0; i < m; i++){
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    cin >> u;

    dist[u] = 0;
    fila.push(u);

    while(fila.empty() == false){
        u = fila.front();
        fila.pop();
        for(auto v:grafo[u]){
            if(dist[v] > dist[u] + 1){
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }
return 0;
}

*/

/*
    DIJKSTRA = é como o BFS porem, utilizado para descobrir a distancia correta até qualquer vertice caso não exista aresta negativa


    #include <bits/stdc++.bits/stdc++.h>
    using namespace std;
    #define INF 10000000000
    #define NMAX 1000010

    typedef pair pair<int, int> pii;
    vector<pii> grafos[NMAX];
    int dist[NMAX];

    int main (){
        int n, m, u, v, d, w, i;
        priority_queue <pii, vector<pii>,
        greater<pii>> fila;
        cin >> n >> m;
        for(i = 1; i< n; i++){
            dist[i] = INF;
        }
            for(ii = 0; i < m; i++){
                cin >> u >> v >>w;
                grafo[u].push_back(make_pair(w, v));
                grafo[v].push_back(make_pair(w, u));
            }
            cin >> u;
            dist[u]=0;
            fila.push(make_pair(dist[u], u));
            while(fila.empty()== false){
                d = fila.top().first;
                u = fila.top().secoind;
                fila.pop();
                if(d != dist[u]){
                    continue;
                }
                for(auto v: grafo[u]){
                    (dist[v.second] > dist[u] + v.first){
                    dist[v.second = dist[u] + v.first;
                    fila.push(make_pair(dist[v.second], v.second));
                }

            }
        }
        return 0;
    }
*/
/*
    BELMANN-FORD = ele resolve um problema existente no DIJKSTRA e no BFS que é o ciclo negativo, portanto esse problema que existiria nesse ponto


*/
/*
#include<bits/stdc++.h>
using namespace std;
#define INF 10000000000
#define NMAX 1000010
typedef pair <int, pair< int, int>> pipii;
int n;
vector<pipii> edges;
int dist[dist[NMAX];

bool BF(int ini){
    int u, v, w, i;
    dist[ini] = 0;
    for(i = 1; i <= n; i++){
        w = e.first;
        u e.second.second;
        if(dist[v]> dist[u] + w){
            dist[v] = dist[u] + w;
        }
        if(dist[u] > dist[v] + w){
            dist[u] = dist[v] + w;
        }
    }
        for(auto e:edges){
            w = e.first;
            u = e.second.first;
            v = e.second.second;
            if(dist[u] > dis[v] + w){
                return true;
            }
            if(dist[u] > dist[v] + w){
                return true;
            }
        }
        return false;
    }
    int main (){

        int m, u , v, d, w, i;
        cin >> n >> v >> w;
        for(i = 0; i < m; i++){
            dist[i] = INF;
        }
        for(i = 0; i < m; i++){
            cin >> u >> v >> w;
            edges.push_back(make_pair(w, make_pair(u, v)));
        }
        cin >> u;
        BF(u);
        return 0;
    }
*/

/*
    Flody-Warshall = caso não exista NENHUMA rota negativa, com esse código vc terá todas as distância de vertices para todos os vertices existentes, de forma q cria um mapa matriz de x,y.

*/
/*
    #include <bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define NMAX 300

int flody[NMAX][nmax];

int main(){
    int n, m, u, v, w, ,i ,j , k;
    cin >> n >> m;
    for(i = 1; i <= n i++){
        for(j = 1; j <= n; j++){
            flody[i][j] = INF;
        }
            flody[i][j] = 0;
    }
    for(i = 0; i < m; i++){
        cin >> u >> v >> w;
        flody[u][v] = w;
        flody[v][u] = w;
    }
    for(k = 1; k <= n; k++){
        for(i = 1; i <= n: i++){
            for(j = 1; j <= n; j++){
                flody[i][j] = min(flody[i][j], flody[i][k] + flody[k][j]);
            }
        }
    }
    return 0;
}

*/

/*
    MTS = é um algoritimo q tenta minimizar a arvore q possue soma de pesos para a menor possível.
*/

/*
#include <bits/stdc++.h>
using namespace std;

#define NMAX 200010

int pai[NMAX];
int peso[NMAX];
typedef pair <int, pair< int, int>> tipo;

int FIND (int u){
if(u == pai[u]{
        return u;
   }
    return pai[u] = FIND(pai[u]);
}

void JOIN(int u, int v){
    u = FIND(u);
    v = FIND(v);
    if(peso[u] <peso[v]){
        swap(u, v);
    }
    pai[v]= u;
    peso[u] += peso[v];
    return;

}

vector <tipo> edges;
vector<pair<int, int>> MST[NMAX];

int main (){
    int n, m, u, v, w, sum_MST = 0, i;
    cin >> n >> m;
    for(i = 0; i < m; i++){
        pai[i] = i;
        peso[i] = 1;
    }
    for(i = 0; i < m; i++){
        cin >> u >> v >> w;
        edges.push_back({w, {u,v}});
    }
    sort(enges.begin(), edgesnend());
    for(i = 0; i < m; i++){
        w = edges[i].first;
        u = edges[i].second.first;
        v = edges[i].second.second;
        if(FIND(u) != FIND(v)){
            JOIN(u, v);
            MST[u].push_back({W, V});
            MST[v].push_back({w, u});
            sum_MST += w;
        }
    }
    return 0;
}

*/
/*
    árvore de segmentos = caso possua uma lista de N opções com cada opções tendo seu valor especpifico, a árvore de segmentos dão peso para q possa ser acessado mais facilmente
*/

// esse códio serve para atualizar os pesos para futuras modificaçoes dos vertices necessario
/*
void atualiza (int no, int i, int j, int posicao, int novo_valor){
    if(i == j){

        arvore[no] = i;
        acao[posicao] = novo_valor;
    }else{
        int esquerda = 2*no;
        int direita = 2*no + 1;

        int meio =(i + j)/2;

    if(posicao <= meio){atualiza(esquerda, i, meio, posicao, novo_valor)
        }else{
                atualiza(direita, meio + 1, j, posicao, novo_valor)
        }
    if(acao[arvore[esquerda]] < acao [arvore[direita]]){
        arvore[no] = arvore[esquerda];
    }else{
        arvore[no] = arvore[direita];
    }
    }

}
*/

/*
    esse código tentará retorna a posição atualizada pelo código anterior, caso ie j estiver entre A e B, então o programa procurará a melhor opção dentro do intervalo [i,j], caso j > A  e i > B então retornaremos -1, e por ultimo caso i e j se intercalem esses valores n nps interessaram
*/

/*
// essa consulta procura o indice mais barato possivel dentro da lista fornecida e dentro tambem do espaçamento q foi dando a ele, caso ambos nos interessa, temos que o código procurara o de menor custo, portanto , o melhor q se pode ter
int consulta(int no, int i, int j, int A, int B){
    if(A <= i && j <= B){
        return arvore[no];
    }
    if(i > B || j > A){
        return -1;
    }
    int esquerda = 2*no;
    int direita = 2*no + 1;

    int meio = (i + j)/2;

    int resposta_esquerda = consulta(esquerda, i, meio, A, B);
    int resposta_direita = consulta(direita, meio + 1, j, A, B);

    if(resposta_esquerda == -1){
        return resposta_direita;
    }if(resposta_direita == -1){
        return resposta_esquerda;
    }

    if(acao[resposta_esquerda] < acao[resposta_direita]){
        resposta_esquerda;
    }else{
        return resposta_direita;
    }
}
*/

/*
    #include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

    int arvore[MAX];
    int acao[MAX];


int atualiza (int no, int i, int j, int posicao, int novo_valor){
    if(i == j){

        arvore[no] = i;
        acao[posicao] = novo_valor;
    }else{
        int esquerda = 2*no;
        int direita = 2*no + 1;
        int meio =(i + j)/2;

    if(posicao <= meio){
            atualiza(esquerda, i, meio, posicao, novo_valor);
        }else{
                atualiza(direita, meio + 1, j, posicao, novo_valor);
        }
    if(acao[esquerda] < acao[direita]){
        arvore[no] = arvore[esquerda];
    }else{
        arvore[no] = arvore[direita];
    }
    }

    return 0;
}

int produto_soma(int i, int j){
    int corsa = 0;
    if(i <= j){
    for(i = 0; i < j; i++){
        corsa = corsa + acao[i];
    }
    }else{
        return 0;
    }
    return corsa;
}
int main(){
int no = 1, i, j, posicao, novo_valor, valor_inicial, valor_operacao, t;
char escolha;
    cin >> valor_inicial >> valor_operacao;
char p[MAX];
    i = 1;
    j = valor_inicial;
for(t = 0; t < valor_inicial; t++){
    cin >> novo_valor;
    posicao = t;
    atualiza(no, i, j, posicao, novo_valor);
}

    posicao = 0;
    t = 0;
for(int tt = 0; tt < valor_operacao; tt++){
     cin >> escolha;
     if('C' == escolha){
        cin >> novo_valor >> posicao;
        atualiza(no, i, j, posicao, novo_valor);
     }else{
         t = produto_soma(i, j);
        if(t > 0){
            p[t] = '+';
            t++;
        }else if(t < 0){
            p[t] = '-';
        }else{
            p[t] = '0';
        }
     }

}


return 0;
}
/*
#include<iostream>
#include<bits/stdc++.h>
#define MAX 10000000

using namespace std;

int arvore[MAX];
int acao[MAX];

int atualiza (int no, int i, int j, int posicao, int novo_valor){
    if(i == j){

        arvore[no] = i;
        acao[posicao] = novo_valor;
    }else{
        int esquerda = 2*no;
        int direita = 2*no + 1;
        int meio =(i + j)/2;

    if(posicao <= meio){
            atualiza(esquerda, i, meio, posicao, novo_valor);
        }else{
                atualiza(direita, meio + 1, j, posicao, novo_valor);
        }
    if(acao[esquerda] < acao[direita]){
        arvore[no] = arvore[esquerda];
    }else{
        arvore[no] = arvore[direita];
    }
    }

    return 0;
}

int consulta(int no, int i, int j, int A, int B){
    if(A <= i && j <= B){
        return arvore[no];
    }
    if(i > B || j > A){
        return -1;
    }
    int esquerda = 2*no;
    int direita = 2*no + 1;

    int meio = (i + j)/2;

    int R_E = consulta(esquerda, i, meio, A, B);
    int R_D = consulta(direita, meio + 1, j, A, B);

    if(R_E == -1){
        return R_D;
    }if(R_D == -1){
        return R_E;
    }

    if(acao[R_E] < acao[R_D]){
        R_E;
    }else{
        return R_D;
    }
return 1;
}

int main (){
    int no = 1, i = 1, j, posicao, novo_valor, valor_inicial, N_operacao, t, A, B, SOMA;
    char escolha;
    cin >> valor_inicial >> N_operacao;
    j = valor_inicial;
    for(t = 0; t < valor_inicial; t++){
    cin >> novo_valor;
    posicao = t;
    atualiza(no, i, j, posicao, novo_valor);
    }
    posicao = 0;
    for(int tt = 0; tt < 0; tt++){
        cin >> escolha;
        if(escolha == 'A'){
            atualiza(no, i, j, posicao, novo_valor);
        }else if(escolha == 'S'){
            cin >> A >> B;
            SOMA = SOMA + consulta(no, i, j, A, B);

        }
        cout << SOMA;
    }

return 0;
}
*/

/*
lazy propagatin - serve para que possa atualizar nó somente quando necessario, para q não gaste processamento atoa, ou antes do necessário
pois caso vc quise-se atualizar um valor no nó 2, temos que atualizar todos os seus descendentes, ou seja, aparti9r do nó q queremos atualizar terems q fazer um n! pra cada nivel q descemos, ou seja no caso de ter 2 niveis, teremos q fazer 3!,
deixando inviavel, para q tenha algo de alto nivel.
funcionaria da seguinte forma, CASO tenhamos q atualizar um nó de arvore[3], mudaremos tambem o seu lazy, nesse caso o lazy[3], e todos os lazy de seus decendentes, oq é mais fácil do que mudar todo um intervalo, ocasionando menos gastos energéticos
e isso acontece com todos os filhos do nó chamado pelo usuario, usando de exemplo, caso chamassemos o nó 4 dentro de uma árvore de 1 a 15 teremos a atualizção clara do número 4, pórem teremos tambem de atualizar o número 8 e 9 pois são filhos do número 4

#include<iostream>
#include<bits/stdc++.h>
#define MAX 10000000

using namespace std;

int arvore[MAX];
int acao[MAX];

int atualiza (int no, int i, int j, int posicao, int novo_valor){
    if(i == j){

        arvore[no] = i;
        acao[posicao] = novo_valor;
    }else{
        int esquerda = 2*no;
        int direita = 2*no + 1;
        int meio =(i + j)/2;

    if(posicao <= meio){
            atualiza(esquerda, i, meio, posicao, novo_valor);
        }else{
                atualiza(direita, meio + 1, j, posicao, novo_valor);
        }
    if(acao[esquerda] < acao[direita]){
        arvore[no] = arvore[esquerda];
    }else{
        arvore[no] = arvore[direita];
    }
    }

    return 0;
}

int consulta(int no, int i, int j, int A, int B){
    if(A <= i && j <= B){
        return arvore[no];
    }
    if(i > B || j > A){
        return -1;
    }
    int esquerda = 2*no;
    int direita = 2*no + 1;

    int meio = (i + j)/2;

    int R_E = consulta(esquerda, i, meio, A, B);
    int R_D = consulta(direita, meio + 1, j, A, B);

    if(R_E == -1){
        return R_D;
    }if(R_D == -1){
        return R_E;
    }

    if(acao[R_E] < acao[R_D]){
        R_E;
    }else{
        return R_D;
    }
return 1;
}

int main (){
    int no = 1, i = 1, j, posicao, novo_valor, valor_inicial, N_operacao, t, A, B, SOMA;
    char escolha;
    cin >> valor_inicial >> N_operacao;
    j = valor_inicial;
    for(t = 0; t < valor_inicial; t++){
    cin >> novo_valor;
    posicao = t;
    atualiza(no, i, j, posicao, novo_valor);
    }
    posicao = 0;
    for(int tt = 0; tt < 0; tt++){
        cin >> escolha;
        if(escolha == 'A'){
            atualiza(no, i, j, posicao, novo_valor);
        }else if(escolha == 'S'){
            cin >> A >> B;
            SOMA = SOMA + consulta(no, i, j, A, B);

        }
        cout << SOMA;
    }

return 0;
}

void atualiza(int no, int i, int j, int a, int b, int valor){

	int esquerda = 2*no;     // índice do filho da esquerda
	int direita  = 2*no + 1; // índice do filho da direita
	int meio = (i + j)/2;

	if(lazy[no]){ // se existirem operações atrasadas a serem feitas, temos que fazê-las agora

		arvore[no] += lazy[no]*(j - i + 1); // já que somamos lazy[no] a cada valor de i a j, fazemos isso (j-i+1) vezes

		if(i != j){ // se i != j, o nó possui descendentes e temos que atualizar o valor de lazy deles
			lazy[direita]  += lazy[no];
			lazy[esquerda] += lazy[no];
		}

		lazy[no] = 0; // agora que realizamos as operações devidas, zeramos novamente o valor de lazy[no]
	}

	if(i > j || i > b || a > j) return; // se a atualização que vamos fazer não afeta esse nó, encerramos a função

	if(a <= i && j <= b){ // se a operação cobre o nó inteiro

		arvore[no] += valor*(j-i+1); // atualizamos o valor do nó

		// se o nó possui descendentes, atualizamos o valor de lazy de cada um deles
		// em vez de chamar a função recursiva. Isso é o que otimiza nosso tempo de execução
		if(i != j){
			lazy[direita] += valor;
			lazy[esquerda] += valor;
		}
	}

	else{ // caso a operação atualize apenas alguns valores do nó, chamamos a função nos dois filhos

		atualiza(esquerda,      i, meio, a, b, valor); // atualizamos o filho da esquerda
		atualiza( direita, meio+1,    j, a, b, valor); // atualizamos o filho da direita

		arvore[no] = arvore[esquerda] + arvore[direita]; // atualizamos o nó que estamos
	}

}
*/
