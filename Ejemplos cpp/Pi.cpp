#include <iostream>
using namespace std;

main(){
	int n;
	bool p = true;							//p de positivo
	double pi;								//en este caso use double para que pueda almacenar mas decimales
	cout<<"Ingrese un numero de terminos: ";
	cin >> n;
	for(double i = 1; i<=n; i+=2){			//MALPARI**, i NO puede ser entero porque nos combierte el resultado a un entero
		if (p == true){						//esto es para que intercale entre sumar y restar
			pi += (4/i);
			p = not p;						//not true = false
		}else{
			pi -= (4/i);
			p = not p;;
		}
	}
	cout<< "El valor aproximado de pi es: "<< pi << " y se calculo con " << n << " terminos."; //no admite tildes???
}
