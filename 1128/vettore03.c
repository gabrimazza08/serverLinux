#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int somma=0;
	srand(time(0));
	int dadi[3];
	for(int i=0; i<3; i++)
		dadi[i]=rand()%(6-1+1)+1;
	printf("Ho generato i seguenti numeri:\n");
	for(int i=0; i<3; i++){
		printf("%3d",dadi[i]);
		somma = somma+dadi[i];
	}
	printf("\n");
	printf("La somma è: ");
	printf("%d",somma);
	printf("\n");
return 0;
}
