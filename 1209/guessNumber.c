#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

	int x,ntentativi,n;
	srand(time(0));
	x=rand()%100;
	ntentativi=0;
	while(ntentativi<7){
		printf("inserisci un numero da 1 a 100\n");
		scanf("%d",&n);
		if(n<x)
			printf("Il numero è troppo piccolo");
			else if(n>x)
				printf("Il numero è troppo grande");
			else
				printf("Hai indovinato il numero");
				ntentativi=2;
	}

	ntentativi++;

return 0;
}
