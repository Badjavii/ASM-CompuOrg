#include <iostream>
#include "structs.h"
#include "outools.h"
using namespace std;

void main_menu()
{
    int op = -1;
    while (op)
    {
        CLEAR_SCREEN;
        coutf(BLUE, "\t\tMENU MAIN\n\n");
        coutf(BLUE, "1. Operarte numbers\n");
        coutf(BLUE, "2. Tansform a number to another base\n");
        cinv("int", op);

        switch (op)
        {
        case 1:
            // Menu_Operate_Numbers();
            break;
        case 2:
            // Menu_Transform_Numbers();
            break;
        case 0:
            // Salir
        default:
            break;
        }
        PAUSE_TERMINAL;
    }
}

void main_menu_es()
{
    int op = -1;
    Node *base_datos = nullptr;
    while (op)
    {
        CLEAR_SCREEN;
        coutf(BLUE, "\t\tMENU PRINCIPAL\n\n");
        coutf(BLUE, "1. Ingresar numero al sistema\n");
        coutf(BLUE, "2. Eliminar numero del sistema\n");
        coutf(BLUE, "3. Mostrar numeros\n");
        coutf(BLUE, "4. Operar numeros\n");
        coutf(BLUE, "5. Tansformar numeros a una diferente base\n\n");
        coutf(BLUE, "0. SALIR DEL SISTEMA\n\n");
        cinv("int", op);

        int x;
        switch (op)
        {
        case 1:
            coutf(YELLOW, "Indique un numero: \n");
            cinv("int", x);
            insert(&base_datos, x);
            break;
        case 2:
            coutf(YELLOW, "Indique un numero: \n");
            cinv("int", x);
            deleteNode(&base_datos, x);
            break;
        case 3:
            coutf(YELLOW, "Los numeros guardados en el sistema son: \n");
            inOrder(base_datos);
            break;
        case 4:
            // Menu_Operar_Numeros();
            break;
        case 5:
            // Menu_Transformar_Numeros();
            break;
        case 0:
            // Salir
        default:
            break;
        }
        PAUSE_TERMINAL;
    }
}

void Menu_Operate_Numbers()
{
    int num = -1;
    coutf(YELLOW, "How many numbers you want to operate\n");
    cinv("int", num);
    CLEAR_SCREEN;
    int op = -1;
    coutf(YELLOW, "1. 'I want to create my own numbers'\n");
    coutf(YELLOW, "2. 'I want random numbers'\n");
    cinv("int", op);
    while (op != 1 && op != 2)
    {
        coutf(RED, "Incorrect option. Try again\n");
        cinv("int", op);
    }
    if (op == 1)
    {
    }
}