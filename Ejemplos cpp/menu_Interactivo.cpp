#include <iostream>
#include <string>
using namespace std;

string numerar3(int desde, int hasta, string datos[3][8], int periodo){
	string resultado;
	int n = 1;
	for (int i = desde; i<=hasta; i++){
		resultado += to_string(n)+" - " + datos[periodo][i-1] + "\n";
		n++;
	}
	resultado += "3 - Cancelar y salir\n\nPor favor, ingrese la opcion de transporte de su preferencia: ";
	return resultado;
}

main(){
	int opcion, velocidad, costo, km;	
	string resumen = "Resumen de su seleccion: \n";
	string opciones[5] = {"Terrestre Automovil", "Terrestre Tren", "Aereo", "Acuatico", "Cancelar y salir\n"};
	string info[3][8] = {"Carro Economico", "Camioneta", "Tren de carbon", "Tren rapido", "Segunda clase", "Primera clase", "Lancha", "Barco a vapor",
								"60",			"90",			"100",			"200",			"300",			"300",			"60",		"40",
								"100",			"200",			"500",			"900",			"1000",			"3000",			"600",		"100"};	

	cout << "Sus opciones de transporte son: \n";
	for (int i = 1; i<=5; i++){
		cout << i << " - " << opciones[i-1] << endl;
	}
	cout << "Por favor, ingrese la opcion de transporte de su preferencia: "; 
	cin >> opcion;
	resumen += "Categoria: " + opciones[opcion-1]+"\n";
	cout << "Usted ha seleccionado " << opciones[opcion-1]<< endl;
	if (opcion != 5){
		cout << "Sus opciones de transporte son: \n";
		switch (opcion){
			case 1:
				cout << info[0][opcion-1] << endl;
				cout << numerar3(1, 2, info, 0);
				cin >> opcion;
				switch (opcion){
					case 1:
						cout << "Usted ha seleccionado " << info[0][opcion-1] << endl;
						resumen += "Tipo: " + info[0][opcion-1] +"\n";
						velocidad = stoi(info[1][opcion-1]);
						costo = stoi(info[2][opcion-1]);
						break;
					
					case 2:
						cout << "Usted ha seleccionado " << info[0][opcion-1] << endl;
						resumen += "Tipo: " + info[0][opcion-1]+"\n";
						velocidad = stoi(info[1][opcion-1]);
						costo = stoi(info[2][opcion-1]);
						break;
					
					default:
						cout << "Usted ha seleccionado " << opciones[4] << endl;
						break;
				}
				break;
				
			case 2:
				cout << numerar3(3, 4, info, 0);
				cin >> opcion;
				switch (opcion){
					case 1:
						cout << "Usted ha seleccionado " << info[0][opcion+1] << endl;
						resumen += "Tipo: " + info[0][opcion+1] +"\n";
						velocidad = stoi(info[1][opcion+1]);
						costo = stoi(info[2][opcion+1]);
						break;
					
					case 2:
						cout << "Usted ha seleccionado " << info[0][opcion+1] << endl;
						resumen += "Tipo: " + info[0][opcion+1]+"\n";
						velocidad = stoi(info[1][opcion+1]);
						costo = stoi(info[2][opcion+1]);
						break;
					
					default:
						cout << "Usted ha seleccionado " << opciones[4] << endl;
						break;
				}
				break;
				
			case 3:
				cout << numerar3(5, 6, info, 0);
				cin >> opcion;
				switch (opcion){
					case 1:
						cout << "Usted ha seleccionado " << info[0][opcion+3] << endl;
						resumen += "Tipo: " + info[0][opcion+3] +"\n";
						velocidad = stoi(info[1][opcion+3]);
						costo = stoi(info[2][opcion+3]);
						break;
					
					case 2:
						cout << "Usted ha seleccionado " << info[0][opcion+3] << endl;
						resumen += "Tipo: " + info[0][opcion+3]+"\n";
						velocidad = stoi(info[1][opcion+3]);
						costo = stoi(info[2][opcion+3]);
						break;
					
					default:
						cout << "Usted ha seleccionado " << opciones[4] << endl;
						break;
				}
				break;
				
			case 4:
				cout << numerar3(7, 8, info, 0);
				cin >> opcion;
				switch (opcion){
					case 1:
						cout << "Usted ha seleccionado " << info[0][opcion+4] << endl;
						resumen += "Tipo: " + info[0][opcion+4] +"\n";
						velocidad = stoi(info[1][opcion+4]);
						costo = stoi(info[2][opcion+4]);
						break;
					
					case 2:
						cout << "Usted ha seleccionado " << info[0][opcion+4] << endl;
						resumen += "Tipo: " + info[0][opcion+4]+"\n";
						velocidad = stoi(info[1][opcion+4]);
						costo = stoi(info[2][opcion+4]);
						break;
					
					default:
						cout << "Usted ha seleccionado " << opciones[4] << endl;
						break;
				}
				break;
				
			default:
				cout << "Usted ha seleccionado " << opciones[4] << endl << endl;
				break;
		}
		cout << "\nPor favor, ingrese los km de viaje a recorrer: ";
		cin >> km;
		cout << endl;
		resumen += "Km que recorrer: " + to_string(km) + "\n";
		int minutos = float(km%velocidad)/float(velocidad)*60;
		resumen += "Tiempo estimado: " + to_string(km/velocidad) + " Horas " + to_string(minutos)+  " Minutos\n";
		resumen += "El costo de su viaje es: " + to_string(km*costo);
		cout << resumen;
	}
	
}