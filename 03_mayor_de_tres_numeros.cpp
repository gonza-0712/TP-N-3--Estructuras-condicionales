#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Ingrese num1: ";
    cin >> num1;

    cout << "Ingrese num2: ";
    cin >> num2;

    cout << "Ingrese num3: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout << "El mayor es: " << num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "El mayor es: " << num2;
    }
    else
    {
        cout << "El mayor es: " << num3;
    }

    return 0;
}
