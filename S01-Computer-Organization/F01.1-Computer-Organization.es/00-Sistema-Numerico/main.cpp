#include <iostream>
#include "outools.h"
#include "menu.h"
using namespace std;

int main(){

    int op = -1;
    coutf(YELLOW, "SELECT A LANGUAGUE -- SELECCIONE UN LEGUANJE");
    coutf(YELLOW, "1. ENGLISH (INGLES)  |  2. SPANISH (ESPAÑOL)");
    cinv("int", op);
    while (op != 1 && op != 2){
        coutf(RED, "Opción invalida. Intentalo de nuevo:");
        cinv("int", op);
    }
    if (op == 1){
        menu_principal();        //
    } else if (op == 2){
        menu_principal_es();     // 
    }


    return 0;
}