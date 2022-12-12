
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int matriz[3][3];
int matriz_transposta(int matriz){

    int matriz_aux[3][3];
    for(int local = 0; local < 3; local++){
    for(int llocal = 0; llocal < 3; llocal++){
        matriz[local][llocal] = matriz_aux[local][llocal];
    }
}
for(int ocal = 0; ocal < 3; ocal++){
    for(int cal = 0; cal < 3; cal++){
        matriz_aux[ocal][cal] = matriz[3 - ocal][3 - cal];
    }
}

return 0;
}

int main(){
for(int local = 0; local < 3; local++){
    for(int llocal = 0; llocal < 3; llocal++){
        cin >> matriz[local][llocal];
    }
}

return 0;
}
