/*
    SUP che prende da riga di comando una frase e chiama funzioni che svolgono le seguenti operazioni,
    stampando per ognuna il risultato. Tutte le funzioni devono restituire void.
     Trova la lunghezza della stringa senza usare funzioni di libreria
     Crea una nuova stringa che contiene tutti i caratteri della stringa originale, ma separati da un
    carattere a scelta dell'utente. Esempio: "ciao" '@' diventa "c@i@a@o"
     Restituisce una nuova stringa che l'invertita rispetto all'originale.
     Conta il numero di parole, intese come delimitate da spazi, anche multipli e ad inizio stringa.
     Conta il numero di cifre e numero di segni di punteggiatura nella frase.
     Funzione che trova il carattere con più occorrenze e comunica al chiamante il carattere in questione
    e il numero di occorrenze.
*/

#include <iostream>
#include <cstring>
#include "voidFunctions.hpp"

using namespace std;

int main ()
{
    char frase [] = " Ciao come stai? Tutto bene grazie! ";
    
    //punto 1
    int len = 0;
    string_lenght (frase, len);
    cout << endl << "Lunghezza della stringa: " << len << endl;
    //OK

    

    return 0;
}