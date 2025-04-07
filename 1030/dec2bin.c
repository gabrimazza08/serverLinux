#include <stdio.h>
int main()
{

//INSERISCI UN NUMERO DECIMALE E IL PROGRAMMA DEVE TRASFORMARLO IN BINARIO//

int n,p,q;
char s;
printf("Inserisci un numero:\n");
scanf("%d", &n);
p=1;
s="\n";
while(p<=n){
	p=p*2;
}
p=p/2;
while(p>0){
	q=n/p;
	putchar('0'+q+s);
	n=n%p;
	p=p/2;
}
return 0;
}
