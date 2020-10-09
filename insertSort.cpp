#include "insertSort.h"
#include <iostream>
using namespace std;

insertSort::insertSort()
{
    //ctor
}

insertSort::~insertSort()
{
}

void insertSort::insertSortAction(int *vet, int siz)
{
   int chave, j;
   for(int i = 1; i<siz; i++) {
      chave = vet[i];
      j = i;
      while(j > 0 && vet[j-1]>chave) {
         vet[j] = vet[j-1];
         j--;
      }
      vet[j] = chave;
   }
}

void insertSort::imprimeArray(int *vet, int siz)
{
     for(int i = 0; i<siz; i++)
      cout << vet[i] << " ";
   cout << endl;
}
    //dtor

