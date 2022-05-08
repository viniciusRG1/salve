#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main(){

string nome_aluno_1, nome_aluno_2;
int t = 0;

cout << "Escreva uma frase" << endl;

getline(cin, nome_aluno_1);
getline(cin, nome_aluno_2);


while(nome_aluno_1[t] == nome_aluno_2[t]){
    t++;
}
if(nome_aluno_1[t] > nome_aluno_2[t]){
    cout << nome_aluno_2 << endl << nome_aluno_1;
}
if(nome_aluno_2[t] > nome_aluno_1[t]){
    cout << nome_aluno_1 << endl << nome_aluno_2;
}

return 0;
}
