#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, n3, maior;
    cin >> n1 >> n2 >> n3;
    maior = (n1+n2+abs(n1-n2))/2;
    if(maior>n3)
    {
        cout << maior << " eh o maior" << endl;
    }
    else
    {
        maior = n3;
        cout << maior << " eh o maior" << endl;
    }
    return 0;
}
