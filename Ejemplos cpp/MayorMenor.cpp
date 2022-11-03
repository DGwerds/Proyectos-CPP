#include <iostream>
using namespace std;

main(){
	int n, n_mayor, n_menor, x;
	cout << "Ingrese un numero de terminos: ";
	cin >> x;
	for (int i=1; i<=x; i++){
		cout << "Ingrese un numero: ";
		cin >> n;
		if (n>n_mayor){
			n_mayor = n;
		}
		else if(n<n_menor or n_menor == 0){
			n_menor = n;
		}
	}
	cout << "El mayor es " << n_mayor << endl;
	cout << "El menor es " << n_menor << endl;
}