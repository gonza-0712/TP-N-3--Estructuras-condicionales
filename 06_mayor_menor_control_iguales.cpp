#include <iostream>
using namespace std;

int main()
{
    int A, B, C;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    cout << "Ingrese C: ";
    cin >> C;

    if (A == B || A == C || B == C)
    {
        cout << "Error: hay numeros iguales";
    }
    else
    {
        if (A > B && A > C)
            cout << "Mayor: " << A << endl;
        else if (B > A && B > C)
            cout << "Mayor: " << B << endl;
        else
            cout << "Mayor: " << C << endl;

        if (A < B && A < C)
            cout << "Menor: " << A;
        else if (B < A && B < C)
            cout << "Menor: " << B;
        else
            cout << "Menor: " << C;
    }

    return 0;
}
