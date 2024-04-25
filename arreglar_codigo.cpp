#include <iostream>
using namespace std;

//void retornar_mayor(int a){			//Void no retorna ningun valor y hace falta el parametro "b"
int retornar_mayor(int a, int b){
	if (a>b){
		return a;
	} else{
		return b;
	}
}

int main(){
	int a,b;
	
	cout << "Ingrese el valor de a: \n";
	cin >> a;
	cout << "Ingrese el valor de b: \n";
	cin >> b;
	
	cout << "El numero mayor ingresado es:  " << retornar_mayor(a, b);
}
