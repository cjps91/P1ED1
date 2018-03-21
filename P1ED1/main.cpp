//Carlos Javier Pérez Sánchez GPL3

#include <iostream>

using namespace std;

#include "estructuras.h"
#include "maraton.h"
#include "clasificacion.h"

int main()
{
int numatletas=0;
int menuop=0;
while(menuop!=6){
system("cls");
cout<< "\n Practica 1 de ED1        Carlos Javier Perez Sanchez \n";

cout<<"\n Atletas: "<<numatletas<<" \n\n\n";

cout<<"\t 1. Consulta de inscripciones \n\t 2. Inscripcion a la maraton \n\t 3. Modificar una inscripcion \n\t 4. Eliminar una inscripcion \n\t 5. Mostrar clasificacion \n\t 6. Salir \n\n";

cout<<" Indique la opcion deseada: ";
cin>>menuop;
cin.ignore(1,'\n');

switch(menuop)
{
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    case 5: break;
    case 6: break;
    default: system("cls"); cout<< "\n OPCION INCORRECTA. Pruebe de nuevo \n";
}

};
system("pause");
    return 0;
}
