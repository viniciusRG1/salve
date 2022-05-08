
#include <iostream>
#include <bits/stdc++.h>
#define a 10
#define b 100

using namespace std;



int main (){
    int numero = 0;
    int t = 0;
    int y = 0;
    int B = 0;
    int A = 1;
    int C = 0;
    int matriz[a][b];
    int maior = -999999999;
    cout << "escolhe o numero de elemento q vc quer \n";
    cin >> numero;
    while(numero >= 10){
        numero = numero - 10;
        B = B + 1;
    }
    while(B > 0){
        for(C = 0; C < 10; C++){
            cin >> matriz[A][C];
        }
        C = 0;
        B = B - 1;
        A = A + 1;
    }

    for(C = 0; C < numero; C++){
            cin >> matriz[B][C];
        }

    if(B >= 1){
        while(y < B){
            while(t <= 10){
                if( maior < matriz[t][y]){
                    maior = matriz[t][y];
                    t++;
                }else{
                    t++;
                }
            }
        y++;
        t = 0;
       }
        while(t <= numero){
                if(maior < matriz[t][y]){
                    maior = matriz[t][y];
                    t++;
                }else{
                    t++;
                }
        }
    }else{
       while(t <= numero){
                if(maior < matriz[t][y]){
                    maior = matriz[t][y];
                    t++;
                }else{
                    t++;
                }
        }
    }
cout << "o maior é " << maior;
return 0;
}


