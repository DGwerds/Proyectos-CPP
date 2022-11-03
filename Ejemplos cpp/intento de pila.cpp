#include <iostream>
#include <vector>
using namespace std;

void apilar(vector<string> &, string&, vector<int> &, int&);
void desapilar(vector<string> &, vector<int> &);

int main(){
	int opcion;
	int edad;
	string nombre;
	vector<string> pila_nombres;
	vector<int> pila_edad;
	
	while(true){
		cout << \
		"\nMenu principal: \n"\
		"1)apilar persona \n"\
		"2)desapilar persona \n"\
		"3)salir\n";
		
		cout << "\ningrese la opcion: ";
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << "Ingrese edad: ";
				cin >> edad;
				apilar(pila_nombres, nombre, pila_edad, edad);
				break;
				
			case 2:
				desapilar(pila_nombres, pila_edad);
				break;

				
			case 3:				
				cout << "Saliendo...";
				return 1;
				break;
		
			default:
				cout << "valor no valido, Intente otra vez\n";
				break;
		}
	}
}

void apilar(vector<string> &vec_nombre, string& nombre, vector<int> &vec_edad, int& edad){
	vec_nombre.push_back(nombre);
	vec_edad.push_back(edad);	
	cout << "Se a apilado a " << nombre << " con edad " << edad << endl;
}

void desapilar(vector<string> &vec_nombre, vector<int> &vec_edad){
	if (not vec_edad.empty()){
		int edad_desapilada = vec_edad.back();
		string nombre_desapilado = vec_nombre.back();
		vec_edad.pop_back();
		vec_nombre.pop_back();
		cout << "Se a desapilado a " << nombre_desapilado << " con edad " << edad_desapilada << endl;
	} else{
		cout << "No hay ningun valor que desapilar\n";
	}
}
