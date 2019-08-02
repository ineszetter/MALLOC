/*
Universidad Guadalajara LAMAR
Materia: Sistemas Operativos Avanzados
Programa 2: Vector secuencial con manejo de memoria con malloc.
Realizado por: María Inés Calderón Zetter
*/

#include <stdlib.h>
#include <stdio.h>
//#include <conio.h> En linux conio no existe

int *crear_vector(int TAM)
   {
   int *apuntador;

   /*/
   En esta parte realizamos un "Cast" o una conversión,
   esta es una operación importante que se realiza en todos los
   lenguajes de programación, para est colocamos el tipo de dato
   entre paréntesis e inmediatamente después el dato a convertir.
   El primer cast que realizamos es para el dato en general, y el
   segundo es para específicamente el dato TAM.
   /*/

   apuntador = (int*)malloc(sizeof(int)*TAM);
   if(apuntador == NULL)
     {
     printf("No puedo apartar ese tamaño de memoria.");
     exit(0);
     }

   return (apuntador);
   }


//INICIALIZACION
void llena_vector(int *vector, int TAM)
   {
   int i;
   for (i=0; i<TAM-1; i++)
       {
       vector[i]=i;
       }
   }


//IMPRIME VECTOR
void imprime_vector(int *vector, int TAM)
   {
      int i;
      for (i=0; i<TAM-1; i++)
       {
       printf("%d\n", vector[i]);
       }
   }


int main(int argc, char **argv)
   {
  
   /*/
   En esta parte podemos observar como creamos un apuntador que
   posteriormente manda llamar los valores de la funcion
   crear_vector, al cuál se le asignará el tamaño de
   argv 1, que es el primer argumento ingresado por consola.
   /*/

   int *vector;
   int TAM;
   TAM = atoi(argv[2]);
 //  TAM = 10000000000;
// TAM = (int)(int)argv[1];
   vector = crear_vector(TAM);
   llena_vector(vector,TAM);
   imprime_vector(vector,TAM);
   }

