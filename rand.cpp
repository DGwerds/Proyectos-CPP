#include <iostream>

using namespace std;

int respuesta;


main(){
	while(respuesta != 2){
		cout << "Desea lanzar los dados: \n1 - Si\n2 - No\n";
		cin >> respuesta;
		if (respuesta == 1){
			int dado1 = rand()%6+1;
			int dado2 = rand()%6+1;
			cout << "Los dados cayeron en: " << dado1 << " y " << dado2 << " para un total de " << dado1+dado2 << ".\n\n";
		}
	}
	cout << "Gracias por usar nuestro sistema.";
}