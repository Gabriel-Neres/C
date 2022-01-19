/*maiores de 18 e menores de 70 anos são, por lei, obrigados a votar*/
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int idade;
cout<<"Sua idade: "<<endl;
cin>>idade;
if((idade>=18) and (idade<=70)){
cout<<"Eleitor obrigatorio"<<endl;
}
else
{cout<<"Nao eleitor"<<endl;
}
return 0;}