#include <iostream>
#include <vector>

using namespace std;

main(){
	int n_elementos, n, guardar;
	vector<int> vec;
	bool cambio = true;
	
	cout << "numero de elementos a ingresar: ";
	cin >> n_elementos;

	cout << "El vector generado es: [";
	for (int i=1; i<=n_elementos; i++){
		int aleatorio = rand()%26;
		cout << aleatorio << ", ";
		vec.push_back(aleatorio);
	}
	cout << "]\n";

	while(cambio){
		cambio = false;
		for(int i = 0; i<n_elementos-1; i++){
			if(vec[i]>vec[i+1]){
				guardar = vec[i];
				vec[i] = vec[i+1];
				vec[i+1] = guardar;
				cambio = true;
			}	
		}
	}

	cout << "El vector ordenado es: [";
	for (int i=0; i <= n_elementos-2; i++){
		cout << vec[i] << ", ";
	} 
	cout << vec[n_elementos-1] << "]\n";
}