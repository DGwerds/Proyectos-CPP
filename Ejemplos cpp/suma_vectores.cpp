#include <iostream>
#include <cmath>
using namespace std;

void imp_matriz(int vec[], int tamano){
	int x = 0, j = 0;

	for (int i = 0; i < round(sqrt(tamano)); i++){
		x = 0;
		cout << "[";
		while (x != round(sqrt(tamano))){
			cout << vec[j] << " ";
			j++;
			x++;
		}
		cout << "]\n";
	}
}

void sumar_matriz(int vec1[], int vec2[], int tamano1, int tamano2){
	int x = 0, j = 0;
	
	for (tamano1; tamano1 < tamano2; tamano1++){
		vec1[tamano1] = 0;
	}
	for (tamano2; tamano2 < tamano1; tamano2++){
		vec2[tamano2] = 0;
	}
	
	for (int i = 0; i < round(sqrt(tamano1)); i++){
		x = 0;
		cout << "[";
		while (x != round(sqrt(tamano1))){
			cout << vec1[j]+vec2[j] << " ";
			j++;
			x++;
		}
		cout << "]\n";
	}
}

main(){
	int vectA[] = {1, 0, 0, 1};
	int vectB[] = {0, 1, 0, 0};
	
	int t_vectA = sizeof(vectA)/sizeof(vectA[0]);
	int t_vectB = sizeof(vectB)/sizeof(vectB[0]);
	
	cout << "\nMatriz A: \n";
	imp_matriz(vectA, t_vectA);
	
	cout << "\nMatriz B: \n";
	imp_matriz(vectB, t_vectB);
	
	cout << "\nLa matriz de salida C es: \n";
	sumar_matriz(vectA, vectB, t_vectA, t_vectB);
}
