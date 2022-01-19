#include <iostream>

using namespace std;

void texto();
void soma(int x, int n2);
int soma2(int n1, int n2);
void vet(string tpcar [4]);

int main(int argc, char** argv) {
	int resultado;
	string carros[4] = {"BMW","MERCEDES","FIAT","RENAULT"};
	
	cout<<"TRABALHANDO COM FUNÇÕES \n\n";
	texto();
	soma(3,2);
	resultado = soma2(15,23);
	cout<<resultado<<endl;
	vet (carros);


system("pause");	
return 0;	
}

void texto(){
	cout<<"Gabriel Neres o DEV!"<<endl;
}
void soma(int n1, int n2){
	
	cout<<"soma dos valores: "<<n1+n2<<endl;
	}
int soma2(int n1, int n2){
	
	return n1+n2;}
void vet(string tpcar [4]){
	for (int i = 0; i<4 ; i++){
		cout<<"Tipos de carros: "<<tpcar[i]<<endl;
	}
}

