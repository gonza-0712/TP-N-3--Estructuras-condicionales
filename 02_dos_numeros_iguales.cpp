#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Ingrese num1: ";
    cin >> num1;

    cout << "Ingrese num2: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " es mayor";
    }
    else if (num2 > num1)
    {
        cout << num2 << " es mayor";
    }
    else
    {
        cout << "Ambos numeros son iguales";
    }

    return 0;
}
