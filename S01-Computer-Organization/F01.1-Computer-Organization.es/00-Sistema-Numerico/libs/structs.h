#ifndef STRUCTS_H
#define STRUCTS_H

#include <iostream>
using namespace std;

// Estructura basica de un diccionario
struct Node
{
    int value;
    int height;
    Node *left;
    Node *right;
};

// Funcion para obtener la altura de un nodo
int height(Node *actual)
{
    if (actual == nullptr)
        return 0;
    return actual->height;
};

// Función para obtener el mayor valor entre dos números
int max_number(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
};

// Funcion para crear un nuevo nodo
Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->value = value;
    newNode->left = newNode->right = nullptr;
    newNode->height = 1;
    return newNode;
};

// Funcion de rotacion simple a la derecha de un caso izquierda-derecha
Node *rightRotate(Node *A)
{
    Node *B = A->left;
    Node *C = B->right;

    // Rotar
    B->right = A;
    A->left = C;

    // Actualizar altura
    A->height = max(height(A->left), height(A->right) + 1);
    B->height = max(height(B->left), height(B->right) + 1);

    return B;
};

Node *leftRotate(Node *A)
{
    Node *B = A->right;
    Node *C = B->left;

    // Rotar
    B->left = A;
    A->right = C;

    // Actualizar altura
    A->height = max(height(A->left), height(A->right) + 1);
    B->height = max(height(B->left), height(B->right) + 1);

    return B;
};

int getBalance(Node *actual)
{
    if (actual == nullptr)
        return 0;
    return (height(actual->left) - height(actual->right)); // Diferencia de alturas
};

void insert(Node **node, int value)
{

    // Si el arbol es nulo
    if (*node == nullptr)
    {
        *node = createNode(value);
        return;
    }

    if (value < (*node)->value)
        insert(&((*node)->left), value); // Insertar por la izquierda
    else if (value > (*node)->value)
        insert(&((*node)->right), value); // Insertar por la derecha
    else
        return; // No se permiten valores duplicados

    // Actualizar la altura del nodo actual
    (*node)->height = 1 + max(height((*node)->left), height((*node)->right));

    // Obtener el factor de balanceo del nodo actual
    int balance = getBalance(*node);

    // Si el nodo no esta balanceado (no esta en el rango de 1 a -1), hay 4 casos posibles

    // Caso 1
    if ((balance > 1) && (value < (*node)->left->value))
    {
        *node = rightRotate(*node);
        return;
    }

    // Caso 2
    if ((balance < -1) && (value > (*node)->right->value))
    {
        *node = leftRotate(*node);
        return;
    }

    // Caso 3
    if ((balance > 1) && (value > (*node)->left->value))
    {
        (*node)->left = leftRotate((*node)->left);
        *node = rightRotate(*node);
        return;
    }

    // Caso 4
    if ((balance < -1) && (value < (*node)->right->value))
    {
        (*node)->right = rightRotate((*node)->right);
        *node = leftRotate(*node);
        return;
    }
};

// Funcion para obtener el nodo con el minimo valor
Node *minNode(Node *node)
{
    Node *actual = node;
    // Ir al nodo mas a la izquierda
    while (actual->left != nullptr)
        actual = actual->left;
    return actual;
};

void deleteNode(Node **node, int value)
{
    if (*node == nullptr)
        return;

    // Buscar nodo
    if (value < (*node)->value)
        deleteNode(&((*node)->left), value);
    else if (value > (*node)->value)
        deleteNode(&((*node)->right), value);
    else
    {
        // Nodo encontrado
        if (((*node)->left == nullptr) || ((*node)->right == nullptr))
        {
            Node *temp = (*node)->left ? (*node)->left : (*node)->right;

            if (temp == nullptr)
            {
                temp = *node;
                *node = nullptr;
            }
            else
                **node = *temp;
            delete temp;
        }
        else
        {
            Node *temp = minNode((*node)->right);
            (*node)->value = temp->value;
            deleteNode(&((*node)->right), temp->value);
        }
    }

    if (*node == nullptr)
        return;

    // Actualizar altura
    (*node)->height = 1 + max(height((*node)->left), height((*node)->right));

    // Obtener el factor de balanceo
    int balance = getBalance(*node);

    // Balancear nodo (si se necesita)

    // Caso 1
    if ((balance > 1) && (getBalance((*node)->left) >= 0))
    {
        *node = rightRotate(*node);
        return;
    }

    // Casp 2
    if ((balance > 1) && (getBalance((*node)->left) < 0))
    {
        (*node)->left = leftRotate((*node)->left);
        *node = rightRotate(*node);
        return;
    }

    // Caso 3
    if ((balance < -1) && (getBalance((*node)->right) <= 0))
    {
        *node = leftRotate(*node);
        return;
    }

    // Caso 4
    if ((balance < -1) && (getBalance((*node)->right) > 0))
    {
        (*node)->right = rightRotate((*node)->right);
        *node = leftRotate(*node);
        return;
    }
};

void inOrder(Node *node)
{
    if (node != nullptr)
    {
        inOrder(node->left);
        cout << node->value << ", ";
        inOrder(node->right);
    }
};

void clear(Node **node)
{
    if (*node != nullptr)
    {
        clear(&((*node)->left));
        clear(&((*node)->right));
        delete *node;
        *node = nullptr;
    }
};

#endif