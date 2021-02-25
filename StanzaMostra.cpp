#include "StanzaMostra.h"
#include <iostream>
#include<cstdlib>

using namespace std;

StanzaMostra::StanzaMostra()
{
    descrizione = "";
    titolo = "";
}

void StanzaMostra::setdescrizione(string s){

    descrizione = s;

}

void StanzaMostra::settitolo(string s){

    titolo = s;

}

string StanzaMostra::getdescrizione(){

    return(descrizione);

}

string StanzaMostra::gettitolo(){

    return(titolo);

}

bool StanzaMostra::operator==(StanzaMostra s){

    return((gettitolo()==s.gettitolo()) && (getdescrizione()==s.getdescrizione()));

}

ostream& operator<<(ostream& os,  StanzaMostra& s) //sovraccarico output
{
    os<<"Titolo: "<<s.gettitolo()<<",Descrizione: "<<s.getdescrizione();
    return(os);
}
//Implementaione di Stanzamostra.h Albano Giovanni
