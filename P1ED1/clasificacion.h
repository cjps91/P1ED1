#ifndef CLASIFICACION_H_INCLUDED
#define CLASIFICACION_H_INCLUDED

#include "estructuras.h"
#include <stdlib.h>


class Clasificacion {
		struct Corredor {
            int indice;
            int dorsal;
            int marca;
        };
		Corredor  *elementos; //elementos de la tabla
		int corredores;
		int tamano;
public:
		Clasificacion();
		~Clasificacion();
		void anadircorredor(Corredor a);
		void eliminar(int i);
		Corredor consultar(int i);
		bool vacio();
		int numcorredores();
};

int marcas(int s) {
    return (rand()%s + 7000);
}


#endif // CLASIFICACION_H_INCLUDED
