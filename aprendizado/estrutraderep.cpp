#include <iostream>
using namespace std;

int main(){
    int cond = 0, cond1 = 0;

    while(cond <= 10){
        cout<<cond;
        if (cond == 5){
            break;
        }
        cond++;
        for(cond; cond<=10; cond++){
            cout<<cond;
        }
    }

    do{
        cout<<cond1;
        cond1++; 
    }while(cond1 <= 10);

system("pause");
return 0;
}