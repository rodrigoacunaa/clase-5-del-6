#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#define NOM_ARCHIVO "datos.dat"


void leerArchivoBin(){
    FILE * archivo = fopen(NOM_ARCHIVO,"rb");
    if(archivo!=NULL){
        printf("Leyendo informacion... \n");
        fclose(archivo);
    }else{
        printf("No se pudo abrir el archivo \n");
    }
}

void crearArchivoBin(){
    FILE * archivo = fopen(NOM_ARCHIVO,"wb");
    if(archivo!=NULL){
        printf("Se creo el archivo correctamente \n");
        fclose(archivo);
    }else{
        printf("No se creo el archivo \n");
    }
}
