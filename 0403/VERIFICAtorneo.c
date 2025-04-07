#include <stdio.h>
#include <string.h>

#define maxNome 50
#define PartiteMax 100

// Struttura per memorizzare i dati di una partita
struct Partita {
    char squadraCasa[maxNome];
    char squadraOspite[maxNome];
    int goalCasa;
    int goalOspite;
};

// Struttura per memorizzare i dati di un torneo(tabella)
struct Torneo {
    
    //è un array di tipo struttura, la tabella si chiama partite
    struct Partita partite[PartiteMax];
    int numeroPartite;
};

// Funzione per leggere i dati delle partite da un file
int leggiPartiteDaFile(struct Torneo *torneo, const char *nomeFile) {
    
    //apriamo il file in modalità lettura
    FILE *file = fopen(nomeFile, "r");
    
    //verifichiamo che il file non abbia problemi
    if (file == NULL) {
        printf("Errore nell'apertura del file");
        return -1;
    }

    int numeroPartite = 0;
    
    // Legge le partite dal file, una per riga
    
    while (fscanf(file, "%s %s %d %d",
                  (*torneo).partite[numeroPartite].squadraCasa,
                  (*torneo).partite[numeroPartite].squadraOspite,
                  &(*torneo).partite[numeroPartite].goalCasa,
                  &(*torneo).partite[numeroPartite].goalOspite) == 4) {
        numeroPartite++;
    }

    //chiude il file
    fclose(file);
    
    // Aggiorna il numero di partite nel torneo
    (*torneo).numeroPartite = numeroPartite;
    
    // Restituisce il numero di partite lette
    return numeroPartite;
    
}

// Funzione per calcolare i punti di una squadra

int calcolaPuntiSquadra(const struct Torneo *torneo, int numeroPartite, const char *nomeSquadra) {
    int punti = 0;
    
     // Scorre tutte le partite del torneo
    for (int i = 0; i < numeroPartite; i++) {
        
// Verifica se la squadra specificata ha giocato in casa
        if (strcmp((*torneo).partite[i].squadraCasa, nomeSquadra) == 0) {
            
            // Calcola i punti in base al risultato della partita
            if ((*torneo).partite[i].goalCasa > (*torneo).partite[i].goalOspite) {
                punti += 3; // Vittoria in casa: 3 punti
            } else if ((*torneo).partite[i].goalCasa == (*torneo).partite[i].goalOspite) {
                punti += 1; // Pareggio in casa: 1 punto
            }
        }


    // Verifica se la squadra specificata ha giocato in trasferta
    
        else if (strcmp((*torneo).partite[i].squadraOspite, nomeSquadra) == 0) {
            
            // Calcola i punti in base al risultato della partita
            if ((*torneo).partite[i].goalOspite > (*torneo).partite[i].goalCasa) {
                punti += 3; // Vittoria in trasferta: 3 punti
                
            } else if ((*torneo).partite[i].goalOspite == (*torneo).partite[i].goalCasa) {
                punti += 1; // Pareggio in trasferta: 1 punto
            }
        }
    }
    return punti; // Restituisce il totale dei punti della squadra
}

// Funzione per stampare le partite in ordine alfabetico per squadra di casa
void stampaPartiteAlfa(const struct Torneo *torneo, int numeroPartite) {
    struct Partita partiteOrdinate[PartiteMax];
    
    // Copia le partite nell'array di ordinamento
    for (int i = 0; i < numeroPartite; i++) {
        partiteOrdinate[i] = (*torneo).partite[i];
    }

    // Ordina le partite per squadra di casa
    for (int i = 0; i < numeroPartite - 1; i++) {
        for (int j = i + 1; j < numeroPartite; j++) {
            if (strcmp(partiteOrdinate[i].squadraCasa, partiteOrdinate[j].squadraCasa) > 0) {
                struct Partita temp = partiteOrdinate[i];
                partiteOrdinate[i] = partiteOrdinate[j];
                partiteOrdinate[j] = temp;
            }
        }
    }

    // Stampa le partite ordinate
    for (int i = 0; i < numeroPartite; i++) {
        printf("%s - %s: %d - %d\n",
               partiteOrdinate[i].squadraCasa, partiteOrdinate[i].squadraOspite,
               partiteOrdinate[i].goalCasa, partiteOrdinate[i].goalOspite);
    }
}

// Funzione per scrivere i dati delle partite di una squadra in un file
void scriviPartiteSquadraSuFile(const struct Torneo *torneo, int numeroPartite, const char *nomeSquadra, const char *nomeFile) {
    FILE *file = fopen(nomeFile, "w");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

//verifica se la squadra scelta ha giocato, se è così scrive le partite nel nuovo file
    for (int i = 0; i < numeroPartite; i++) {
        if (strcmp((*torneo).partite[i].squadraCasa, nomeSquadra) == 0 ||
            strcmp((*torneo).partite[i].squadraOspite, nomeSquadra) == 0) {
            fprintf(file, "%s - %s: %d - %d\n",
                    (*torneo).partite[i].squadraCasa, (*torneo).partite[i].squadraOspite,
                    (*torneo).partite[i].goalCasa, (*torneo).partite[i].goalOspite);
        }
    }

//chiude il file
    fclose(file);
}

int main() {
    struct Torneo torneo;
    
    //memorizza nella variabile numeroPartite il numero di partite totali dal file partite.txt
    int numeroPartite = leggiPartiteDaFile(&torneo, "partite.txt");


    //se il numeroPartite è maggiore di 0 ci stampa il numero delle partite totali giocate
    if (numeroPartite > 0) {
        printf("Partite lette dal file: %d\n", numeroPartite);

    //chiede il nome della squadra di cui vogliamo sapere i punti(in base a se ha vinto o pareggiato)
        char squadra[maxNome];
        printf("Inserisci il nome della squadra per calcolare i punti: ");
        scanf("%s", squadra);


    //ci restituisce i punti della squadra che abbiamo scelto
        int punti = calcolaPuntiSquadra(&torneo, numeroPartite, squadra);
        printf("Punti della squadra %s: %d\n", squadra, punti);
    //ci restituisce le partite della squadra in ordine alfabetico
        printf("\nPartite in ordine alfabetico per squadra di casa:\n");
        stampaPartiteAlfa(&torneo, numeroPartite);

    //chiede il nome del nuovo file in cui salvare le partite giocate dalla squadra
        char nomeFileSquadra[100];
        printf("\nInserisci il nome del file per salvare le partite della squadra: ");
        scanf("%s", nomeFileSquadra);

        scriviPartiteSquadraSuFile(&torneo, numeroPartite, squadra, nomeFileSquadra);
        printf("Dati della squadra %s salvati nel file %s\n", squadra, nomeFileSquadra);
    }

    return 0;
}
