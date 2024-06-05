#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
//acuña rodigo
int main()
{
//    FILE * archivo; //contiene el identificador de posición
//    archivo = fopen("archivo.dat","wb"); //si fopen produce un error devuelve null
    // "rb" --> SOLO LECTURA, EL ARCHIVO DEBE EXISTIR SI O SI
    // "wb" --> ESCRITURA. SI EL ARCHIVO EXISTE, LO SOBREESCRIBE, SI NO EXISTE LO CREA
    // "ab" --> APPEND AÑADIR, AGREGAR. ESCRITURA. SI EXISTE SE POSICIONA AL FINAL COMO AGREGANDO TEXTO. SI NO EXISTE LO CREA.

    // "rb+" --> LECTURA Y ESCRITURA. TIENE QUE EXISTIR EL ARCHIVO. EL PUNTERO SE POSICIONA EN EL INICIO DEL ARCHIVO Y SI SE ESCRIBE, MUEVE TODO EL CONTENIDO PREEXISTENTE A LA DERECHA

    // "wb+" --> LECTURA Y ESCRITURA. SI EXISTE LO SOBREESCRIBE, SI NO EXISTE LO CREA

//    if(archivo==NULL){
//        printf("NO SE PUDO CREAR EL ARCHIVO \n");
//    }else{
//        printf("EL PEPE \n");
//
//        if(fclose(archivo)==0){ //fclose devuelve 0 si se cerró correctamente
//            printf("EL PEPE SE CERRO \n");
//        }else{
//            printf("EL PEPE NO SE CERRO \n");
//        }
//    }

    //feof(archivo) --> indica si estoy en el final del archivo.
    //devuelve 0 cuando NO ESTA EN EL FINAL

    int op;
    do
    {
        printf("1) Crear archivo \n");
        printf("2) Leer archivo \n");
        printf("0) Salir \n");

        fflush(stdin);
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            crearArchivoBin();
            break;
        case 2:
            leerArchivoBin();
            break;

        }
    }
    while(op<1 || op>3);





}
