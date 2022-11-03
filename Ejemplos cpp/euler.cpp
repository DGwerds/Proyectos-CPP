#include <iostream>
using namespace std;

main(){
	double n, e=1, fact=1;
	cout << "Ingrese el numero de terminos n: ";
	cin >> n;
	for (double i = 1; i<=n; i++){
		fact *= i;
		e += 1/fact;
	}
	cout << "El valor aproximado de Euler es: " << e << endl;
}
