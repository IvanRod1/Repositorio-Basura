# Repositorio-Basura
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    do
    {
        printf("1. ALTA Cliente\n");
        printf("2. BAJA Cliente\n");
        printf("3. MODIFICAR Cliente\n");
        printf("4. MOSTRAR Clientes\n");
        printf("5. SALIR\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);
        switch(opcion)
        {
            case '1':
                printf("Estoy dando de alta!!!\n");
                break;
            case '2':
                printf("Estoy dando de baja!!!\n");
                break;
            case '3':
                printf("Estoy modificando!!!\n");
                break;
            case '4':
                printf("Estoy mostrando!!!\n");
                break;
            default:
                printf("Opcion incorrecta!!!\n");

        }
    system("pause");
    system("cls");
    }
    while(opcion!='5');

    return 0;
}
