#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char nome[10];
	cin.getline(nome,10);
	double salFixo, valorVendas,totalSal;
	cin >> salFixo >> valorVendas;
	totalSal = (valorVendas * 0.15) + salFixo;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << totalSal << endl;
	return 0;
}
