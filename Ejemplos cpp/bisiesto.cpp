#include <iostream>
#include <locale.h>
using namespace std;

bool validar_year(int year){				//no puedo escribir la ñ en el codigo
	bool bisiesto = false;					//codigo "espaninglish" XDDDDDD
	if (year%4 == 0 and year%100 != 0){
		bisiesto = true;
		if (year%400 == 0){
			bisiesto = true;			
		}
	}
	return bisiesto;
}

main (){
	setlocale(LC_ALL, "Spanish");
	int n;
	while(true){
		cout << "\nIngrese el anyo a validar: ";
		cin >> n;
		if (validar_year(n)){
			cout << n << " es un anyo bisiesto.\n";
		} else{
			cout << n << " no es un anyo bisiesto.\n";
		}
	}
}
