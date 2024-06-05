#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef struct Tarticulo{
    int id;
    char nombre[50];
    float precio;
    int stock;
}art;

void leerArchivoBin();
void crearArchivoBin();
void cargar3Num();
void cargarArt();
void leerArt();
#endif // LIB_H_INCLUDED
