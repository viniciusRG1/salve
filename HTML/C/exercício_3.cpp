#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main (){

int number, n = 0, inicio = 0, no = 0, vezes = 0;
cout << "escolha o numero q vc quer iniciar a piramide, detalhe que deve ser impar \n";

cin >> number;

int piramide[number];

for(n = 1; n <= number; n++){
    piramide[n - 1] = n;
}
n = n /2;
while(inicio!= n){
    for(no = 0; no <= number; no++){
    if(vezes != 1){
        for(int nos = 0; nos <= inicio; nos++){
        cout << " ";
        no++;
    }
    vezes++;
    }
    cout << piramide[no];

}
inicio++;
number--;
cout << "\n";
vezes = 0;
}


return 0;
}
