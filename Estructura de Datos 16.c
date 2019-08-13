#include<stdio.h>
#define A 2
#define B 50
void asigna(char [A][B],char*[A],char***);
void carga(char**);
void imprime(char**);

 int main()
 {
     system("color F0");
     char cad[A][B], *cade[A],**cadena;
     asigna(cad,cade,&cadena);
     carga(cadena);
     imprime(cadena);
     getchar();
     getchar();
 }

 void asigna(char cad[A][B], char *cade[A], char***cadena)
 {
     int i;
     for(i=0;i<A;++i)
     {
         *(cade+i)=*(cad+i);
     }
     *cadena=cade;
 }

 void carga(char **cadena)
 {
     int i;
     printf("\n\t\tPuntero a Matriz de Punteros, Tipo Caracter.\n\n");
     printf("\nIngresa las Cadenas.\n\n");
     for(i=0;i<A;++i)
     {
         gets(*(cadena+i));
     }
 }

void imprime(char **cadena)
{
    int i;
    printf("\n\nLas Cadednas Ingresadas fueron.\n\n");
    for(i=0;i<A;++i)
    {
        puts(*(cadena+i));
    }
}

