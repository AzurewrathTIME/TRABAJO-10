🎓 Sistema de Gestión de Alumnos

📚 Programa en C++ para gestionar información de alumnos mediante programación orientada a objetos (POO).

Este proyecto permite registrar, consultar, buscar, modificar y eliminar alumnos, además de calcular el promedio general de todos los alumnos registrados.
🚀 Características

El programa cuenta con un menú interactivo que permite realizar las siguientes operaciones:

    📝 Registrar alumnos

    👤 Mostrar un alumno

    👥 Mostrar todos los alumnos

    📊 Calcular el promedio general

    🔎 Buscar un alumno por nombre

    🗑️ Eliminar un alumno

    ✏️ Modificar los datos de un alumno

    🚪 Salir del programa

🧑‍💻 Tecnologías utilizadas

    💻 Lenguaje: C++

    🧱 Programación Orientada a Objetos (POO)

    📦 iostream — Entrada y salida de datos

    🔤 string — Manejo de cadenas de texto

🏗️ Estructura del programa

El programa utiliza una clase llamada Alumno para representar la información de cada estudiante.
👨‍🎓 Clase Alumno

Cada alumno contiene los siguientes atributos:
Atributo	Tipo	Descripción
👤 nombre	string	Nombre del alumno
🎂 edad	int	Edad del alumno
📊 promedio	float	Promedio del alumno

Los atributos son privados y se manipulan mediante métodos set y get.
🔧 Métodos principales

    setNombre() → Modifica el nombre.

    getNombre() → Obtiene el nombre.

    setEdad() → Modifica la edad.

    getEdad() → Obtiene la edad.

    setPromedio() → Modifica el promedio.

    getPromedio() → Obtiene el promedio.

    mostrar() → Muestra la información del alumno.

    ~Alumno() → Destructor de la clase.

📋 Funciones principales
📝 Registrar alumno

Permite introducir:

    Nombre

    Edad

    Promedio

El programa almacena los datos en un arreglo con capacidad máxima de 10 alumnos.

const int MAX = 10;

👤 Mostrar un alumno

Permite seleccionar un alumno mediante su índice y mostrar sus datos.

Ejemplo:

Ingrese el indice del alumno (1 a 3): 2

Estudiante: Carlos
Edad: 20
Promedio: 8.5

👥 Mostrar todos los alumnos

Muestra la información de todos los alumnos registrados en el sistema.

Estudiante: Juan
Edad: 19
Promedio: 9.2
---------------------
Estudiante: Carlos
Edad: 20
Promedio: 8.5
---------------------

📊 Calcular promedio general

Calcula el promedio de todos los alumnos registrados.

Ejemplo:

Promedio general: 8.73

🔎 Buscar alumno

Permite buscar un alumno introduciendo su nombre.

El programa utiliza la función:

int buscarIndice(string nombre);

Esta función devuelve la posición del alumno si lo encuentra.
🗑️ Eliminar alumno

Permite eliminar un alumno mediante su nombre.

Cuando se elimina, los elementos posteriores del arreglo se desplazan para ocupar el espacio disponible.
✏️ Modificar alumno

Permite modificar:

    👤 Nombre

    🎂 Edad

    📊 Promedio

Primero se busca al alumno por su nombre y posteriormente se actualizan sus datos.
🎮 Menú principal

Al ejecutar el programa aparecerá el siguiente menú:

===== MENU =====
1. Registrar Alumno.
2. Mostrar un Alumno.
3. Mostrar Todos los Alumnos.
4. Calcular Promedio.
5. Buscar Alumno por nombre.
6. Eliminar Alumno.
7. Modificar Alumno.
8. Salir.
Opcion:

▶️ Cómo ejecutar el programa
1️⃣ Requisitos

Necesitas tener instalado un compilador de C++, por ejemplo:

    🔵 MinGW / G++

    🟣 Visual Studio

    🟢 Code::Blocks

    🟠 Dev-C++

    💻 Visual Studio Code con un compilador de C++

2️⃣ Compilar

Si el archivo se llama:

main.cpp

Puedes compilarlo utilizando:

g++ main.cpp -o alumnos

3️⃣ Ejecutar

En Windows:

alumnos.exe

En Linux/macOS:

./alumnos

🧠 Conceptos de C++ utilizados

Este proyecto sirve para practicar diferentes conceptos fundamentales de C++:

    🧱 Clases y objetos

    🔒 Encapsulamiento

    🔧 Constructores

    💥 Destructor

    📥 Getters y setters

    📦 Arreglos

    🔄 Bucles

    🔀 Condicionales

    🔍 Búsqueda de elementos

    🗑️ Eliminación de elementos

    ✏️ Modificación de datos

    🎯 Funciones

    📝 Entrada y salida de datos

⚠️ Consideraciones

    El sistema tiene una capacidad máxima de 10 alumnos.

    Los nombres se introducen mediante cin >>, por lo que no se pueden introducir nombres con espacios.

    La edad solamente se actualiza si es mayor o igual a 0.

    El promedio solamente se actualiza si está entre 0 y 10.

    Los datos se almacenan únicamente mientras el programa está ejecutándose.

    Al cerrar el programa, los datos registrados se pierden.

📂 Estructura recomendada del proyecto

📁 GestionAlumnos
│
├── 📄 main.cpp
└── 📄 README.md

🎯 Objetivo del proyecto

El objetivo principal es desarrollar un programa sencillo de gestión de alumnos utilizando programación orientada a objetos en C++, aplicando conceptos como clases, encapsulamiento, constructores, destructores, métodos y manejo de arreglos.
👨‍💻 Autor

Proyecto académico de C++ 🎓
⭐ ¡Gracias por visitar el proyecto!

Si este proyecto te fue útil, puedes darle una ⭐ al repositorio.

🎓 Gestión de Alumnos
💻 C++
🧱 POO
📊 Gestión de estudiantes
🚀 Aprendiendo programación
