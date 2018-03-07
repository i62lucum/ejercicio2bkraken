#include <iostream.h>
#include <math.h>
<<<<<<< HEAD
<<<<<<< HEAD

=======
#include "Empleado.h"
>>>>>>> 8b8a61309885d70725b4ef798a445de70ac6cdbb
=======

>>>>>>> master

void main()
{
    //creacion de un objeto de la clase Empleado
    Empleado empleado12;
    
    //asignacion de valores a las variables miembro
    empleado12.SetNombre("Jose");
    empleado12.SetDepartamento("Sistemas");
<<<<<<< HEAD
<<<<<<< HEAD
    empleado12.SetPosicion(Programador);
=======
    empleado12.SetPosicion("Programador");
>>>>>>> 8b8a61309885d70725b4ef798a445de70ac6cdbb
=======
    empleado12.SetPosicion(Programador);
>>>>>>> master
    empleado12.Setsalario(3000);

    //impresion de los datos de usuario
    empleado12.ImprimirInfo();
}