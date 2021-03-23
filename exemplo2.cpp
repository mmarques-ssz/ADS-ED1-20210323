#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	
	cout << "Digite valor int: ";
	cin >> i;

	cout << "Digite valor double: ";
	cin >> d;
	
	cout << "Valor int digitado: " << i << endl;
	cout << "Valor double digitado: " << d << endl;
	cout << endl;
	
	// Formatação para largura (width)

	cout << "Valor int digitado:    " << setw(10) << i << endl;
	cout << "Valor double digitado: " << setw(10) << d << endl;
	cout << endl;	
	
	// Formatação da precisão
	cout << "Valor double digitado: " << setw(10) << setprecision(2) << d << endl;
	cout << "Valor double digitado: " << setw(10) << setprecision(3) << d << endl;
	cout << "Valor double digitado: " << setw(10) << setprecision(4) << d << endl;
    cout << endl;	
	
	// Formatação da precisão/fixa
	cout << fixed;
	cout << setprecision(3);
	cout << "Valor double digitado: " << setw(10) << d << endl;
	cout << "Valor double digitado: " << setw(8) << d << endl;
	cout << "Valor double digitado: " << setw(6) << d << endl;
	cout << endl;	
	
	return 0;
}