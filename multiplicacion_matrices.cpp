#include <iostream>
#include <locale.h>
using namespace std;

main(){
	setlocale(LC_ALL, "Spanish");
	int vec1[3][3] = {1, 2, 3, 4};
	int vec2[2][1] = {5, 1};
	int multiplicado[2][2];
	int sumado[2][1];
	
	cout << "Vector 1\n";
	for (int fila = 0; fila <= 1; fila++){
		cout << "[";
		for (int columna = 0; columna <= 1; columna++){
			cout << vec1[fila][columna];
			if (columna != 1){
				cout << "  ";
			} else{
				cout << "]" << endl;
			}
		}
	}
	
	cout << "\nVector 2\n";
	for (int fila = 0; fila <= 1; fila++){
		cout << "[";
		cout << vec2[fila][0];
		cout << "]" << endl;
	}
	
	cout << "\n\nMultiplicar:\n";
	for (int fila = 0; fila <= 1; fila++){
		cout << "[";
		for (int columna = 0; columna <= 1; columna++){
			cout << vec1[fila][columna] << " x " << vec2[columna][0];
			multiplicado[fila][columna] = (vec1[fila][columna]*vec2[columna][0]);
			if (columna != 1){
				cout << "  +  ";
			} else{
				cout << "]" << endl;
			}
		}
	}
	
	cout << "\nSumar:\n";
	for (int fila = 0; fila <= 1; fila++){
		cout << "[";
		cout << multiplicado[fila][0] << " + " << multiplicado[fila][1] << "]\n";
		sumado[fila][0] = (multiplicado[fila][0]+multiplicado[fila][1]);
	}
	
	cout << "\nResultado:\n";
	for (int fila = 0; fila <= 1; fila++){
		cout << "[";
		cout << sumado[fila][0] << "]\n";
	}
}
