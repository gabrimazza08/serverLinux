#include <stdio.h>
int main()
{
	char c,ccom;
	printf("Inserisci una sequenza di A T C e G: \n");
	c=getchar();
	while(c!='\n'){
		switch(c){
		case'A':
			ccom='T';break;
	
		case'T':
			ccom='A';break;
	
		case'C':
			ccom='G';break;
	
		case'G':
			ccom='C';break;
		default:
			printf("C'è un errore nella sequenza");break;
		}
	putchar(ccom);
	c=getchar();

	}
	printf("\n");
	return 0;
}
