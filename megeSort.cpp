#include "megeSort.h"
#include <iostream>
using namespace std;

megeSort::megeSort()
{
    //ctor
}

megeSort::~megeSort()
{
    //dtor
}


void megeSort::mergeSortAction(int *vet, int siz){
    int meio = siz / 2;

	if( siz > 1 ){
		mergeSortAction(vet, meio);
		mergeSortAction(vet + meio, siz - meio);
		doMerge(vet, siz);
	}
}

void megeSort::imprimeArray(int *vet, int siz){
for(int i = 0; i<siz; i++)
      cout << vet[i] << " ";
   cout << endl;
}

void megeSort::doMerge(int *vet, int siz){
    int meio = siz / 2;
      int i = 0, j = meio, k = 0;
      int aux[siz];

      while( i < meio && j < siz ){
        if( vet[i] <= vet[j] )
          aux[k] = vet[i++];
        else
          aux[k] = vet[j++];
        k++;
      }

      if( i == meio )
        while( j < siz )
          aux[k++] = vet[j++];
      else
        while( i < meio )
          aux[k++] = vet[i++];

      for( i = 0; i < siz; i++ )
        vet[i] = aux[i];
}

