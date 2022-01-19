#include <iostream>
using namespace std;
int main (int argc, char *argv ){
float altura, base, P, A;
cout<<"Perimetro e Area de um retangulo"<<endl;
cout<<"Digite a altura do seu retangulo"<<endl;
cin>>altura;
cout<<"Digite a base do retangulo"<<endl;
cin>>base;
if(base!=altura){
P=((altura*2)+(base*2));
A=base*altura;
cout<<"O perimetro é "<<P<<" metros";
cout<<" e a area do retangulo e "<<A<<" metros quadrado"<<endl;}
else
cout<<"Nao e um triangulo"<<endl;
system("pause");
return 0;