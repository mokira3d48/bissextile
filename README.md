# Bissexile
**Donnée** : l’année<br/>
**Résultat** : message "l’année est bissextile" ou
"l’année n’est pas bissextile"<br/>
**Analyse** : On commence par saisir l’année, on vérifie si elle est bissextile.
Une année est bissextile si elle n’est pas divisible par 100 et est divisible
par 4 ;
Les années divisibles par 100 ne sont pas bissextiles sauf si elles sont
divisibles par 400. On affiche le message.

LEXIQUE:

```
Variables
  An : entier (l’année)
  Bissextile : booléen
```

ALGORITHME Année_bissextile:

```
Début
		lire(an)
		bissextile <- ( (an mod 400 = 0) ou ( (an mod 4 = 0) et (an mod 100 != 0)))
		Si bissextile alors
					écrire ("L’année est bissextile")
		Sinon
					écrire("L’année n’est pas bissextile ")
		Fsi
fin
```

**Questions :**
1. Donner le programme C++ de cet algorithme
2. Modifier le programme pour qu’il détermine en plus si un mois est de
31 jours, c’est-à-dire qui met une variable booléenne à vrai si le mois a bien
31 jours, à faux sinon.
3. Compléter le programme pour qu’il teste la validité d’une date donnée
(date saisie) et calcule la date du lendemain.

## Compilation
Pour compiler le programme, vous pouvez exécuter une des lignes de commande
suivante :

- sous linux :

```sh
g++ main.cpp src/*.cpp -I includes -o bin/bissextile
```

Cette commande utilise seulement le compilateur `g++` pour compiler
les sources.

ou

```sh
make
```
Alors que celle-ci utilise en plus du compilateur, mais aussi le programme
`cmake` pour compiler le programme.

## Exécution
Pour exécuter le programme :
- sous linux :

```sh
./bin/bissextile
```

```
#################################################
#           WELCOME TO THIS PROGRAM!            #
#################################################

Tapez 1: Pour verifier si une annee est bissexile;
Tapez 2: Pour determiner si un mois est de 31 jours;
Tapez 3: Pour verifier la validite d'une date donnee
         et calculer la date du lendemain.

Choisissez une option : 3
Entrez la date (eg: 19/9/2023) :31/12/2009
La date 31/12/2009 est valide.
La date du lendemain est : 01/01/2010
```
