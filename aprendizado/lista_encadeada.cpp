#include <iostream>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
	}No;
	
//procedimento para inserir no inicio

void inserir_no_inicio(No **lista, int num){
	No *novo = malloc(sizeof(No));
	if(novo){
		novo -> valor = num;
		novo -> proximo = *lista;
		*lista = novo;
	}
	else{
		printf("erro ao alocar memoria!\n")
	}
}

int main(int argc, char** argv) {
	
	
	
	
	return 0;
}
