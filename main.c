#include <stdio.h>
#include <stdlib.h>
//acuña rodigo
int main()
{
    FILE * archivo; //contiene el identificador de posición
    archivo = fopen("archivo.dat","rb"); //si fopen produce un error devuelve null
    // "rb" --> SOLO LECTURA, EL ARCHIVO DEBE EXISTIR SI O SI
    // "wb" --> ESCRITURA. SI EL ARCHIVO EXISTE, LO SOBREESCRIBE, SI NO EXISTE LO CREA
    // "ab" --> APPEND AÑADIR, AGREGAR. ESCRITURA. SI EXISTE SE POSICIONA AL FINAL COMO AGREGANDO TEXTO. SI NO EXISTE LO CREA.

    // "rb+" --> LECTURA Y ESCRITURA. TIENE QUE EXISTIR EL ARCHIVO. EL PUNTERO SE POSICIONA EN EL INICIO DEL ARCHIVO

    // "wb+" --> LECTURA Y ESCRITURA. SI EXISTE LO SOBREESCRIBE, SI NO EXISTE LO CREA

}
