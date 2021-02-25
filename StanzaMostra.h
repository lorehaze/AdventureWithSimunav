#ifndef STANZAMOSTRA_H_INCLUDED
#define STANZAMOSTRA_H_INCLUDED
//STANZA MOSTRA CHE REALIZZA LA FUNZIONE DI MESSA A VIDEO DELLA STANZA
#include<string>

using namespace std;

class StanzaMostra
{
    public:
        StanzaMostra();
        void setdescrizione(string);
        string getdescrizione();
        void settitolo(string);
        string gettitolo();
        bool operator == (StanzaMostra);
    private:
        string descrizione,titolo;
};

//HEADER AGGIUNTO DA ALBANO GIOVANNI


#endif // STANZAMOSTRA_H_INCLUDED
