#include <iostream>
#include <vector>

using namespace std;

int n_elementos, n, guardar;
vector<float> vec;

main(){
	cout << "Ingrese el valor de N: " << endl;
	cin >> n_elementos;

	for (int k=1; k<=n_elementos; k++){
		cout << "Elemento " << k << ": ";
		cin >> n;
		vec.push_back(n);
	}
	
	for (int i=0; i<n_elementos; i++){
		for (int j=0; j<n_elementos; j++){
			if(vec[i]<vec[j]){
				guardar = vec[i];
				vec[i] = vec[j];		
				vec[j] = guardar;
   			}	
		}
	}
	
	cout << "El vector ordenado es: \n[";
	for (int i=0; i<n_elementos-1; i++){
		cout << vec[i] << ", ";
	}
	cout << vec[n_elementos-1] << "]\n";
}