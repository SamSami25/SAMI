#include <iostream>

#include "persona.h"

using namespace std;

int main()
{
    cout << " Mi primer Proyecto en Git, saludos desde Ubuntu!" << endl;

    Persona p;
    p.nombre = "Sami";
    p.edad = 18;
    cout << p.nombre << endl;
    cout << p.edad << endl;

    return 0;
}
