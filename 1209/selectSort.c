#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//funzione per generare numeri casuali
void casuale(int arr[], int n){
	srand(time(0));
	rand()%100;
}
//funzione per eseguire l'ordinamento per selezione

void selectionSort(int arr[], int n){
	int i,j,min_idx, temp;

	//scorri arraverso tutti gli elementi dell'array
	for(i=0; i<n-1; i++){
		//trova l'indice del valore minimo nell'array non ordinato
		min_idx=i;
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[min_idx]){
				min_idx=j;
			}
		}
		//scambia il valore minimo trovato con il primo elemento non ordinato 
		temp=arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
}

//funzione per stampare l'array
void printArray(int arr[], int n){
	for(int i=0; i<n;i++){
		printf("%3d", arr[i]);
	}
	printf("\n");
}
//funzione principale
int main(){
	int arr[]={5,65,40,20,34};
	int n= sizeof(arr)/sizeof(arr[0]);

	printf("Array originale: \n");
	printArray(arr, n);

	selectionSort(arr, n);
	printf("Array ordinato: \n");
	printArray(arr, n);

	return 0;
}
