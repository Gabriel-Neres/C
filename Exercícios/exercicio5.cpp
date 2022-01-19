#include <iostream>
using namespace std;
int main(int argc, char** argv) {
float altura , sexo;
char nome[10];
setlocale(LC_ALL,"");
cout<<"Olá qual o seu nome?"<<endl;
cin>>nome;
cout<<"olá , "<<nome<<", qual o seu sexo? masculino[1] ou feminino[2]"<<endl;
cin>>sexo;
cout<<"Qual é a sua altura?"<<endl;
cin>>altura;
float res;
if(sexo==1){
res=((72.7*altura)-58);
cout<<"Seu peso idel é "<<res<<" KG"<<endl;}
else{
if(sexo==2)
res=((62.1*altura)-44.7);
cout<<"Seu peso idel é "<<res<<" KG"<<endl;
}
system("pause");
return 0;
}
