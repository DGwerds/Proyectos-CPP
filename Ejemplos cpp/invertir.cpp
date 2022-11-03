#include <iostream>
using namespace std;

string invertir(string s){
	string salida;
	for (int i = s.length()-1; i >=0; i--){
		salida += s[i];								//tambien sirve poner cout << s[i]; y ya
	}
	return salida;
}

main (){
	while (true){
		string s;
		cout << "Ingrese su nombre: ";
		cin >> s;
		cout << "Su nombre al contrario es: " << invertir(s) << endl << endl;
	}
}