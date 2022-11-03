#include <iostream>
#include <math.h>

using namespace std;

main(){
	float n1, n2;					//se puede usar double pero me aconstumbre a float (en este caso no hacen falta tantos decimales)
	cout << "Ingrese el primer numero real: ";
	cin >> n1;
	cout << "Ingrese el segundo numero real: ";
	cin >> n2;
	if (n1 > n2){
		cout << "El numero mayor elevado al cuadrado es: " << pow(n1, 2) << "\n";//nose que es POW en ingles
		cout << "El numero menor elevado al cubo es: " << pow(n2, 3) << "\n";	//si sé que es WOW y LOL 
	}																			//XD
	else{
		cout << "El numero mayor elevado al cuadrado es: " << pow(n2, 2) << "\n";
		cout << "El numero menor elevado al cubo es: " << pow(n1, 3) << "\n";
	}
}
