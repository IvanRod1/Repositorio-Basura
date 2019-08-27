#include <stdio.h>
#include <stdlib.h>
int sumarNumeros (int,int);
int restarNumeros(int,int);
float dividirNumeros(int,int);
int multiplicarNumeros(int,int);
int factorialNumero(int);
void menuOpciones(int,int);
int pedirNumero();
int main()
{
    int numero1 = pedirNumero();
    int numero2 = pedirNumero();
    printf("Numero 1: %d y Numero 2: %d. Que quieres hacer con estos numeros?\n",numero1,numero2);
    menuOpciones(numero1,numero2);



    return 0;
}
void menuOpciones(int a, int b)
{
    int opcion;
    int resultado;
    int flag = 1;
    printf("1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Factorial de un numero\n6.Salir\n");
    scanf("%d",&opcion);
    //do
    //{
        switch(opcion)
        {
            case 1:
                resultado = sumarNumeros(a,b);
                printf("El resultado es %d",resultado);
                flag = 0;
                break;
            case 2:
                resultado = restarNumeros(a,b);
                printf("El resultado es %d",resultado);
                flag = 0;
                break;
            case 3:
                resultado = multiplicarNumeros(a,b);
                printf("El resultado es %d",resultado);
                flag = 0;
                break;
            case 4:
                resultado = dividirNumeros(a,b);
                printf("El resultado es %d",resultado);
                flag = 0;
                break;


        }


    //}while(opcion!=6);
}
int sumarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA + numB;
    return auxiliarResultado;
}
int restarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA - numB;
    return auxiliarResultado;
}
int multiplicarNumeros(int numA, int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA * numB;
    return auxiliarResultado;
}
float dividirNumeros(int numA,int numB)
{
    float auxiliarResultado;
    auxiliarResultado = (float)numA/(float)numB;
    return auxiliarResultado;
}
int pedirNumero()
{
    int numero;
    printf("Ingrese numero:");
    scanf("%d",&numero);
    return numero;
}
