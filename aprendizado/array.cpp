#include <iostream>
using namespace std;

int main(){
    //int vetor[5] = {10,20,30,40,50};
    //int i = 0;

    //for(i ; i<sizeof(vetor)/4; i++){
        //cout<<vetor[i]<<endl;
    //}

    int matriz [3][3],cont,x = 0,n = 0,y;


    for(cont = 0; cont < 3; cont++){
        matriz[cont][x] = n;
        for(x = 0; x < 3; x++){
            matriz[cont][x] = x;
            
        }
        }

    cout<<"Linha 0 - > ";
    for(y = 0; y < 3; y++){
        cout<<matriz[0][y]<<" ";
    }
    cout<<"\nLinha 1 - > ";
    for(y = 0; y < 3; y++){
        cout<<matriz[1][y]<<" ";
    }
    cout<<"\nLinha 2 - > ";
    for(y = 0; y < 3; y++){
        cout<<matriz[2][y]<<" ";
    }

system("pause");
return 0;
}