#include <iostream>
using namespace std;

struct mascota{
	int edad, peso;
	string nombre;
};

main(){
	const int num_mascotas = 2;
	
	struct mascota datos[num_mascotas];
	
	for (int i = 0; i < num_mascotas; i++){
		cout << "\ningrese los datos de la mascota " << i+1 << endl;
		cout << "edad: ";
		cin >> datos[i].edad;
		
		cout << "Peso: ";
		cin >> datos[i].peso;
		
		cout << "Nombre: ";
		cin >> datos[i].nombre;
	}
	
	cout << "---------------------------\n\n";
	
	cout << "Las mascotas ingresadas fueron: \n";
	for (int i = 0; i < num_mascotas; i++){
		cout << datos[i].nombre << ", Edad " << datos[i].edad << ", Peso " << datos[i].peso << endl; 
	}
	
}
