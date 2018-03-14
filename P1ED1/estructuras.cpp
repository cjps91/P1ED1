#include "estructuras.h"

estructuras::estructuras()
{

}

estructuras::~estructuras()
{

}

void estructuras::intercambiar(int izquierda, int derecha)
{
int aux=izquierda;
izquierda=derecha;
derecha=aux;
}

void estructuras::Burbuja(int inicio, int fin, int celda[])
{
    int pos,ele;
        for (pos=inicio; pos<fin; pos++)
            for (ele=fin; ele>pos; ele--)
                if(celda[ele-1]>celda[ele])
                    intercambiar(celda[ele-1],celda[ele]);
}
