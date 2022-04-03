#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num, qtdHoras;
	float valor, salario;
	cin >> num >> qtdHoras >> valor;
	salario = qtdHoras * valor;
	cout << "NUMBER = " << num << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << salario << endl;
	return 0;
}
