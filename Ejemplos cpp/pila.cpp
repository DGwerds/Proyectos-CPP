#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void push(Node *&,int, string);					//Prototipo de las funciones de la pila
void pop(Node *&,int &, string &);

int main(){
	setlocale(LC_ALL,"spanish");
	struct Node{
		int edad;
		string nombre;
		Node *next_node;							//Apuntador al siguiente nodo
	};

	//El último nodo en llegar a la pila se almacena aquí
	Node *last_node = NULL;
	int opcion;
	int edad_1;
	string nombre_1;
	int output_value_1;
	string output_value_2;
	while(true){
		cout<<"-------------------------"<<endl;
		cout<<" Menú principal: "<<endl;
		cout<<" 1) aplilar persona"<<endl;
		cout<<" 2) desapilar persona"<<endl;
		cout<<" 3) salir"<<endl;
		cout<<" Ingrese la opción "<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<" Ingrese el nombre: ";
				cin>>nombre_1;
				cout<<" Ingrese la edad: ";
				cin>>edad_1;
				push(last_node, edad_1, nombre_1);
				cout<<" Se ha apilado a "<<nombre_1<<" con edad "<<edad_1<<endl;
				break;
			case 2:
				pop(last_node, output_value_1, output_value_2);
				cout<<output_value_2<<" con edad "<<output_value_1<<" ha salido de la pila"<<endl;
				break;
			case 3:
				cout<<" Saliendo ... "<<endl;
				return 1;
				break;
			default:
				cout<<" valor no valido "<<endl;
				break;
		}
	}
	getch ();
	return 0;
}

void push(Node *&last_node,int edad_1, string nombre_1){
	//Crear el espacio en memoría para la nueva caja.
	Node *new_node = new Node();
	new_node->edad = edad_1;
	new_node->nombre = nombre_1;
	new_node->next_node = last_node;
	last_node = new_node;
}

void pop(Node *&last_node,int &output_value_1, string &output_value_2){
	//Apuntador a nodo Auxiliar
	Node *aux = last_node;
	output_value_1 = aux->edad;
	output_value_2= aux->nombre;
	last_node = aux->next_node;
	delete aux;
}
