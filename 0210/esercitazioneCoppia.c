//GRUPPO: MAZZA - MIGLIETTA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
int main(){
	char lunghezza1;
	char lunghezza2;
	char concatena;
	char str1[N];
	char str2[N];
//IL PROGRAMMA LEGGE IN INPUT LE DUE STRINGHE
	printf("inserisci la prima frase: \n");
	fgets(str1,N,stdin);
        printf("inserisci la seconda frase: \n");
        fgets(str2,N,stdin);
//CALCOLIAMO LA LUNGHEZZA DI STRINGA1 E STRINGA2
	lunghezza1=strlen(str1);
	lunghezza2=strlen(str2);
//TOGLIAMO L'ULTIMO CARATTERE DELLE DUE STRINGHE PER FAR SI CHE IL PROGRAMMA NON CALCOLI ANCHE L'INVIO
	str1[strlen(str1)-1]='\0';
	str2[strlen(str2)-1]='\0';

//SCRIVIAMO LA LUNGHEZZA DI STRINGA1 E STRINGA2
	printf("la stringa 1 e' lunga: %d%s",lunghezza1," caratteri \n");
	printf("la stringa 2 e' lunga: %d%s",lunghezza2," caratteri \n");
//CONCATENA LE DUE STRINGHE
	printf("la stringa concatenata è: %s\n",strcat(str1,str2));

//controlla se le str sono alfabeticamente
	if (strcmp(str1,str2) ==0) {
		printf("le stringhe sono alfabeticamente uguali");
	}

	else if(strcmp(str1,str2)<0){

		printf("la prima stringa viene prima della stringa 2");
	}
	else if(strcmp(str1,str2)>0){
		printf("la prima stringa viene dopo la stringa 2");
	}

return 0;
}
