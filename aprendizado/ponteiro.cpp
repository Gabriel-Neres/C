#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	string veiculo = "carro";
	string *pv;
	
	pv = &veiculo; //ponteiro pv recebe o endere�o(&) da vari�vel carro
	
	cout<<pv;
	
	*pv = "moto"; //no ender�o apontado por *pv adicione o valor moto
	
	cout<<"\n"<<veiculo<<"\n"<<*pv;
	
	return 0;
}
