#include <iostream>
using namespace std;
int main (int argc, char** argv){
int n1, pos, neg;
pos=0;
neg=0;
for(n1=1;n1<=20;n1++){
cout<<"Digite 20 numeros entre eles positivos e negativos e tecle enter: "<<endl;
cin>>n1;
if(n1>=0){
pos=pos+n1;}
else{
if(n1<=0)
neg=neg+1;}
cout<<"A soma dos positivos é = "<<pos<<" e quantidade de numeros negativos sao= "<<neg<<endl;
cout<<endl;
}
system("pause");
return 0;
}