#ifndef EMPLEADO_H
<<<<<<< HEAD
#define empleado
=======
#define EMPLEADO_H
>>>>>>> 8b8a61309885d70725b4ef798a445de70ac6cdbb

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
<<<<<<< HEAD
            m_salario="300";
=======
            m_salario=300;
>>>>>>> 8b8a61309885d70725b4ef798a445de70ac6cdbb
        }
        void ImprimirInfo( )
        {
           cout << "Nombre: " << m_nombre << '\n';
           cout << "Departamento: " << m_departamento << '\n';
           cout << "Puesto: " << m_posicion << '\n';
<<<<<<< HEAD
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
=======
           cout << "Salario: " << m_salario << '\n';
        }

        void SetNombre( char* nombre ) { m_nombre = nombre; }
        void SetDepartamento( char * departamento) { m_departamento = departamento; }
        void SetPosicion ( char* posicion ) { m_posicion = posicion; }
        void SetSalario ( double salario ) { m_salario = salario; }


        const char* GetNombre( ){ return m_nombre; }
        const char* GetDepartamento( ){ return m_departamento; }
        const char* GetPosicion( ){ return m_posicion; }
        const int GetSalario( ){ return m_salario; }
>>>>>>> 8b8a61309885d70725b4ef798a445de70ac6cdbb
};

#endif