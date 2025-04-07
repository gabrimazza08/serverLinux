#include <stdio.h>
int main(){
	FILE * in;
	int n;
	//apriamo il file
	in=fopen("numeri.txt","r");
	//leggiamo il file
	fscanf(in,"%d",&n);
	//chiudiamo il file
	fclose(in);
	printf("Il numero letto è: %d\n",n);
	return 0;
	}
