#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 7
#define M 5

void fusione(int a[], int b[], int c[], int dima, int dimb){
	//Scrivere il codice
	int i=0, j=0,k=0;
	while(i<dima && j<dimb){
		if(a[i]<b[j]
}
void ordina(int a[], int n);
void init(int a[],int dim);
void stampa(int a[], int dim);
int main(){
  int v1[N], v2[M], v3[N+M];
  
  srand(time(0));
  
  init(v1,N);
  printf("%15s","v1: ");
  stampa(v1,N);
  ordina(v1,N);
  printf("%15s","v1 ordinato: ");
	stampa(v1,N);
  
  init(v2,M);
  printf("%15s","v2: ");
  stampa(v2,M);
  ordina(v2,M);
  printf("%15s","v2 ordinato: ");
	stampa(v2,M);
	
  fusione(v1,v2,v3,N,M);
  printf("%15s","v3: ");
  stampa(v3,N+M);
	
  return 0;
}

void init(int a[], int dim){
	for (int i=0; i<dim; i++)
		a[i] = rand()%30;
}

void stampa(int a[], int dim){
	for (int i=0; i<dim; i++)
		printf("%d ",a[i]);
	printf("\n");
}

void ordina(int a[], int dim){
	for (int i=0; i<dim-1; i++){
		int pmin = i;
		for (int j=i+1; j<dim; j++)
			if (a[j]<a[pmin])
				pmin = j;
		int temp = a[pmin];
		a[pmin] = a[i];
		a[i] = temp;
	}
}
