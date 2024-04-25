#include <iostream>

using namespace std;

main(){
	int n;
	cout << "Ingrese un numero entero mayor a 10: ";
	cin >> n;
	if (n > 10){								//verifica si es mayor que 10
		cout << "multiplos de 3: ";
		for (int i = 0; i<=n; i++){				//para todos los numeros menores o iguales que el numero ingresado
			if (i%3==0){						//si el restante de la divicion entre 3 es 0
				cout << i << "  ";				//entonces es numero es multiplo de 3
			}
		}
	}else{
		cout << n << " no es mayor que 10"; 	//en el caso de que no sea mayor que 10
	}
}
