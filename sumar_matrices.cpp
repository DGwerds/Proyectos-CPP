#include <iostream>
using namespace std;

main(){
	int n;
	
	cout << "Ingrese el valor de n: \n";
	cin >> n;
	int matriz1[n][n], matriz2[n][n], matrizResultante[n][n];
	
	cout << "Ingrese los datos de la primera matriz:\n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			matriz1[i][j] = i;
			//cin >> matriz1[i][j];
		}
	}
	
	cout << "la primera matriz es:\n";
	for (int i = 0; i < n; i++){
		cout << "[";
		for (int j = 0; j < n; j++){
			cout << matriz1[i][j];
			if (j != n-1){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}

	cout << "\nIngrese los datos de la segunda matriz:\n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			matriz2[i][j] = i+1;
			//cin >> matriz2[i][j];
		}
	}
	
	cout << "la segunda matriz es:\n";
	for (int i = 0; i < n; i++){
		cout << "[";
		for (int j = 0; j < n; j++){
			cout << matriz2[i][j];
			if (j != n-1){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}
	
	cout << "\nla matriz suma es:\n";
	for (int i = 0; i < n; i++){
		cout << "[";
		for (int j = 0; j < n; j++){
			matrizResultante[i][j] = (matriz1[i][j]+matriz2[i][j]);
			cout << matrizResultante[i][j];
			if (j != n){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}
}
