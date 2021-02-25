/*
 * Implementato da Tortorella Joseph
 */

#ifndef LISTAVETTORE_H_
#define LISTAVETTORE_H_
#define max_vet 1024

template <class L>
class listaVettore {

	public:
	typedef L tipoelem;
	typedef int posizione;

	listaVettore();
	~listaVettore();
	void creaLista();
	bool listaVuota() const;
	tipoelem leggiLista(posizione) const;
	posizione primoLista() const;
	bool fineLista(posizione) const;
	posizione precLista(posizione) const;
	posizione succLista(posizione) const;
	void insLista(tipoelem,posizione&);
	void cancLista(posizione&);
	int lunghLista();

	private:
	L *elementi;
	int lunghezza;

};

template<class L>
listaVettore<L>::listaVettore(){
	creaLista();
}

template<class L>
listaVettore<L>::~listaVettore(){
	while(lunghezza>0){
		delete elementi;
	}
}

template<class L>
void listaVettore<L>::creaLista(){
	lunghezza=0;
	elementi= new L[max_vet];
}

template<class L>
bool listaVettore<L>::listaVuota() const{
	if(lunghezza==0){
		return true;
	}
	else{
		return false;
	}
}

template<class L>
typename listaVettore<L>::tipoelem listaVettore<L>::leggiLista(posizione p) const{
	return elementi[p];
}

template<class L>
typename listaVettore<L>::posizione listaVettore<L>::primoLista() const{
	return 0;
}

template<class L>
bool listaVettore<L>::fineLista(posizione p) const{
	if(p==lunghezza){
		return true;
	}
	else{
		return false;
	}
}

template<class L>
typename listaVettore<L>::posizione listaVettore<L>::precLista(posizione p) const{
	if(p>0){
		return p-1;
	}
	else{
		return p;
	}
}

template<class L>
typename listaVettore<L>::posizione listaVettore<L>::succLista(posizione p) const{
	if(p<lunghezza){
		return p+1;
	}
	else{
		return p;
	}
}

template<class L>
void listaVettore<L>::insLista(tipoelem e,posizione& p){
	if(lunghezza==0){
		elementi[0]=e;
		lunghezza++;
	}
	else{
		  for(int i=lunghezza; i>p; i--){
			  elementi[i]=elementi[i-1];
			  elementi[p]=e;
			  lunghezza++;
		  }
	 }
}

template<class L>
void listaVettore<L>::cancLista(posizione& p){
	while(lunghezza>0){
		for(int i=p; i<lunghezza; i++){
			elementi[i]=elementi[i+1];
			lunghezza--;
		}
	}
}

template<class L>
int listaVettore<L>::lunghLista(){
	return(lunghezza);
}




#endif /* LISTAVETTORE_H_ */
