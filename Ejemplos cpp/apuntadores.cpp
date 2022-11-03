#include <iostream>

using namespace std;

main(){
	int a = 5;
	int *apuntador_a = &a;		//Guarda direcciones de memoria
	
	cout << "direccion de memoria de a = " << &a << "		int a = " << a << "\ndireccion en apuntador = " << apuntador_a \
	<< "		valor en dirrecion (apuntador invertido) = " << *apuntador_a << endl;
	
}
