#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
//acu�a rodigo
int main()
{
//    FILE * archivo; //contiene el identificador de posici�n
//    archivo = fopen("archivo.dat","wb"); //si fopen produce un error devuelve null
    // "rb" --> SOLO LECTURA, EL ARCHIVO DEBE EXISTIR SI O SI
    // "wb" --> ESCRITURA. SI EL ARCHIVO EXISTE, LO SOBREESCRIBE, SI NO EXISTE LO CREA
    // "ab" --> APPEND A�ADIR, AGREGAR. ESCRITURA. SI EXISTE SE POSICIONA AL FINAL COMO AGREGANDO TEXTO. SI NO EXISTE LO CREA.

    // "rb+" --> LECTURA Y ESCRITURA. TIENE QUE EXISTIR EL ARCHIVO. EL PUNTERO SE POSICIONA EN EL INICIO DEL ARCHIVO Y SI SE ESCRIBE, MUEVE TODO EL CONTENIDO PREEXISTENTE A LA DERECHA

    // "wb+" --> LECTURA Y ESCRITURA. SI EXISTE LO SOBREESCRIBE, SI NO EXISTE LO CREA

//    if(archivo==NULL){
//        printf("NO SE PUDO CREAR EL ARCHIVO \n");
//    }else{
//        printf("EL PEPE \n");
//
//        if(fclose(archivo)==0){ //fclose devuelve 0 si se cerr� correctamente
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
        printf("3) Escribir archivo \n");
        printf("4) Cargar articulo \n");
        printf("5) Leer articulos \n");
        printf("6) Buscar articulo por nombre\n");
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

        case 3:
            cargar3Num();
            break;

        case 4:
            cargarArt();
            break;

        case 5:
            leerArt();
            break;

        case 6:
            buscarPorNom();
            break;

        }
    }
    while(op!=0);





}
