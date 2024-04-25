#include <iostream>
using namespace std;

bool InvertirComprobar(string palabra){
	bool salida = false;
	int similitud = 0;
	for (int i = 0; i < palabra.length()-1; i++){
		if (palabra[i] == palabra[palabra.length()-i-1]){	//palabra.length()-i-1 es el otro extremo de la palabra
			similitud++;
		}
	}
	if (similitud == palabra.length()-1){		//si las similitudes concuerdan con el tamaño de la palabra...
		salida = true;							//...no hace falta comprobar la letra de la mitad
	}
	return salida;
}

main (){
	setlocale(LC_ALL, "Spanish");
	int palindromos = 0;
	string palabra;
	for (int i = 1; i <= 5; i++){
		cout << "ingrese la palabra " << i << ":\n";
		cin >> palabra;
		palindromos += InvertirComprobar(palabra);
	}
	cout << "\nUsted ha ingresado " << palindromos << " palíndromos y " << 5-palindromos << " no palíndromos.";
}
