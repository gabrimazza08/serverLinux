#include <stdio.h>
int main()
{
char c,A,T,C,G,ccom;
c=getchar();
switch(c){
	case'A':
		ccom='T';break;
	case'T':
		ccom='A';break;
	case'C':
		ccom='C';break;
	case'G':
		ccom='C';break;
	default:
		printf("Errore");break;
	}
putchar(ccom);
return 0;
}
