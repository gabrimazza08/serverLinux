
/* Esercizio 1
Una stringa è semplicemente una raccolta ordinata di simboli selezionati da un alfabeto
che forma una parola; la lunghezza di una stringa è il numero di simboli che contiene.
Un esempio di una stringa di DNA di lunghezza 21 (il cui alfabeto contiene i simboli 'A',
'C', 'G' e 'T') è "ATGCTCAGAAAGGTCTTACG".
Input: una stringa di DNA lunga al massimo 1000.
Output: quattro numeri interi (separati da spazi) che contano il rispettivo numero di
volte in cui i simboli 'A', 'C', 'G' e 'T' ricorrono in s.
Set di dati di esempio
AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGAT
AGCAGC
Risultato atteso
20 12 17 21 */

#include <stdio.h>
#include <string.h>

int main(){
	//DICHIARAZIONE CARATTERI DEL DNA
	int a_dna=0, c_dna=0,g_dna=0,t_dna=0;

	//DIAMO COME DIMENSIONE MASSIMA DELLA STRINGA 1000
	char char_dna[1001];

	//LEGGIAMO SOLO I PRIMI 1000 CARATTERI
	scanf("%1000s", char_dna);

	//SCORRIAMO I CARATTERI DELLA STRINGA E AUMENTIAMO I CONTATORI
	for(int i=0; i< strlen(char_dna); i++){
		switch (char_dna[i]){
			case 'A':
				a_dna++;
				break;
			case 'T':
				t_dna++;
				break;
			case 'C':
				c_dna++;
				break;
			case 'G':
				g_dna++;
				break;
			default:
			//SE CI SONO VALORI CHE NON FANNO PARTE DEL DNA
				break;
		}
	}
	//STAMPA I RISULTATI
	printf("%d%3d%3d%3d\n",a_dna,t_dna,c_dna,g_dna);
return 0;

}
