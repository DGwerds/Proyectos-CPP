#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Spanish");
	int anio, bisiestos = 0;
	string aniosBisiestos;
	
	cout << "Ingrese un año pasado: \n";
	cin >> anio;
	cout << "\nLa cantidad de años bisiestos es: \n";
	
	for (anio; anio<=2021; anio++){								//para cada anio se verifica si es bisiesto
		if (anio%4 == 0 or anio%100 == 0 and anio%400 != 0){	//condiciones para ser bisiesto
			bisiestos++;
			aniosBisiestos += to_string(anio) + ", ";			//se suma el anio en cuestion
		}
	}
	
	cout << bisiestos << " años bisiestos entre " << anio << " y 2021\n";
	cout << "\nLos años bisiestos son: \n" << aniosBisiestos;
}


