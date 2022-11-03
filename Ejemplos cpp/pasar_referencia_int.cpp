#include <iostream>
using namespace std;

void intercambiar(int &, int &); 

main(){
	int a, b;
	cout << "inserte dos numeros enteros: \n";
	cout << "Numero a: ";
	cin >> a;
	cout << "Numero b: ";
	cin >> b;
	
	intercambiar(a, b);
	cout << "\nDespues de llamar a la funcion:\n";
	cout << "Numero a: " << a << endl;
	cout << "Numero b: " << b << endl;
}

void intercambiar(int &a, int &b){
	int aux;
	aux = a;
	a = b;
	b = aux;
}
