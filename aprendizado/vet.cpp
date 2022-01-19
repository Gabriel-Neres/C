#include<iostream>
#include<cstdlib>
using namespace std;
struct dados
{
  int matric;
  float CR;
};

void insercao (dados vetor[], int tam);
int
main ()
{
  dados vet[] = {
    13, 9.5, 23, 10, 19, 3
  };
  system ("cls");
  cout << "\nAntes da chamada da Funcao - INSERCAO\n";
  for (int x = 0; x < 3; x++)
    cout << "\n" << vet[x].matric << "\t" << vet[x].CR;
  cout << "\n";
  insercao (vet, 3);
  cout << "\n\nDepois da chamada da Funcao - INSERCAO\n";
  for (int x = 0; x < 3; x++)
    cout << "\n" << vet[x].matric << "\t" << vet[x].CR;
  cout << "\n\n";
  system ("pause");
}

void insercao (dados vet[], int tam)
{
  int j, i;
  dados aux;
  for (i = 1; i < tam; i++)
    {
      aux = vet[i];
      for (j = i; j > 0 && aux.CR < vet[j - 1].CR; j--)
	vet[j] = vet[j - 1];
      vet[j] = aux;
    }
}
