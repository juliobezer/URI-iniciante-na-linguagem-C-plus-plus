#include <iostream>
#include <math.h>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main()
{
    double A, B, C, aT, aC, aTrap, aQua, aRet;
    cin >> A >> B >> C;
    aT = (A*C)/2;
    aC = pi*pow(C,2);
    aTrap = ((A+B)*C)/2;
    aQua = pow(B,2);
    aRet = A*B;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << aT << endl;
    cout << "CIRCULO: " << aC << endl;
    cout << "TRAPEZIO: " << aTrap << endl;
    cout << "QUADRADO: " << aQua << endl;
    cout << "RETANGULO: " << aRet << endl;
    return 0;
}
