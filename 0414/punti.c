#include <time.h>

#include <stdio.h>

#include <stdlib.h>

#define N 5



struct punto {

    float x;

    float y;

};



// funzione per calcolare le distanze dei punti dall'origine

void distanze(struct punto punti[]) {

    for (int i = 0; i < N; i++) {
        float distanzaAl2[N]
        distanzaAl2[i] = (punti[i].x)*(punti[i].x) + (punti[i].y)*(punti[i].y);

        float distanzePunti[N];

        distanzePunti[i]=distanzaAl2[i];

        printf("La distanza dall'origine al punto %d è: %.1f\n", i + 1, distanzaAl2);



        printf("tutte le distanze: \n %.1f \n",distanzePunti[i]);
    }
}



int distanzaMax(int distanzePunti, float distanzaAl2){

    for (int i=0;i<N;i++){

          int max=distanzaAl2;
    }
}
int main() {

    struct punto punti[N];

    srand(time(0));



    // genera casualmente i punti(range [-5.0; 5.0])

    for (int i = 0; i < N; i++) {

        punti[i].x = (rand() % 101 - 50) / 10.0;

        punti[i].y = (rand() % 101 - 50) / 10.0;

        printf("Il punto %d ha coordinate (%.1f, %.1f)\n", i + 1, punti[i].x, punti[i].y);

    }



    distanze(punti);



    return 0;

}

