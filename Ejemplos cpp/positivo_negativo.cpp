#include <iostream>
#include <string>
using namespace std;

main(){
	int n;
	string posi, nega;
	do{
		cout << "Ingrese un numero: ";
		cin >> n;
		if (n > 0){
			posi += "*";
		} else if (n < 0){
			nega += "*";
		}
	} while(n != 0);
	cout << "Los positivos y negativos ingresados son:\nPositivos: " << posi << "\nNegativos: " << nega << endl;
}