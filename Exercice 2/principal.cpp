#include <iostream.h>

#include "Calculatrice.h"

void main()
{
	Calculatrice * C ; 
	bool AUTRE_CALCUL ; 


	C = new Calculatrice ;

	do
	{
		// Saisie de l'opération
		C->Saisir () ; 

		// Traitement
		C->Calculer ( ) ; 

		// Affichage
		C->Afficher ( ) ; 

		// Autre opération ?
		AUTRE_CALCUL = C->Recommencer() ; 

	}
	while ( AUTRE_CALCUL ) ;

	delete C ; 

	cout << "Au revoir !" << endl ; 
}