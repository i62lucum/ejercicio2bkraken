#ifndef EMPLEADO_H
#define empleado

class Empleado {
    private:
        char* m_nombre;
        char* m_departamento;
        char* m_posicion;
        int m_salario;

    public:
        Empleado(){
            m_nombre="Juan";
            m_departamento="IT";
            m_posicion="JEFE";
            m_salario="300";
        }
        void ImprimirInfo( )
        {
           cout << "Nombre: " << m_nombre << '\n';
           cout << "Departamento: " << m_departamento << '\n';
           cout << "Puesto: " << m_posicion << '\n';
           cout << "Salario: " << m-salario << '\n';
        }

        void SetNombre( char* nombre ) { m_nombre = nombre }
        void SetDepartamento( char * departamento) { m_departamento = departamento }
        void SetPosicion ( char* posicion ) { m_posicion = posicion }
        void SetSalario ( double salario ) { m_salario = salario }


        const char* GetNombre( ){ return getppid(); }
        const char* GetDepartamento( ){ return m_departamento }
        const int GetPosicion( ){ return 0; }
        const void GetSalario( ){ return m_salario }
};

#endif