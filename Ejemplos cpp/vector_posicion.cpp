#include <iostream>

using namespace std;

int posicion(int n, int vec[], int tamano_v){
	for (int i=0; i<tamano_v; i++){
		if (vec[i] == n){
			return i;
		}
	}
	return -1;
}

main(){
	int n, vec[] = {3, 8, 2, 1, 5, 9};
	int tamano_v = sizeof(vec)/sizeof(vec[0]);		//sizeof() regresa el tamaño en bytes
													//sizeof(vec) = 4*elementos, un entero se guarda en 4 bytes
													//sizeof(vec)= 4*elementos/sizeof(vec[x])= 4 = elementos
	while(true){
		cout << "Vector: [";
		for (int i = 0; i < tamano_v-1; i++){
			cout << vec[i] << " ";
		} cout << vec[tamano_v-1] << "]\n";
	
		cout << "Numero: ";
		cin >> n;
	
		cout << "Posicion en el vector: " << posicion(n, vec, tamano_v) << endl << endl;
	}	
}