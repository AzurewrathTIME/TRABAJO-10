#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;

class Alumno {
private:
    string nombre;
    int edad;
    float promedio;

public:
    Alumno() {
        nombre = "Emilioa";
        edad = 1000;
        promedio = 10.0;
        cout << "Alumno creado" << endl;
    }

    Alumno(string n, int e, float p) {
        nombre = n;
        edad = e;
        promedio = p;
        cout << "Alumno creado" << endl;
    }

    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int e) {
        if (e >= 0) {
            edad = e;
        }
    }

    int getEdad() {
        return edad;
    }

    void setPromedio(float p) {
        if (p >= 0 && p <= 10) {
            promedio = p;
        }
    }

    float getPromedio() {
        return promedio;
    }

    void mostrar() {
        cout << "Estudiante: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
    }

    ~Alumno() {
        cout << "Alumno destruido" << endl;
    }
};

Alumno alumnos[MAX];
int cantidad = 0;

void registrarAlumno();
void mostrarAlumno();
void mostrarTodos();
void calcularPromedio();
void buscarAlumno();
void eliminarAlumno();
void modificarAlumno();
int buscarIndice(string nombre);
void menu();

void registrarAlumno() {
    if (cantidad >= MAX) {
        cout << "No hay espacio para mas alumnos." << endl;
        return;
    }
    string n;
    int e;
    float p;

    cout << "Alumno " << cantidad + 1 << ":" << endl;
    cout << "Introduce el nombre: ";
    cin >> n;
    cout << "Introduce la edad: ";
    cin >> e;
    cout << "Introduce el promedio: ";
    cin >> p;

    alumnos[cantidad].setNombre(n);
    alumnos[cantidad].setEdad(e);
    alumnos[cantidad].setPromedio(p);

    cantidad++;
    cout << "Alumno registrado." << endl;
}

void mostrarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    int indice;
    cout << "Ingrese el indice del alumno (1 a " << cantidad << "): ";
    cin >> indice;
    if (indice < 1 || indice > cantidad) {
        cout << "Indice invalido." << endl;
        return;
    }
    alumnos[indice - 1].mostrar();
}

void mostrarTodos() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        alumnos[i].mostrar();
        cout << "---------------------" << endl;
    }
}

void calcularPromedio() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += alumnos[i].getPromedio();
    }
    double promedio = suma / cantidad;
    cout << "Promedio general: " << promedio << endl;
}

int buscarIndice(string nombre) {
    for (int i = 0; i < cantidad; i++) {
        if (alumnos[i].getNombre() == nombre) {
            return i;
        }
    }
    return -1;
}

void buscarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a buscar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice != -1) {
        cout << "Alumno encontrado en la posicion " << indice + 1 << ":" << endl;
        alumnos[indice].mostrar();
    } else {
        cout << "Alumno no encontrado." << endl;
    }
}

void eliminarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a eliminar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    for (int i = indice; i < cantidad - 1; i++) {
        alumnos[i] = alumnos[i + 1];
    }
    cantidad--;
    cout << "Alumno eliminado." << endl;
}

void modificarAlumno() {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    string buscar;
    cout << "Introduce el nombre del alumno a modificar: ";
    cin >> buscar;

    int indice = buscarIndice(buscar);

    if (indice == -1) {
        cout << "Alumno no encontrado." << endl;
        return;
    }

    string n;
    int e;
    float p;

    cout << "Nuevo nombre: ";
    cin >> n;
    cout << "Nueva edad: ";
    cin >> e;
    cout << "Nuevo promedio: ";
    cin >> p;

    alumnos[indice].setNombre(n);
    alumnos[indice].setEdad(e);
    alumnos[indice].setPromedio(p);

    cout << "Alumno modificado." << endl;
}

void menu() {
    int opcion;
    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Registrar Alumno." << endl;
        cout << "2. Mostrar un Alumno." << endl;
        cout << "3. Mostrar Todos los Alumnos." << endl;
        cout << "4. Calcular Promedio." << endl;
        cout << "5. Buscar Alumno por nombre." << endl;
        cout << "6. Eliminar Alumno." << endl;
        cout << "7. Modificar Alumno." << endl;
        cout << "8. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            registrarAlumno();
        } else if (opcion == 2) {
            mostrarAlumno();
        } else if (opcion == 3) {
            mostrarTodos();
        } else if (opcion == 4) {
            calcularPromedio();
        } else if (opcion == 5) {
            buscarAlumno();
        } else if (opcion == 6) {
            eliminarAlumno();
        } else if (opcion == 7) {
            modificarAlumno();
        } else if (opcion == 8) {
            cout << "Saliendo del programa." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 8);
}

int main() {
    menu();
    return 0;
}