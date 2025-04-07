/*scrivi un programma che memorizza all'interno di un vettore N numeri interi dopo l'inserimento
	è necessario visualizzare a video i numeri ad ordine inverso*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N  10

void popola(int a[]);
void inverti(int a[]);


void  popola(int a[]){
	srand(time(0));
	printf("l'array non invertito è: \n");
	for(int i=0; i<N; i++){
		a[i]=rand()%100;
		printf("%3d", a[i]);
	}
	printf("\n");
}

void inverti(int a[]){
	printf("l'array invertito è: \n");
	for(int i=N-1; i>=0; i--){
		printf("%3d", a[i]);
	}
	printf("\n");
}
int main(){
	int a[N];
	popola(a);
	inverti(a);

return 0;
}
