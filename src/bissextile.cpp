#include <iostream>
#include "bissextile.h"

using namespace std;


void bissextile() {
	unsigned int an;
	bool bissexile;

	cout << "Entrez l'annee (1992) : ";
	cin >> an;

	// Never truth user input
	// if (an < 0) {
	// 	cout << "L'annee que vous aviez entree n'est pas correcte.";
	// 	cout << "Reessayez encore!" << endl;
	// 	return;
	// }

	bissexile = ((an % 400 == 0) || ((an % 4 == 0) && (an % 100 != 0)));
	if (bissexile)
		cout << "L'annees est bissexile" << endl;
	else
		cout << "L'annees n'est pas bissexile" << endl;
}
