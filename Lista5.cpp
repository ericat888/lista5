using namespace std;
#include <iostream>

int main()
{
    cout << "Exercicio 1: contar numeros de 1 a 10";
    for (int i = 1; i < 11; i++) {
        cout << "\nNumero " << i;
    }

    int numTab;

    cout << "\n\nExercicio 2: tabuada\nInforme um numero:";
    cin >> numTab;
    for (int i = 1; i < 11; i++) {
        cout << numTab << " * " << i << " = " << numTab * i << "\n";
    }