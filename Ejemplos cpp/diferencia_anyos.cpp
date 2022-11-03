#include <iostream>
using namespace std;

int dias_bisiestos(int a1, int a2){
	int bisiestos = 0;				//por si al caso = 0
	for (a1; a1<=a2; a1++){		//para cada anyo se verifica si es bisiesto
		if (a1%4 == 0 or a1%100 == 0 and a1%400 != 0){				//condicion
			bisiestos++;
		}
	}
	return bisiestos;				//total de anyos bisiestos encontrados
}

int diferencia_fechas(int d1, int m1, int a1, int d2, int m2, int a2){
	int dias = 0;
	dias += (a2-a1)*365;				//sumar diferencia de anyos a dias
	dias += int((m2-m1)*30.417);		//sumar diferencia de meses a dias
	dias += d2-d1;						//sumar diferencia de dias
	dias += dias_bisiestos(a1, a2);		//retorna los dias bisiestos y los suma
	return dias;
}

main() {
	int d1, m1, a1, d2, m2, a2;
	while (true){
		cout << "Ingrese la primera fecha: ";
		cin >> d1 >> m1 >> a1;							// no admite "/" solo espacios
		cout << "Ingrese la segunda fecha (mayor): ";
		cin >> d2 >> m2 >> a2;
		cout <<"Han transcurrido " << diferencia_fechas(d1, m1, a1, d2, m2, a2) << " dias entre la primera y la segunda fecha.\n" << endl;
	}
}
