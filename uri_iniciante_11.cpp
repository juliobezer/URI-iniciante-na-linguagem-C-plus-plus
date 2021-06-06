#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int codP1, codP2, qtdP1, qtdP2;
    float valP1, valP2, valTotal;
    cin >> codP1 >> qtdP1 >> valP1;
    cin >> codP2 >> qtdP2 >> valP2;
    valTotal = (qtdP1*valP1) + (qtdP2*valP2);
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << valTotal << endl;
    return 0;
}
