#include<iostream>
using namespace std;

int fib(int n){
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
    return fib(n-1)+fib(n-2);
  }

main(){
	int n;
	cout << "Ingrese el n�mero de t�rminos de la serie de Fibonacci: \n";
	cin >> n;
	cout << "Los " << n << " primeros t�rminos de la serie de Fibonacci son: \n";
	for (int i = 0; i < n; i++){
		cout << fib(i) << " ";
	}
}
