ù#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define M 10

void carica(int[], int);
void stampa(int[], int);
void ordina(int[], int);
int copiaNoDup(int[], int[], int[], int);

int main(){
  int V1[N], V2[N], VF[N];
  carica(V1,N);
  ordina(V1,N);
  int L2 = copiaNoDup(V1, V2, VF, N);
  stampa(V1,N);
  //stampa(V2,L2);
  //stampa(VF,L2);
  return 0;
}

void carica(int A[], int L){
  srand(time(0));
  for (int i=0; i<L; i++)
    A[i] = rand()%M + 1;
}

void stampa(int A[], int L){
  for (int i=0; i<L; i++){
    printf("%3d", A[i]);
  }
  printf("\n");
}

void ordina(int A[], int L){
	for(int i=0;i<L;i++){
		A[i]=B[i];
	}
	for(int i=0;



}

int copiaNoDup(int A[], int B[], int C[], int L){
  return 0;
}

