#include <iostream>
using namespace std ;

#include "Calculatrice.h"


void main()
{
	Calculatrice C;
	bool  CALCUL_OK;
	bool AUTRE_CALCUL;

	do
	{
		// Saisie de l'opération
		C.SaisirOperation();

		// Traitement
		CALCUL_OK = C.Calculer();

		// Affichage
		if (CALCUL_OK)
			C.AfficherResultat();

		// Autre opération ?
		AUTRE_CALCUL = C.Recommencer();

	} 
	while (AUTRE_CALCUL);

	cout << "Au revoir !" << endl;
}