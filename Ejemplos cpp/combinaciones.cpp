#include <iostream>
using namespace std;

main(){
	int n, salida;
	do{
		salida = 0;
		cout << "ingrese el puntaje: ";
		cin >> n;
		for (int i = 1; i<=6; i++){				//primer dado
			for (int j = 1; j<=6; j++){			//segundo dado
				if (i+j == n){					//si la suma de i+j es n, la variable de combinaciones aumenta en 1
					salida++;
					cout << "Cumple; ";
				}
				cout << i << " + " << j << " = " << i+j << endl;
			}
		}
	cout << "Hay " << salida << " combinaciones para obtener " << n << endl<< endl;
	} while(n != 0);
}
