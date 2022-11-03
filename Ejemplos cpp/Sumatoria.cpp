#include <iostream>
using namespace std;

main(){
	int n, s1, s2, i;
	cout << "Ingrese el valor de n: ";
	cin >> n;
	for (i=0; i<=n; i++){				//Sumatoria simple
		s1 = s1+i;
	}
	cout << "El valor de S1 es: " << s1 << endl;
	s2 = (n*(n+1))/2;
	cout << "El valor de S2 es: " << s2 << endl;
	if (s1==s2){
		cout << "S1 y S2 son iguales.";
	} else{
		cout << "S1 y S2 NO son iguales.";			//en teoria no hace falta else
	}
}