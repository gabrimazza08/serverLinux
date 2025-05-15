//lettura in input di tre punti
//calcolo perimetro e semi perimetro(calcola distanza tra i punti)
//calcola area


#include <stdio.h>
#include <math.h>


//definizione struttura
struct punto{
	float x;
	float y;
};


//funzione per calcolare la distanza tra due punti

float distanza(struct punto a,struct punto b){
	float risultato= sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));

return risultato;
}


int main(){
	struct punto p1, p2, p3;
	float lato1, lato2, lato3, perimetro, area, sp;

	//facciamo inserire all'utente le coordinate dei 3 punti

	printf("inserisci le coordinate del primo punto\n");
	scanf("%f %f", &p1.x, &p1.y);
	printf("inserisci le coordinate del secondo punto \n");
	scanf("%f %f", &p2.x, &p2.y);
	printf("inserisci le coordinate del terzo punto \n");
	scanf("%f %f", &p3.x, &p3.y);

	//richiamiamo la funzione

	lato1= distanza(p1, p2);
	lato2= distanza(p2,p3);
	lato3= distanza(p3,p1);

	//calcoliamo perimetro e semiperimetro

	perimetro= lato1+lato2+lato3;
	sp= perimetro/2;

	//dati perimetro e sp calcoliamo l'area
	area=sqrt(sp*(sp-lato1)*(sp-lato2)*(sp-lato3));

	//stampiamo perimetro e area fermandoci alle prime 3 cifre decimali

	printf("Il perimetro del triangolo è: %.3f\n", perimetro);
	printf("l'area del triangolo è: %.3f\n", area);


return 0;
}
