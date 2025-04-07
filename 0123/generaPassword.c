#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main(){
	srand(time(0));
	char caratteri[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzèòàù!?";

	char password[11];
	for(int i =0; i<10;i++){
		int k=rand()%70;
		password[i]=caratteri[k];
	}
	password[10]='\0';
	printf("%s", password);

	return 0;
}
