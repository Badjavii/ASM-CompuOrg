#include <iostream>
#include <thread>
#include <chrono>
#include "libs/outools.h"
#include "libs/menu.h"

using namespace std;

int main(){

    int op = -1;
    coutf(YELLOW, "SELECT A LANGUAGUE -- SELECCIONE UN LEGUANJE\n");
    this_thread::sleep_for(chrono::seconds(1));
    coutf(YELLOW, "1. ENGLISH (INGLES)  |  2. SPANISH (ESPAÑOL)\n");
    cinv("int", op);
    while (op != 1 && op != 2){
        coutf(RED, "Opción invalida. Intentalo de nuevo:");
        cinv("int", op);
    }
    if (op == 1){
        main_menu();        // Main Menu in English
        showProgressSpinner(6, "Leaving the Sistem");
    } else if (op == 2){
        main_menu_es();     // Main Menu in Spanish
        showProgressSpinner(6, "Saliendo del Sistema");
    }

    return 0;
}