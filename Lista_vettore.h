//(@Integratore: Alex Spina)

#ifndef _LISTA_VETTORE_H
#define _LISTA_VETTORE_H

#include <iostream>
using namespace std;

template <class T>
class Lista_vettore {

public:
	typedef int posizione;
	typedef T tipoelem;

	Lista_vettore(); //costruttore
	Lista_vettore(const Lista_vettore<T>&); //costruttore di copia
	~Lista_vettore(); //distruttore

	void crealista ();
	bool listavuota () const;
	tipoelem leggilista (posizione)const;
	void scrivilista (tipoelem,posizione);
	posizione primolista () const;
	bool finelista (posizione)const;
	posizione succlista (posizione)const;
	posizione preclista (posizione)const;
	void inslista (tipoelem,posizione);
	void canclista (posizione);

private:
	static const int max = 1024;
	T elementi [max];
	int lunghezza;
};

//costruttore
template <class T> Lista_vettore<T>::Lista_vettore() {

		crealista ();
}

	//costruttore di copia:effettua una copia o clone di un oggetto
template <class T> Lista_vettore<T>::Lista_vettore(const Lista_vettore<T> &L) {

		lunghezza=L.lunghezza;
		for (int i=0;i<lunghezza;i++)
			elementi [i]=L.elementi[i];
}

//distruttore
template <class T> Lista_vettore<T>::~Lista_vettore() {}

//operatori
template <class T> void Lista_vettore<T>::crealista () {

	lunghezza=0;
}

template <class T> bool Lista_vettore<T>::listavuota () const {

	return (lunghezza==0);
}

template <class T> int Lista_vettore<T>::primolista () const {

	return (1);
}

template <class T> int Lista_vettore<T>::succlista (posizione p)const {

	if ((p >0) && (p<lunghezza+1))
		return (p+1);
	else
		return (p);
}

template <class T> int Lista_vettore<T>::preclista (posizione p)const {

	if ((p>0) && (p<lunghezza+1))
		return (p-1);
	else
		return (p);
}

template <class T> bool Lista_vettore<T>::finelista (posizione p) const {

	if ((p>0)&&(p<=lunghezza+1))
		return (p==lunghezza+1);
	else
		return (false);
}

template <class T> T Lista_vettore<T>::leggilista (posizione p)const {

	if ((p>0)&& (p<lunghezza+1))
		return (elementi [p-1]);
}

template <class T> void Lista_vettore<T>::scrivilista (tipoelem a, posizione p){

	if ((p>0)&& (p<lunghezza +1))
		elementi [p-1]=a;
}

template <class T> void Lista_vettore<T>::inslista (tipoelem a, posizione p){

	if ((p>0)&& (p<=lunghezza+1))
		for (int i=lunghezza;i>=p;i--)
			elementi [i]=elementi [i-1];

	elementi [p-1]=a;
	lunghezza++;
}

template <class T> void Lista_vettore<T>::canclista (posizione p){

	if ((p>0)&&(p<lunghezza+1)) {
		if (!listavuota()) {
			for (int i=p-1;i<(lunghezza+1);i++)
				elementi [i]=elementi [i+1];
			lunghezza--;
		}
	}
}

#endif // _LISTA_VETTORE_H
