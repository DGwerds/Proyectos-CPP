#include <iostream>
using namespace std;

main(){
	int n;
	string numeros[11] = {" ", "Un", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez"};
	
	cout << "Ingrese el limite de elefantes: ";
	cin >> n;
	for (int i=1; i<=n; i++){
		cout << "\n\n-------------------------------\n\n";
		if (i ==1 ){
			cout<< numeros[i] << " elefante se balanceaba\nSobre la tela de una arana\nComo veia que resistia\nFue a llamar otro elefante";
		} else {
			cout<< numeros[i] << " elefantes se balanceaban\nSobre la tela de una arana\nComo veia que resistia\nFueron a llamar otro elefante";
		}
		
	}
}


