//
//  main.c
//  abb
//
//  Created by Mauro San Martín on 7/5/18.
//  Copyright © 2018 Mauro San Martín. All rights reserved.
//

#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

#ifndef time_h
#include <time.h>
#define time_h
#endif

#ifndef abb_h
#include "abb.h"
#define abb_h
#endif




int main() {

    Abb *arbol = creaAbbVacio();
    /*
    arbol = insertaValorAbb(arbol,5);
    arbol = insertaValorAbb(arbol,8);
    arbol = insertaValorAbb(arbol,3);
    arbol = insertaValorAbb(arbol,9);
    arbol = insertaValorAbb(arbol,7);
    */
    
    
    /* 
    muestraArbolGV(arbol, "abb", 5);
    
    buscaValorRutaAbb(arbol, 3);
    printf("\n");
    buscaValorRutaAbb(arbol, 9);
    printf("\n");
    buscaValorRutaAbb(arbol, 7);
    printf("\n");
    buscaValorRutaAbb(arbol, 10);
    printf("\n"); */

    srand(time(NULL));

    int tamanio;
    printf("Ingrese el tamaño del árbol: ");
    scanf("%d", &tamanio);
    
    // Crear árbol con valores aleatorios
    for (int i = 0; i < tamanio; i++) {
        int valor = rand() % 100; // Valores aleatorios entre 0 y 99
        arbol = insertaValorAbb(arbol, valor);
        printf("Insertado: %d\n", valor);
    }
    recorreAbbEnOrden(arbol);
    muestraArbolGV(arbol, "Abb", tamanio);
    buscarMinAbb(arbol);
    buscarMaxAbb(arbol);

    return 0;
}
