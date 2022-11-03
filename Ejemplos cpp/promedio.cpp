#include <iostream>
using namespace std;

main(){					//se puede hacer mucho mejor pero ya son las 2am asi que jajaja saludoZzzzz
	float notas[4];
	string n = "n";
	for (int i = 1; i<=3; i++){
		cout << "Ingrese nota parcial " << i << ": ";
		cin >> notas[i];
		notas[4] += notas[i];		//aqui voy a sumar todas las notas
	}
	cout << "El promedio de sus notas es: " << notas[4]/3;  //aqui lo divido por la cantidad de notas
}
