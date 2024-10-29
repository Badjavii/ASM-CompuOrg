#include <iostream>
#include "structs.h"
#include "outools.h"
using namespace std;

void menu_principal(){
    int op = -1;
    while (op){
        CLEAR_SCREEN;
        coutf(BLUE, "\t\tPRINCIPAL MENU\n\n");
        coutf(BLUE, "1. Operarte numbers\n");
        coutf(BLUE, "2. Tansform a number to another base\n");
        cinv("int", op);

        switch(op)
        {
        case 1:
            //Menu_Operar_Numeros();
            break;
        case 2:
            //Menu_Transformar_Numeros();
            break;
        case 0:
            // Salir
        default:
            break;
        }
        PAUSE_TERMINAL;
    }
}

void menu_principal_es(){
    int op = -1;
    while (op){
        CLEAR_SCREEN;
        coutf(BLUE, "\t\tPRINCIPAL MENU\n\n");
        coutf(BLUE, "1. Operar numeros\n");
        coutf(BLUE, "2. Tansformar numeros a una diferente base\n");
        cinv("int", op);

        switch(op)
        {
        case 1:
            //Menu_Operar_Numeros();
            break;
        case 2:
            //Menu_Transformar_Numeros();
            break;
        case 0:
            // Salir
        default:
            break;
        }
        PAUSE_TERMINAL;
    }
}