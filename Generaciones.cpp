#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

bool probabilidad(int porcentaje, int restar = 0){			//calcula la probabilidad de dar true
	bool si = false;
	if (rand()%10+1 <= (porcentaje/10)-(restar/10)){
		si = true;
	}
	return si;
}

int RNG(int min = 1, int max = 10){							// Random number generator
	return rand()%max+min;
}

main(){
	srand(time(NULL));
	setlocale(LC_ALL,"Spanish");
	int gen_max = 0, casados = 0, gen_actual = 1, hijos_actuales = 0, hijitos = 0;
	cout << "\nIngrese el número de generaciones: \n";
	cin >> gen_max;
	
	if (gen_max <= 20){					//la generacion maxima es 20
		if (probabilidad(100)){
				hijitos += RNG(1, 10);
		}
		for (gen_actual; gen_actual <= gen_max; gen_actual++){		//para las demas generaciones
			cout << "\nla generacion " << gen_actual << " tiene:\n";
			cout << hijitos << " hijos." << endl;
			
			for (hijos_actuales; hijos_actuales <= hijitos; hijos_actuales++){
				if (probabilidad(60, (5*gen_actual-1))){
					casados++;
				}
			}
			
			for (int i = 0; i <= casados; i++){						//para los casados (al principio es 0)..
				if (probabilidad(80, 5*gen_actual-1)){				//se calcula cuantos hijos va a tener
					hijitos += RNG(1, 5);							//aleatorios
				}
			}
			
			cout << "De esos " << casados << " se casaron\n";
		}
		cout << "\nla generacion " << gen_max << " tiene " << hijitos << " hijitos\n";
	} else{
		cout << "Max de generaciones = 20";
	}
}
