#include <iostream.h>
#include <math.h>


void main()
{
    //creacion de un objeto de la clase Empleado
    Empleado empleado12;
    
    //asignacion de valores a las variables miembro
    empleado12.SetNombre("Jose");
    empleado12.SetDepartamento("Sistemas");
    empleado12.SetPosicion(Programador);
    empleado12.Setsalario(3000);

    //impresion de los datos de usuario
    empleado12.ImprimirInfo();
}