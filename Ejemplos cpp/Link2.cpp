#include <iostream>
#include <fstream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include <time.h>
using namespace std;

string dir = "DP.txt";
fstream archivo;

void abrir(string funcion){
	archivo.open(dir, ios::in | ios::app);
	for(int i = 0; archivo.fail() and i == 0; i++){
        cout << "No se pudo abrir en " << funcion << "... reintentando" << endl;
        archivo.close();
        archivo.open(dir, ios::in | ios::app);
        if(archivo.is_open()){cout << "error solucionado en " << funcion << endl;}
    }
}

int tamano(){
	abrir("tam");
	int tam = count(istreambuf_iterator<char>(archivo), istreambuf_iterator<char>(), '\n');
	archivo.close();
	return tam;
}

void lectura() {
    string linea_texto;
    int tam = tamano();
    abrir("lectura");
    for (int cont = 1; cont <= tam; cont++) {
        getline(archivo, linea_texto);
        if (linea_texto != "") {
            cout << cont << ". " << linea_texto << endl;
        }
    }
    archivo.close();
}

void agregar(string str) {
	string http = "https://", key = "&pkey=";
    abrir("agregar");
	string::size_type i = str.find(key);
	if (i != string::npos){str.erase(i, key.length() + str.length());}
	i = str.find(http);
	if (i != string::npos){str.erase(i, http.length());}
	archivo << str << "\n";
	cout << "agregada" << endl;
    archivo.close();
}

string IrLinea(int num) {
    abrir("IrLinea");
    string n_linea;
    for (int i = 1; i < num; i++) {
        archivo.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    getline(archivo, n_linea);
    archivo.close();
    cout << num << ". " << n_linea << endl;
    return n_linea;
}

void abrir_x_links(int pestanas){
	int tam = tamano();
    if (pestanas > tam){pestanas = tam;}
    srand(time(NULL));
    vector<int> elegidas;
    int random;
    for (int index = 0; index < pestanas; index++) {
        random = rand()%tam + 1;
        if (find(elegidas.begin(), elegidas.end(), random) != elegidas.end()) {
            index--;
        } else {
        	elegidas.push_back(random);
            ShellExecute(NULL, "open", "C:\\Program Files (x86)\\Microsoft\\Edge\\Application\\msedge - Acceso directo",\
						IrLinea(random).c_str(), NULL, SW_SHOWDEFAULT);
        }
    }
}

int main() {
    string str;
    while (true) {
        cout << "agg	1.read	x.open" << endl;
        cin >> str;
        try{
        	int num = stoi(str);
        	if (num == 1){lectura();}
        	else{abrir_x_links(num);}
		}catch(...){
			agregar(str);
		}
    }
}
