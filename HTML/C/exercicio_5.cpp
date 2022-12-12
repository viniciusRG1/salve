#include <iostream>
#include <bits/stdc++.h>
#define quadrado 3
int main(){

int matriz[3][3];

for(int tempo = 0; tempo < quadrado; tempo++){

    for(int time = 0; time < quadrado; time++){

        std::cin >> matriz[tempo][time];

    }

}
int multiplicador;

std::cin >> multiplicador;

for(int tempo = 0; tempo < quadrado; tempo++){

    for(int time = 0; time < quadrado; time++){

        std::cout << matriz[tempo][time];
    }

}

for(int tempo = 0; tempo < quadrado; tempo++){

    for(int time = 0; time < quadrado; time++){

        matriz[tempo][time] = matriz[tempo][time] * multiplicador;

    }

}

std::cout << std::endl;
for(int tempo = 0; tempo < quadrado; tempo++){

    for(int time = 0; time < quadrado; time++){

        std::cout << matriz[tempo][time] << " ";
    }

    std::cout<< std::endl;
}

return 0;
}
