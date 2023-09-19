#include <iostream>
#include <cstdio>
#include "date.h"

using namespace std;


void bissextile() {
	int an;

	cout << "Entrez l'annee (1992) : ";
	cin >> an;

	// Never truth user input
	// if (an < 0) {
	// 	cout << "L'annee que vous aviez entree n'est pas correcte.";
	// 	cout << "Reessayez encore!" << endl;
	// 	return;
	// }

	if (isbissextile(an))
		cout << "L'annees est bissexile" << endl;
	else
		cout << "L'annees n'est pas bissexile" << endl;
}


void month_31days() {
	unsigned short int mon;

	cout << "Entrez le numero du mois (eg: pour Mars c'est 3) : ";
	cin >> mon;

	// Never truth user input
	if (mon == 0 || mon > 12) {
		cout << "Le numero du mois que vous aviez entre doit etre comprise ";
		cout << "entre 1 et 12." << endl;
		cout << "Reessayez encore!" << endl;
		return;
	}

	if (month_counts_31days(mon))
		cout << "Le mois dont le numero est " << mon << ", compte 31 jours."
			   << endl;
	else
		cout << "Le mois dont le numero est " << mon << " ne compte pas 31 jours."
	       << endl;
}

void run_date_validity() {
	date_t date = {1, 1, 1970};
	date_t next = {1, 1, 1970};

	cout << "Entrez la date (eg: 19/9/2023) : ";
	scanf("%d/%d/%d", &date.day, &date.month, &date.year);

	if (is_valid_date(&date)) {
		printf("La date %02d/%02d/%d est valide.\n",
					 date.day,
					 date.month,
					 date.year);
		next = get_next_date(&date);
		printf("La date du lendemain est : %02d/%02d/%d",
					 next.day,
					 next.month,
					 next.year);
	}
	else
		cout << "La date entree n'est pas valide" << endl;
}


int main() {
	/** Main function */
	unsigned short int option;

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
		case 2:
			month_31days();
		 	break;
		case 3:
			run_date_validity();
			break;
		default:
			cout << "Option non supportee !" << endl;
	}

	return 0;
}
