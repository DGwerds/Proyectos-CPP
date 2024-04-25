#include <iostream>
using namespace std;

main(){
	while (true){
	int n;
	cout << "\nIngrese el valor de n:\n";
	cin >> n;
//	int vect[n][n]; 
//	
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			if (i==j){
//				vect[i][j] = 1;
//			} else{
//				vect[i][j] = 0;
//			}
//		}
//	}
	
	cout << "la matriz identidad de " << n << "x" << n << " es:\n";
	for (int i = 0; i <= n-1; i++){
		cout << "[";
		for (int j = 0; j <= n-1; j++){
			if (i==j){
				cout << 1;
			} else {
				cout << 0;
			}
			if (j != n-1){
				cout << ", ";
			}	
		}
		cout << "]\n";
	}
	}
}
