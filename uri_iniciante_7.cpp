#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double A, B, C, MEDIA;
	cin >> A >> B >> C;
	MEDIA = (A*2)/10+(B*3)/10+(C*5)/10;
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}
