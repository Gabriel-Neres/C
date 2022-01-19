#include <iostream>
#include <stack>

using namespace std;


int main(){
    
    stack <string> cartas;
    
    cartas.push("rei de copas");
    cartas.push("rei de Espadas");
    cartas.push("rei de Ouros");
    cartas.push("rei de Paus");

    cout<< "Tamanho da pilha : "<< cartas.size() << "\n";
    cout<< "Carta do topo: "<< cartas.top() <<"\n";
    
    cartas.pop();
    cout<< "Tamanho da pilha : "<< cartas.size() << "\n";
    cout<< "Nova Carta do topo: "<< cartas.top() <<"\n";

    system("pause");
    return 0;
}