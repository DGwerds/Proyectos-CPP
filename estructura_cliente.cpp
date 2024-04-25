#include <iostream>
using namespace std;


struct cliente{
	int edad;
	long long cedula;
	string nombre;
};


main(){
	int num_clientes;	
	cout << "cuantos clientes van a ingresar?: ";
	cin >> num_clientes;
	
	struct cliente datos[num_clientes];
	
	for (int i = 0; i < num_clientes; i++){
		cout << "\ningrese los datos del cliente " << i+1 << endl;
		cout << "edad: ";
		cin >> datos[i].edad;
		
		cout << "Cedula: ";
		cin >> datos[i].cedula;
		
		cout << "Nombre: ";
		cin >> datos[i].nombre;
	}
	
	cout << "---------------------------\n\n";
	
	cout << "Los clientes ingresados fueron: \n";
	for (int i = 0; i < num_clientes; i++){
		cout << datos[i].nombre << ", CC " << datos[i].cedula << ", Edad " << datos[i].edad << endl; 
	}
	
}
