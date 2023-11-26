#ifndef pila_h
#define pila_h


template <class T>
class Pila
{
public:
    Pila();
    ~Pila();
    void meter(T V);
    T sacar();
    int vacia();

private:
    struct nodo
    {
        T clave;
        nodo *siguiente;
    };

    struct nodo *cabeza,
        *z;
};

template <class T>
Pila<T>::Pila()
{
    cabeza = new nodo;
    z = new nodo;
    cabeza->siguiente = z;
    z->siguiente = z;
}

template <class T>
Pila<T>::~Pila()
{
    struct nodo *t = cabeza;
    while (t != z)
    {
        cabeza = t;
        t = t->siguiente;
        delete cabeza;
    }
    delete z;
}

template <class T>
void Pila<T>::meter(T v)
{
    struct nodo *t = new nodo;
    t->clave = v;
    t->siguiente = cabeza->siguiente;
    cabeza->siguiente = t;
}

template <class T>
T Pila<T>::sacar()
{
    T x;
    if(vacia()){
        return x;
    }
    struct nodo *t = cabeza->siguiente;
    cabeza->siguiente = t->siguiente;
    x = t->clave;
    delete t;
    return x;
}

template <class T>
int Pila<T>::vacia()
{
    return cabeza->siguiente == z;
}

#endif
