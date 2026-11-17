#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Ingrese primer numero: ";
    cin >> a;

    cout << "Ingrese segundo numero: ";
    cin >> b;

    if (a > b)
    {
        cout << "Suma: " << a + b << endl;
        cout << "Diferencia: " << a - b;
    }
    else
    {
        cout << "Producto: " << a * b << endl;

        if (b != 0)
        {
            cout << "Division: " << a / b;
        }
        else
        {
            cout << "No se puede dividir por cero.";
        }
    }

    return 0;
}
