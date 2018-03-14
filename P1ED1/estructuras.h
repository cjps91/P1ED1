#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED

const int TAM_CADENA = 30;

typedef char cadena[TAM_CADENA];

#define SALTO 4
class estructuras{
public:
    estructuras();
    ~estructuras();
    void intercambiar(int izquierda, int derecha);
    void Burbuja(int inicio, int fin, int celda[]);
};

#endif // ESTRUCTURAS_H_INCLUDED
