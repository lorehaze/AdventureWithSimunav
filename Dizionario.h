//(@Integratore: Alex Spina)

// Dizionario con vettore non ordinato – Creatore: D’Aversa – Integratore: De Rinaldis
#ifndef DIZIONARIO_H_INCLUDED
#define DIZIONARIO_H_INCLUDED

#include "Entry.h"
#define DIME 1000

template<typename K, class A> class Dizionario {

typedef Entry<K, A> entry;

public:
	Dizionario();
	~Dizionario();
	void crea();
	bool appartiene(const K);
	void inserisci(K, A);
	A recupera(const K);
	void aggiorna(const K, A);
	void cancella(const K);

private:

	unsigned int lunghezza;
	entry elementi[DIME];
};

template<typename K, typename A>
Dizionario<K, A>::Dizionario(){

    crea();
}

template<typename K, typename A>
void Dizionario<K, A>::crea(){

    lunghezza = 0;
}

template<typename K, typename A>
Dizionario<K, A>::~Dizionario(){

}

template<typename K, typename A>
bool Dizionario<K, A>::appartiene(const K k){

    bool trovato = false;

    for(int i = 0; i<lunghezza && trovato == false;i++)
        if(elementi[i].get_key() == k) trovato = true;

    return trovato;
}

template<typename K, typename A>
void Dizionario<K, A>::inserisci(K k, A a){

    elementi[lunghezza].set_key(k);
    elementi[lunghezza].set_value(a);
    lunghezza++;
}

template<typename K, typename A>
void Dizionario<K, A>::cancella(K k){

    bool trovato = false;

    for(int i = 0; i<lunghezza && trovato == false;i++){

        if(elementi[i].get_key() == k){

            trovato = true;

            for(int j = i; j<lunghezza; j++){

                elementi[j].set_key(elementi[j+1].get_key());
                A h = elementi[j+1].get_value();
                elementi[j].set_value(h);
            }

            lunghezza--;
        }
    }
}

template<typename K, typename A>
A Dizionario<K, A>::recupera(K k){

    bool trovato = false;
    int i = -1;

    do{
        i++;
        if(elementi[i].get_key() == k) trovato = true;

    }while(!trovato && i<lunghezza);

    A b = elementi[i].get_value();

    return b;
}


template<typename K, typename A>
void Dizionario<K, A>::aggiorna(K k, A a){

    bool trovato = false;

    for(int i = 0; i<lunghezza && trovato == false;i++){

        if(elementi[i].get_key() == k){

            trovato = true;
            elementi[i].set_value(a);
        }
    }
}

#endif // DIZIONARIO_H_INCLUDED


