#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int numeri[5];
	for(int i=0; i<5; i++)
		numeri[i]=rand()%100;
	printf("Ho generato i seguenti numeri:\n");
	for(int i=0; i<5; i++)
		printf("%3d", numeri[i]);
	printf("\n");
return 0;
}
