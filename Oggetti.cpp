#include "Oggetti.h"

Oggetti::Oggetti()
{
    fo = 0;
}

void Oggetti::inserisci(Oggetto oggetto)
{
    oggetti[++fo] = oggetto;
}

int Oggetti::get_n_oggetti()
{
    return fo;
}

Oggetto Oggetti::get_oggetto(int oggetto)
{
    return oggetti[oggetto];
}

//MODIFICA D-R(D'Orsi):Negozio + Banca
int Oggetti::get_oggetto_indice_by_codice( int code )
{
    for( int i = 1; i <= fo; i++ )
    {
        if( oggetti[i].get_codice() == code )
            return i;
    }
    return -1;
}

void Oggetti::set_luogo(int oggetto, int luogo)
{
    oggetti[oggetto].set_luogo(luogo);

}



//inizio modifiche ROSA CHIARAPPA
void Oggetti::set_rubato(int oggetto, int rubato)
{
    oggetti[oggetto].set_rubato(rubato);

}
//fine modifiche ROSA CHIARAPPA



//INIZIO modifiche DELLA FOLGORE GRAZIA
/* Metodo che permette di cambiare il posizionamento
 * di un sottoinsieme di oggetti.
 */
void Oggetti::set_luogo_oggetti_pos_in(int l_or, int l_dest){
	for (int i = 1; i <= fo; i++)
	{
		if (abs(oggetti[i].get_luogo()) == l_or){
			if(oggetti[i].get_codice()!=116 ){			//se l'oggetto � diverso dalla chiave dell'automobile
				oggetti[i].set_luogo_n(l_dest);
			}
		}
	}
}
//FINE modifiche DELLA FOLGORE GRAZIA

/* 560 - 610
	Elenca oggetti in luogo L (0 = posseduti)
*/
Oggetti Oggetti::posizionati_in(int l)
{
    Oggetti inventario = Oggetti();

    for (int i = 1; i <= fo; i++)
    {
        if (abs(oggetti[i].get_luogo()) == l)
            inventario.inserisci(oggetti[i]);
    }
    return inventario;
}


/* 620 - 670
	og=indice oggetto c2, 0 se non pres. o trasp.
*/
int Oggetti::luogo_oggetto(int c2, int lu)
{
    bool trovato = false;
    int i = 1;

    int og = 0;
    while (i <= fo && !trovato)
    {
        if (oggetti[i].get_codice() == c2)
            if (abs(oggetti[i].get_luogo()) == lu || oggetti[i].get_luogo() == 0)
            {
                og = i;
                trovato = true;
            }
        i++;
    }
    return og;
}

void Oggetti::svuota()
{
    fo = 0;
}

int Oggetti::get_luogo(int oggetto)
{
    return oggetti[oggetto].get_luogo();
}

//MODIFICA D-R(D'Orsi):Negozio + Banca
bool Oggetti::controllo_og(int o)
{
    bool trovato = false;

    for (int i = 1; i <= fo; i++)
    {
        if (oggetti[i].get_codice() == o)
            trovato = true;
    }
    return trovato;
}
