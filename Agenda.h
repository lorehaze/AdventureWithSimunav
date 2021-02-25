#ifndef AGENDA_H
#define AGENDA_H

#include "Dizionario.h"
#include "Appunto.h"
#include "Lista.h"
#include "servizioLista.h"
//Modifica PMF(struttura)

class Agenda
{
public:
     Agenda();
     void Scrivi();
     void Leggi();
     void Cancella();

private:
    Dizionario<string,int> elementi; /*struttura che conterr� i codici univoci dei file dell' agenda */
    Lista<string> lista_codici; 	 /*conterr� i codici ai fini della cancellazione */
    inline void CaricaCodici(); 			 /*caricher� i codici dal file sul dizionario */
    inline void CancellaSingolo();          /* cancella il singolo elemento dell'agenda*/
    inline void CancellaTutto(); 			 /*cancella tutti gli elementi dell'agenda*/
    inline void SalvaCodici(); 			 /*caricher� i codici dal file sulla lista eccetto quello da cancellare e verr� cancellato dal dizionario*/
    inline void AggiornaFile();   			 /*aggiorner� il file contenete i codici dopo l'operazione di cancellazione di un elemento*/
    inline void CancellaCodice(string);     /*canceller� dalla lista dei codici il codice passato come parametro*/
    inline void CancellaCodici(); 			 /*canceller� tutti i codici presenti nel file e nel dizionario*/
};

#endif // AGENDA_H
