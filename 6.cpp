#include <iostream>
#include <iomanip>
using namespace std;
//Problema sobre Média 1
int main(){
	double A, B, MEDIA;
	cin >> A >> B;
	MEDIA = (A*3.5)/11+(B*7.5)/11;
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}
