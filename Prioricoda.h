//(@Integratore: Alex Spina)

#ifndef _PRIORICODA_H
#define _PRIORICODA_H

#include "Lista_vettore.h"
#include "Priorielem.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//realizzazione di una coda con priorità tramite una lista non ordinata
//valore di priorità minore indica priorità maggiore

template<class P> class Prioricoda {

public:

    //definizione di tipo
    typedef Priorielem<P> tipoelem;

    //costruttori
    Prioricoda();
    Prioricoda(const Prioricoda<P>&);

    //distruttore di default

    //operatori di specifica
    void creaprioricoda();
    void inserisci(tipoelem);
    tipoelem min() const;
    void cancellamin();

//OPERATORI INTEGRATI (SPINA)
    bool appartiene(tipoelem);
    bool insiemevuoto();



private:
    Lista_vettore<tipoelem> prioricoda;  //la coda con priorità di fatto è una lista

    friend ostream& operator<< (ostream& o, const Prioricoda<P>& p) //sovraccarico output
    {
        o<<p.prioricoda;
        return o;
    }

};


template<class P> Prioricoda<P>::Prioricoda() { //costruttore generico

    creaprioricoda();
}

template <class P> Prioricoda<P>::Prioricoda(const Prioricoda<P>& p) {//costruttore di copia

    creaprioricoda();
    prioricoda=p.prioricoda;
}

template<class P> void Prioricoda<P>::creaprioricoda() {//crea la coda con priorità

    prioricoda.crealista();
}

template<class P> void Prioricoda<P>::inserisci(tipoelem a) {//inserimento

    //in una lista non ordinata (in testa)
    typename Lista_vettore<tipoelem>::posizione indice=prioricoda.primolista();
    prioricoda.inslista(a, indice);
}

template<class P> Priorielem<P> Prioricoda<P>::min() const {//restituisce il minimo della coda

    tipoelem m,temp;
    if (!prioricoda.listavuota()) { //precondizione coda non vuota

        int indice=prioricoda.primolista(); //ricerca del minimo
        m=prioricoda.leggilista(indice); //impongo come minimo il primo elemento
        indice=prioricoda.succlista(indice); //inizio la scansione dal secondo elemento
        while (!prioricoda.finelista(indice)) {

            temp=prioricoda.leggilista(indice);
            if (temp<m) //se l'elemento è minore del minimo corrente (minore nel senso che la priorità è più alta)
                m=temp;

            indice=prioricoda.succlista(indice);
        }
    }
    return m;
}

template<class P> void Prioricoda<P>::cancellamin() //elimina il minimo dalla coda
{
    tipoelem m,temp;
    if (!prioricoda.listavuota()) { //precondizione coda non vuota

        //Cella<tipoelem>* indice=prioricoda.primolista(); //ricerca del minimo
        int indice=prioricoda.primolista(); //ricerca del minimo
        m=prioricoda.leggilista(indice); //impongo come minimo il primo elemento
        indice=prioricoda.succlista(indice); //inizio la scansione dal secondo elemento
        while (!prioricoda.finelista(indice)) {

            temp=prioricoda.leggilista(indice);
            if (temp<m) //se l'elemento è minore del minimo corrente (minore nel senso che la priorità è più alta)
                m=temp;

            indice=prioricoda.succlista(indice);
        } //fine della ricerca del minimo
        indice=prioricoda.primolista(); //seconda scansione per eliminare il minimo
        bool trovato=false;
        while (!prioricoda.finelista(indice) && !trovato) {

            temp=prioricoda.leggilista(indice);
            if (temp==m) { //se l'elemento corrente è il minimo

                trovato=true;
                prioricoda.canclista(indice); //eliminalo
            }
            else indice=prioricoda.succlista(indice);
        }
    }
}



//OPERATORE PER VERIFICARE CHE UN DETERMINATO ELEMENTO APPARTENGA O MENO ALLA CODA CON PRIOORITA'

template <class P> bool Prioricoda<P>::appartiene(tipoelem a)
{

bool trovato = false;
tipoelem k;
int ultimo = !prioricoda.listavuota();
if (!prioricoda.listavuota()){
        int indice = prioricoda.primolista();
while((indice != ultimo) && !trovato)
{
    k = prioricoda.leggilista(indice);
    if(k == a)
        trovato = true;
        else
            indice = prioricoda.succlista(indice);
        }
        }
        return(trovato);



}


//OPERATORE CHE RITORNA UNA CODA CON PRIORITA' VUOTA

template <class P> bool Prioricoda<P>::insiemevuoto() {

        return (prioricoda.listavuota());
}



#endif
