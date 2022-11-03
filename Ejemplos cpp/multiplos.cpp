#include <iostream>
#include <math.h>
using namespace std;

main(){
	int n, s, d;							//n = numero, s = suma, d = diez
	cout << "Ingrese un numero entero: ";
	cin >> n;
	cout << "Sus multiplos son:";
	for (int i = 1; d<=10; i++){
		if (i%n == 0){
			d++;
			s += i;
			cout << " " << i;
		}
	}
	cout << "\nLa sumatoria de sus multiplos es: " << s;
}
