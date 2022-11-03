#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Spanish");
	int n, suma;
	
	cout << "Ingrese el valor de n: \n";
	cin >> n;
	int vec1[n][n];
	
	cout << "\nIngrese los datos de la primera matriz:\n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
//			vec1[i][j] = rand()%10+1;
			cin >> vec1[i][j];
		}
	}
	
	cout << "\nla matriz ingresada de " << n << "x" << n << " es:\n";
	for (int i = 0; i <= n-1; i++){
		cout << "[";
		for (int j = 0; j <= n-1; j++){
			cout << vec1[i][j];
			if (j != n-1){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}
	
	cout << "la matriz transpuesta de " << n << "x" << n << " es:\n";
	for (int i = 0; i <= n-1; i++){
		cout << "[";
		for (int j = 0; j <= n-1; j++){
			cout << vec1[j][i];
			if (j != n-1){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}
}
