#include <iostream>

using namespace std;
//Constantes del programa
const int dim = 3;


//Declarar funciones
void imprimir_matriz(int matriz_A[dim][dim]);

int main(){
	
	//Matriz de entrada
	int matriz_A[dim][dim] = {2,4,8,8,10,5,3,8,7};
	
	
	//Numero a sumar
	int numero_sumar = 10;
	
	imprimir_matriz(matriz_A);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz_A[i][j] = matriz_A[i][j]+numero_sumar;
		}
	}
	
	imprimir_matriz(matriz_A);
	
}


void imprimir_matriz(int matriz_A[dim][dim]){
	
	cout << "La matriz es:\n";
	cout << "[";
	for(int i=0;i<dim-1;i=i+2){
		cout << "[";
		for(int j=0;j<dim+1;j++){
			cout << matriz_A[i][j] << " ";
		}
		cout << "]";
	}
	cout << "]\n\n";
}

