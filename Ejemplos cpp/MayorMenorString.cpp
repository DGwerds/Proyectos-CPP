#include <iostream>
#include <string>
using namespace std;

main(){
	string s, s_mayor, s_menor;
	int n;
	cout << "Ingrese el numero de palabras: ";	cin >> n;
	for (int i = 1; i<=n; i++){
		cout << "Ingrese la palabra " << i << ": ";	
		cin >> s;
		if (s.length()>s_mayor.length()){
			s_mayor = s;
		}
		if (s.length()<s_menor.length() or s_menor.length() == 0){
			s_menor= s;
		}
	}
	cout << "La palabra mas larga que ingreso fue: " << s_mayor << endl;
	cout << "La palabra mas corta que ingreso fue: " << s_menor << endl;
}