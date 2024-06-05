#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#define NOM_ARCHIVO "datos.dat"

art obj;
void leerArchivoBin()
{
    int dato;
    FILE * archivo = fopen(NOM_ARCHIVO,"rb");
    if(archivo!=NULL)
    {
        //fread(estructura, tam de la estructura, cantidad, archivos);
        //fread(&dato, sizeof(dato),1,archivo);
        // fread retorna el numero de registros leidos, no el numero de bytes
        printf("Leyendo informacion... \n");
        while(!feof(archivo))
        {
            if(fread(&dato, sizeof(dato), 1, archivo)==1)
            {
                printf("%d \n",dato);
            }
        }
        fclose(archivo);
        printf("Listo papurri \n");

    }
    else
    {
        printf("No se pudo abrir el archivo \n");
    }
}

void leerArt(){
    FILE * archivo = fopen(NOM_ARCHIVO,"rb");
    if(archivo!=NULL){
        printf("Leyendo informacion... \n");
        while(!feof(archivo))
        {
            //imprimimos el id
            if(fread(&obj.id, sizeof(obj.id), 1, archivo)==1)
            {
                printf("%d \n",obj.id);
            }

            //imprimimos nombre del articulo
            if(fread(&obj.nombre, sizeof(obj.nombre),1,archivo)==1){
                printf("%s \n",obj.nombre);
            }

            //imprimimos stock del art
            if(fread(&obj.stock, sizeof(obj.stock),1,archivo)==1){
                printf("%d \n",obj.stock);
            }

            //imprimimos precio del art
            if(fread(&obj.precio, sizeof(obj.precio),1,archivo)==1){
                printf("%.1f \n",obj.precio);
            }





        }

        fclose(archivo);
        printf("Listo papurri \n");
    }else
    {
        printf("No se pudo abrir el archivo \n");
    }
}

void crearArchivoBin()
{
    FILE * archivo = fopen(NOM_ARCHIVO,"wb");
    if(archivo!=NULL)
    {
        printf("Se creo el archivo correctamente \n");
        fclose(archivo);
    }
    else
    {
        printf("No se creo el archivo \n");
    }
}

void cargarArt()
{
    FILE * archivo;
    archivo=fopen(NOM_ARCHIVO,"ab");
    if(archivo!=NULL)
    {
        printf("Ingrese el id del art \n");
        fflush(stdin);
        scanf("%d",&obj.id);
        fwrite(&obj.id, sizeof(obj.id), 1, archivo);

        printf("Ingrese el nombre del articulo \n");
        fflush(stdin);
        gets(obj.nombre);
        fwrite(&obj.nombre, sizeof(obj.nombre), 1, archivo);

        printf("Ingrese el stock disponible del articulo \n");
        fflush(stdin);
        scanf("%d",&obj.stock);
        fwrite(&obj.stock, sizeof(obj.stock), 1, archivo);

        printf("Ingrese el precio del articulo \n");
        fflush(stdin);
        scanf("%f",&obj.precio);
        fwrite(&obj.precio, sizeof(obj.precio), 1, archivo);

        if(fclose(archivo)==0)
        {
            printf("Archivo correctamente guardado \n");
        }
        else
        {
            printf("No se pudo guardar el archivo \n");
        }
    }
    else
    {
        printf("No se pudo guardar el archivo \n");
    }
}


void cargar3Num()
{
    //fwrite consta de 4 parámetros
    //fwrite (estructura, tamaño de la estructura, cantidad de registros, archivo (como puntero));

    //caso para guardar numeros:
    //scanf("%d",&dato);
    //fwrite(&dato, sizeof(dato), 1,archivo);
    int dato;
    FILE * archivo;
    archivo=fopen(NOM_ARCHIVO,"ab");
    if(archivo!=NULL)
    {
        for(int i=0; i<3; i++)
        {
            printf("Ingrese un num \n");
            fflush(stdin);
            scanf("%d",&dato);
            fwrite(&dato, sizeof(dato), 1, archivo);
        }

        if(fclose(archivo)==0)
        {
            printf("Archivo correctamente guardado \n");
        }
        else
        {
            printf("No se pudo guardar el archivo \n");
        }
    }
    else
    {
        printf("No se pudo guardar el archivo \n");
    }
}

