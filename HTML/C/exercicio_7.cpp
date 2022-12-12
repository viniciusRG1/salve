#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

struct pessoa{

    char nome[20];
    int idade;
    float peso;
    float altura;

};

int main(){

    struct pessoa pessoas[3];
    for(int local = 0; local < 3; local++){
        cin >> pessoas[local].nome >> pessoas[local].idade >> pessoas[local].peso >> pessoas[local].altura;
    }

    for(int local = 0; local < 3; local++){
        cout << pessoas[local].nome << pessoas[local].idade << pessoas[local].peso << pessoas[local].altura;
    }

return 0;
}
