/* =========================================================== */
/*  Calculatrice.h                                             */
/*  Fichier entete du module Calculatrice                      */
/* =========================================================== */


class Calculatrice
{
	private : 

		double Op1 ;
		double Op2 ;
		char   Operateur ;
		double Resultat  ; 
		bool CALCUL_OK ;

	public : 

		Calculatrice () ;
		void Saisir () ; 
		void Calculer () ;
		void Afficher() ;
		void AfficherResultat () ;
		void AfficherErreur() ; 
		bool Recommencer() ; 
} ;
