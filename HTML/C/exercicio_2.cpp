
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int NOTA_A = 0;
    int NOTA_B = 0;
    int NOTA_C = 0;
    int NOTA_E = 0;
    int MEDIA = 0;

    cout << "escreva suas NOTAS \n  ";
    cin >> NOTA_A >> NOTA_B >> NOTA_C >> NOTA_E;

    MEDIA = NOTA_A + (NOTA_B * 2) + (NOTA_C * 3) + NOTA_E;
    MEDIA = MEDIA/3;

    if(MEDIA >= 9){
        cout << "nota A";
    }else if(MEDIA >= 7,5 && MEDIA < 9){
        cout << "nota B";
    }else if(MEDIA < 7,5 && MEDIA >= 6){
        cout << "nota C";
    }else if(MEDIA < 6 && MEDIA >= 4){
        cout << "nota D";
    }else{
        cout << "nota E";
    }

return 0;
}
