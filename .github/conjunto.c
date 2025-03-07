#include "conjunto.h"
#include <stdio.h>
//No #include <conjunto.h>
//las funciones no llevan punto y coma 
CONJUNTO conjunto_vacio(){
    CONJUNTO c;
    c.cant=0;
    return c;
} 

CONJUNTO agregar(CONJUNTO c, DATO d){
    CONJUNTO t=c;
    if(!pertenece(t, d) && t.cant < TAM){
        t.datos[t.cant] = d; //agrega un elemento al final de las casillas que estan llenas 
        t.cant++;
    }
    return t;
}

bool pertenece(CONJUNTO c, DATO d){
    if (!es_vacio (c)){
        for (int i=0; i < c.cant; i++){
            if(c.datos[i]==d) return true;
        }
    }
    return false;
}

CONJUNTO quitar(CONJUNTO c, DATO d){
    CONJUNTO t = c;
    int i=0; //fot (;;;) es un ciclo infinito 
    if (pertenece(t, d)){
        for( ; i< t.cant; i++){
            if(t.datos[i]==d) break;
        }

        if(i!=t.cant-1){
            for(int j=i+1;j< t.cant; j++){
                t.datos[j-1] = t.datos[j];
            }
        }
        t.cant--;
    }
    return t;
}

bool es_vacio(CONJUNTO c){
    return c.cant==0; //retorna el resultado de evaluar esa expresion 
}

int cardinal(CONJUNTO c){
    return c.cant;
}


CONJUNTO _union(CONJUNTO c, CONJUNTO d){
    CONJUNTO t = c; //agrega todos los elementos de c al conjunto resultante (t)
    for (int i=0; i < d.cant; i++){ //pregunta uno a uno si los elementos de d pertenecen a t
        t= agregar(t, d.datos[i]); //si el elemento no pertenece al conjunto, lo agrega 
    }
    return t;
}

void print_conjunto(CONJUNTO c){
    printf("{ ");
    for(int i=0; i < c.cant; i++){
        printf("%d", c.datos[i]);
    }
    printf("}\n");
}