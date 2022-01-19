#include <iostream>
using namespace std;
int main (int argc, char *argv ){
//requisitos: Altura>1,75m e Idade<15 anos
float altura, idade;
char nome[20];
cout<<"Digite seu nome:"<<endl;
cin>>nome;
cout<<"Ola , para participar do time de voleibol responda as seguintes perguntas!"<<endl;
cout<<"Qual a sua altura? Ex: 1.75"<<endl;
cin>>altura;
cout<<"Qual a sua idade? Ex: 15"<<endl;
cin>>idade;
if((altura>1.75)and(idade<15)){
cout<<"Selecionado(a)."<<endl;
cout<<"Parabens "<<nome<<", voce esta no time"<<endl;}
else
{
cout<<"Nao selecionado."<<endl;
cout<<"Infelizmente voce nao esta no time."<<endl;}
return 0;
}
