#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	string veiculo = "carro";
	string *pv;
	
	pv = &veiculo; //ponteiro pv recebe o endereço(&) da variável carro
	
	cout<<pv;
	
	*pv = "moto"; //no enderço apontado por *pv adicione o valor moto
	
	cout<<"\n"<<veiculo<<"\n"<<*pv;
	
	return 0;
}
