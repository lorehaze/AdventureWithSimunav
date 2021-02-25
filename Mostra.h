#ifndef MOSTRA_H_INCLUDED
#define MOSTRA_H_INCLUDED

#include "Grafo.h"
#include "StanzaMostra.h"


class Mostra
{
public:
    Mostra();
    void creamostra();
    typename Grafo<StanzaMostra,unsigned char>::nodo getstanzacorrente();
    void setstanzacorrente(typename Grafo<StanzaMostra,unsigned char>::nodo);
    Lista<typename Grafo<StanzaMostra,unsigned char>::nodo> getstanzeadiacenti();
    typename Grafo<StanzaMostra,unsigned char>::nodo getiniziale();
    StanzaMostra leggiStanza(typename Grafo<StanzaMostra, unsigned char>::nodo);
    void scriviStanza(typename Grafo<StanzaMostra, unsigned char>::nodo , const StanzaMostra& );

private:
    typename Grafo<StanzaMostra,unsigned char>::nodo stanzainiziale;
    typename Grafo<StanzaMostra,unsigned char>::nodo stanzacorrente;
    Grafo<StanzaMostra,unsigned char> grafomostra;
    string titoli[25];
    string descrizioni[25];
};

//HEADER aggiunto da ALBANO GIOVANNI

#endif // MOSTRA_H_INCLUDED
