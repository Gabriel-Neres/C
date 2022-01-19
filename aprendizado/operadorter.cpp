#include <iostream>

using namespace std;

int main(){

    int n1, n2, nota;
    string res;

    cout<<"Digite sua primeira nota: "<<endl;
    cin>>n1;
    cout<<"Digite sua segunda nota: "<<endl;
    cin>>n2;

    nota = (n1+n2)/2;

    res = (nota >= 60) ? "Aprovado" : "Reprovado";
    
    cout<<"Voce esta "<<res<<endl;

system("pause");
return 0;
}