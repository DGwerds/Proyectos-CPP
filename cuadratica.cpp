#include <iostream>
#include <math.h>

using namespace std;
int a, b, c;

double solucion1(int a, int b, int c){
	double salida = (-b+sqrt(pow(b, 2)-4*(a)*(c)))/2*a;
	return salida;
}

double solucion2(int a, int b, int c){
	double salida = (-b-sqrt(pow(b, 2)-4*(a)*(c)))/2*a;
	return salida;
}

main(){
	while (true){
		cout << "Ingrese el valor de a: ";
		cin >> a;
		cout << "Ingrese el valor de b: ";
		cin >> b;
		cout << "Ingrese el valor de c: ";
		cin >> c;
//		if (solucion1(a, b, c) != nan and solucion2(a, b, c) != nan){
			cout << "La solucion 1 de la ecuacion es: " << solucion1(a, b, c) << endl;
			cout << "La solucion 2 de la ecuacion es: " << solucion2(a, b, c) << endl;
//		} else {
//			cout << "La ecuacion no tiene solucion en los reales." << endl;
//		}
		
	}
}

