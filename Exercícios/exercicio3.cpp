#include <iostream>
using namespace std;
int main(int argc, char** argv) {
int fat, n1;
cout<<"Digite um numero:"<<endl;
cin>>n1;
cout<<"Fatorial de "<<n1<<endl;
fat=n1;
for(n1;n1>1;n1--){
cout<<fat<<"x"<<n1-1<<"="<<fat*(n1-1)<<endl;
fat=fat*(n1-1);}
return 0;
}