#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int ricParziale(int a[], int x){
	int i=0;
	int trovato= -1;
	while(i<N && trovato<0){
		if(a[i]==x){
			trovato=1;
		}
		else{
			i+=1;
		}
	}
	return trovato;
}

int ricCompleta(int a[], int x){
	int i=0;
	int cont=0;
	while (i<N){
		if(a[i]==x){
			cont++;
		}
		i++;
	}
	return cont;
}

void popola(int a[N]){
	srand(time(0));
	for(int i=0;i<N; i++){
		a[i]=rand()%20+1;
	}
	return a;
}

void stampaArr(int a[]){
	for(int i=0; i<N; i++){
		printf("%3d", a[i]);
	}
	printf("\n");
	return a;
}

int main(int x){


	printf("dammi il valore da cercare");
	scanf("%d",&x);
	popola(a[]);
	ricParziale(a[],x);
	ricCompleta(a[]);
return 0;
}

