#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int i;  // 32 bits -> 4 bytes -> x0000000000000000000000000000000
	double j; 
	double *pj;
	
	i = 100;
	j = 200;
	
	cout << "Valor da vari�vel i: " << i << endl;
	cout << "Endere�o da vari�vel i: " << &i << endl;
	cout << "Tamanho da vari�vel i: " << sizeof(i) << endl;
	cout << endl;
	
	cout << "Valor da vari�vel j: " << j << endl;
	cout << "Endere�o da vari�vel j: " << &j << endl;
	cout << "Tamanho da vari�vel j: " << sizeof(j) << endl;
	cout << endl;
	
	pj = &j;
	*pj = 500;
	
	cout << "Valor de pj: " << pj << endl;
	cout << "Valor do endere�o para onde pj aponta: " << *pj << endl;
	cout << "Endere�o do ponteiro pj: " << &pj << endl;
	cout << "Tamanho do ponteiro pj: " << sizeof(pj) << endl;
	cout << endl;	
	
	return 0;
}