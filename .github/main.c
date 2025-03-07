#include <stdio.h> //biblioteca estandar de entrada ys alida 
#include "conjunto.h"


int main(){
    CONJUNTO c, d, e;
    c= conjunto_vacio(); //se inicializan las variables 
    d= conjunto_vacio(); //equivalente a "a c asignale cero"
    e= conjunto_vacio ();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacio %d\n", es_vacio(c));
    c= agregar(c, 2);
    c= agregar(c, 3);
    c= agregar(c, 19);
    c= agregar(c, 11);
    c= agregar(c, 15);
    print_conjunto(c);

    d= agregar(d, 12);
    d= agregar(d, 22);
    d= agregar(d, 32);
    d= agregar(d, 22);
    print_conjunto(d);

    e= _union(c, d);
    print_conjunto(e);

    return 0;
}