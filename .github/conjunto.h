#ifndef __CONJUNTO_H__
#define __CONJUNTO_H__
#define TAM 1000
#include <stdbool.h>

typedef int DATO;

typedef struct Conjunto{
    DATO datos[TAM];
    short cant;
} CONJUNTO; //Define el tipo struct y al mismo tiempo el alias 

//Prototipos de las funciones 
CONJUNTO conjunto_vacio();
CONJUNTO agregar(CONJUNTO, DATO);
bool pertenece(CONJUNTO, DATO);
CONJUNTO quitar(CONJUNTO, DATO);
bool es_vacio(CONJUNTO);
int cardinal(CONJUNTO);
CONJUNTO _union(CONJUNTO c, CONJUNTO d); //se pueden dejar los nombres de las variables (tambien pueden no ir)
void print_conjunto(CONJUNTO);

#endif

//NUNCA SE COMPILA UN .h
