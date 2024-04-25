#include <cstring>
#include <iostream>
using namespace std;

main(){
	char s1[26]="", s2[10], conect[6];

	cout << "Palabra 1: ";
	cin >> s1;
	
	cout << "Palabra 2: ";
	cin >> s2;
	
	cout << "conector: ";
	cin >> conect;
	
	strcat(s1, " ");
	strcat(s1, conect);
	strcat(s1, " ");
	strcat(s1, s2);
	
	cout << s1 << endl;
}