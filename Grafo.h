#ifndef GRAFO_H
#define GRAFO_H
#include "Nodo.h"
#include "Enlace.h"
#include <iostream>
#include <fstream>
using namespace std;
class Nodo;
class Enlaces;
class Grafo{
    private:
        Nodo *cabeza;
        int vertices;
        Enlaces *E;
        ofstream archivo;

    public:
        Grafo();
		~Grafo();
        void crearGrafo();
        void ingresarVertice(int); //Insertar vertice en el grafo
        void ingresarE(int, int); //Insertar Enlace en el grafo
        void mostrarV(); //Mostrar Vertices
        void mostrarE(); //Mostrar Enlaces
        void getNV(); //Obtener Nuemero de Vertices del grafo
        void graficar(); //Crear el grafico en JPG del grafo
        void graficaV(); //Insertar los vertices en el TXT
        void graficaE(); // Insertar los enlaces en el TXT
        void verificar(int); //Comprobar si el vertice ya esta en el grafo
};  
#endif // GRAFO_H
