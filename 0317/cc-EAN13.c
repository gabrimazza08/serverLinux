//prendi in input 12 cifre
//leggili da destra a sinistra
//deve essere(da destra a sinistra) Dispari Pari Dispari Pari e così via
//i numeri pari vanno sommati e i dispari triplicati
//sommare tutto e fare %10 darà il resto r
//num di controllo=10-r SE il r=0 numero di controllo=0

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 12
int main(){
	srand(time(0));
	int cEAN[N];
	for(int i=0; i<N; i++){
		cEAN[i]=rand()%11+1;
		i++;
	}
	printf("%d",cEAN[



return 0;
}
