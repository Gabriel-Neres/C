#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int a,b,c,aux;
setlocale(LC_ALL,"");
cout<<"digite um numero :"<<endl;
cin>>a;
cout<<"digite outro numero diferente do primeiro:"<<endl;
cin>>b;
cout<<"digite outro numero diferente do primiero e do segundo:"<<endl;
cin>>c;
cout<<"Seus numero escolhidos são :"<<a<<", "<<b<<", "<<c<<endl;
if((a!=b)and(b!=c)and(a!=c)){
if((a<b)and(c>a)and(c>b)){
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
else
if((b>a)and(b>c)and(a>c)){
aux=a;
a=c;
c=b;
b=aux;
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
else
if((a>c)and(a>b)and(b<c)){
aux=a;
a=b;
b=c;
c=aux;
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
else
if((a<b)and(b>c)and(c>a)){
aux=b;
b=c;
c=aux;
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
else
if((a>b)and(b>c)and(c<a)){
aux=a;
a=c;
c=aux;
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
else
if((c>a)and(a>b)){
aux=b;
b=a;
a=aux;
cout<<"O maior é "<<c<<", o do meio é "<<b<<", e o menor é "<<a<<endl;}
}
else{
cout<<"Os numero não são todos diferentes"<<endl;}
system("pause");
return 0;
}