#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
  
  int tempo = 0;
  float velMed = 0;
  float distTotal = 0;
  float kmBase = 12;
  float qtdLitros = 0;
  
  cin >> tempo;
  cin >> velMed;

  distTotal = velMed * tempo;
  qtdLitros = distTotal/kmBase;

  cout << fixed << setprecision(3);
  cout << qtdLitros;
  
  return 0;
}