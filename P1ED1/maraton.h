#ifndef MARATON_H_INCLUDED
#define MARATON_H_INCLUDED
#include <iostream>
using namespace std;
#include "estructuras.h"
class Maraton {
		std::fstream fich(); //fichero primera fase
        std::fstream fichero(); //fichero segunda fase
        int numAtletas;
        struct Atleta {
            int dorsal;
            cadena pais;
            cadena nombre;
            cadena apellidos;
            int marca;
            int posicion;
};

public:
		Maraton(char FicheroOrigen[],char FicheroDestino[]);
		Maraton(char FicheroDestino[]);
		~Maraton();
		int getNumAtletas() { return numAtletas; };
		void consultar(cadena pais);
		void insertar(Atleta s);
		void modificar(int dor);
		void eliminar(int dor);
		void mostrarClasificacion();
};

#endif // MARATON_H_INCLUDED
