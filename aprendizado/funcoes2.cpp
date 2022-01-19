#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();
int main(int agrc, float *argv){

    soma();
    soma(32,36);

    return 0;
}
void soma(int n1, int n2){
    int re;
    re = n1+n2;
    cout<<"A soma de "<<n1<<" e "<<n2<<" = "<<re<<endl;
}
void soma(){
    int n1,n2,re;
    n1 = 10;
    n2 = 20;
    re = n1+n2;
    cout<<"A soma de "<<n1<<" e "<<n2<<" = "<<re<<endl;
}