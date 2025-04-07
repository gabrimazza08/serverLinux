#include <stdio.h>
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

void ordina(int V1[], int L){
	int pmin;
	int temp;
	for(int i=0;i<L;i++){
		pmin=i;
		for(int j=0;j<L;j++){
			if(V1[j]<V1[pmin]){
				pmin=j;
			}
		}
		temp=V1[pmin];
		V1[pmin]=V1[i];
		V1[i]=temp;
		}
	}
int copiaNoDup(int V1[], int V2[], int VF[], int L){
	V2[0]=V1[0];
	int j=1;
	int k=1;
	int L2=1;
	int pos;
	for(int i=1;i<L;i++){
		if(V1[i]!=V1[i-1]){
			V2[j]=V1[i];
			VF[j]=k;
			k=1;
			j++;
			L2++;
		}
		else{
		k++;
		}
		pos=j;
	}
	k++;
	VF[pos];
	printf("%d\n",j);
	return L2;
}
