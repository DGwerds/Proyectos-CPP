#include <iostream>
#include <string>
using namespace std;

main(){
	string s, s_total;
	int total;
	cout << "Ingrese su primer nombre: ";		cin >> s;
	s_total += s+" ";
	total += s.length();
	cout << "Ingrese su segundo nombre: ";		cin >> s;
	s_total += s+" ";
	total += s.length();
	cout << "Ingrese su primer apellido: ";		cin >> s;
	s_total += s+" ";
	total += s.length();
	cout << "Ingrese su segundo apellido: ";	cin >> s;
	s_total += s+" ";
	total += s.length();
	cout << "Su nombre es: " << s_total << endl;
	cout << "Su nombre tiene: " << total << " letras" << endl;
}