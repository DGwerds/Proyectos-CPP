#include <iostream>

using namespace std;

main(){
	int ID_cliente;
	
	struct cliente{
		int edad;
		string nombre;
	};
	struct cliente clientes[100];
	
	do{
		cin >> clientes[ID_cliente].edad;
		cout << "La edad es: " << clientes[ID_cliente].edad;
		cin >> clientes[ID_cliente].nombre;
		cout << "El nombre es: " << clientes[ID_cliente].edad;
		cin >> ID_cliente;
	} while (ID_cliente != -1);

	
}
