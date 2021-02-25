//(@Integratore: Alex Spina)

#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

const int DIM = 1000;

using namespace std;

template<class tipoelem>
class Pila{

    static const int NIL = -1;

public:

    Pila();
    ~Pila();

    void creapila();
    bool pilavuota() const;
    tipoelem leggipila() const;
    void fuoripila();
    void inpila(tipoelem);

private:

    tipoelem elementi[DIM];
    int testa;
};

template<class tipoelem>
Pila<tipoelem>::Pila(){

    creapila();
}

template<class tipoelem>
Pila<tipoelem>::~Pila(){

    while(!pilavuota())
        fuoripila();
}

template<class tipoelem>
void Pila<tipoelem>::creapila(){

    testa = NIL;
}

template<class tipoelem>
bool Pila<tipoelem>::pilavuota() const{

    return (testa == NIL);
}

template<class tipoelem>
tipoelem Pila<tipoelem>::leggipila() const{

    if(!pilavuota())
        return(elementi[testa]);
}

template<class tipoelem>
void Pila<tipoelem>::fuoripila(){

    if(!pilavuota())
        testa--;
}

template<class tipoelem>
void Pila<tipoelem>::inpila(tipoelem a){

    testa++;
    elementi[testa]=a;
}

#endif // PILA_H_INCLUDED
