#include <iostream>
using namespace std;

void reordenar(int*, int);

main(){
	int tamanio = 5, vec[tamanio];
	
	cout << "Vector: [";
	for (int i = 0; i < tamanio-1; i++){
//		cin >> vec[i];
		vec[i] = rand()%9+1;
		cout << vec[i] << " ";
	} cout << vec[tamanio-1] <<"]\n";


	cout << "Vector ordenado: [";
	reordenar(vec, tamanio);
	for (int i = 0; i < tamanio-1; i++){
		cout << vec[i] << " ";
	} cout << vec[tamanio-1] <<"]\n";
}


void reordenar(int *vec, int tamanio){
	bool cambio = true;
	int aux;
	while(cambio){
		cambio = false;
		for(int i = 0; i < tamanio-1; i++){
			if(vec[i]>vec[i+1]){
				aux = vec[i];
				vec[i] = vec[i+1];
				vec[i+1] = aux;
				cambio = true;
			}
		}
	}
}
