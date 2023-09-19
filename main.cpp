#include <iostream>
#include "bissextile.h"

using namespace std;


int main() {
	/** Main function */
	short unsigned int option;

	cout << "#################################################" << endl;
	cout << "#           WELCOME TO THIS PROGRAM!            #" << endl;
	cout << "#################################################" << endl;
	cout << endl;

	cout << "Tapez 1: Pour verifier si une annee est bissexile;" << endl;
	cout << "Tapez 2: Pour determiner si un mois est de 31 jours;" << endl;
	cout << "Tapez 3: Pour verifier la validite d'une date donnee" << endl;
	cout << "         et calculer la date du lendemain." << endl;
	cout << endl;

	cout << "Choisissez une option : ";
	cin >> option;

	switch (option) {
		case 1:
			bissextile();
			break;
		
		default:
			cout << "Option non supportee !" << endl;
	}

	return 0;
}