#include <iostream>
using namespace std;

// Diccionario de Sistema Hexadecimal
string Hexa[16] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};

// Diccionario de Sistema Binario
string Bin[2] = {"0", "1"};

// Diccionario de Sistema Decimal
string Deci[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

// Estructura basica de un diccionario
struct Node{
    int value;
    Node* next;
};