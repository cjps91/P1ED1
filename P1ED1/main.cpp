#include <iostream>

using namespace std;

#include "estructuras.h"
#include "maraton.h"
#include "clasificacion.h"

int main()
{
int numatletas=0;
int menuop;
do{
system("cls");
cout<< "\n Practica 1 de ED1        Carlos Javier Perez Sanchez \n";

cout<<"\n Atletas: "<<numatletas<<" \n\n\n";

cout<<"\t 1. Consulta de inscripciones \n\t 2. Inscripcion a la maraton \n\t 3. Modificar una inscripcion \n\t 4. Eliminar una inscripcion \n\t 5. Mostrar clasificacion \n\t 6. Salir \n\n";

cout<<" Indique la opcion deseada: ";
cin>>menuop;
cin.ignore(1,'\n');

} while(menuop!=6);
system("pause");
    return 0;
}
