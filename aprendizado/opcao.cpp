#include <iostream>

using namespace std;

int main(){

    int number = 1;

    switch(number){
        case 1 : 
        case 2 : cout<<"numero escolhido e 2"<<endl;break;
        case 3 : 
        case 4 : cout<<"numero escolhido e 4"<<endl;break;
        default : cout<<"numero errado"<<endl;
    }

return 0;
}