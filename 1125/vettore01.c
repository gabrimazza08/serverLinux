#include <stdio.h>
int main(){
	int numeri[5];
	for(int i=0; i<5; i++){
		printf("Iserisci un numero intero: \n");
		scanf("%d", &numeri[i]);
	}
	printf("Hai inserito i seguenti numeri:\n");
	for(int i=0; i<5; i++){
		printf("%3d",numeri[i]);
	}
printf("\n");
return 0;

}
