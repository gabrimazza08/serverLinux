#include <stdio.h>
int main(){
	FILE * out;
	int n;
	//apriamo il file
	out=fopen("numeri.txt","a");
	//scriviamo il file con append
	fprintf(out,"%d\n",17);
	//chiudiamo il file
	fclose(out);
 return 0;
}
