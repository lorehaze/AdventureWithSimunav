//(@Integratore: Alex Spina)

//Cella per Lista con Puntatori Monodirezionali
//Modificata da A.Annese
#ifndef Cella_L_P_Mono_H
#define Cella_L_P_Mono_H

template<class T>
class Cella
{
public:
	typedef T tipoelem;
    Cella();
	~Cella();

    void scrivicella(tipoelem);
    tipoelem leggicella() const;
    void scrivisucc(Cella<T>*);
    Cella<T>* leggisucc() const;

private:
    tipoelem elemento;
    Cella<T>* succ;
};

template<class T>
Cella<T>::Cella()
{
	succ = nullptr;
}

template<class T>
Cella<T>::~Cella()
{
    //dtor
}

template<class T>
void Cella<T>::scrivicella(tipoelem label)
{
    elemento = label;
}

template<class T>
T Cella<T>::leggicella() const
{
    return elemento;
}


template<class T>
void Cella<T>::scrivisucc(Cella<T>* c)
{
    succ = c;
}

template<class T>
Cella<T>* Cella<T>::leggisucc() const
{
    return succ;
}

#endif // Cella_L_P_Mono_H
