#include <iostream>
using namespace std;

main(){
	int n;
	do{
		cout << "Ingrese un numero entero mayor cinco: ";
		cin >> n;
	}while (n > 5);
	cout << "Usted ha ingresado un numero menor o igual que 5.";
}
