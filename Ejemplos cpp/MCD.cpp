#include <iostream>
#include <locale.h>	
using namespace std;

int MCD(int a, int b){	
	if (a == 0){ 				//Si int a = 0.
		return b;				//sale del "Bucle"
	}
//	cout << "\na: " << a << "	   b: " << b << "	  a%b: "<<  a%b << endl;
	return MCD(b%a, a);
	/*  El valor se guarda en b y se vuelve a dividir por el modulo de 
		b%a	si b%a no da 0, entonces se guarda el valor dado y se repite
		hasta que b%a de 0.
	*/
}

main(){
	setlocale(LC_ALL,"spanish");	// Funci�n que permite ingresar caracteres y simbolos del Espa�ol.
	int a, b;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de b: " << endl;
	cin >> b;
	cout << "El m�ximo com�n divisor de " << a << " y " << b << " calculado recursivamente es: " << MCD(a, b) << endl;
}
