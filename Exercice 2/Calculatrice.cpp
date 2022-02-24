/* =========================================================== */
/*  Calculatrice.cpp                                           */
/*  Fichier source du module Calculatrice                      */
/* =========================================================== */

#include <iostream.h>
#include "Calculatrice.h"



Calculatrice::Calculatrice ( ) 
{
	Op1 = 0 ; 
	Op2 = 0 ;
	Resultat = 0 ;
	Operateur = ' ' ;
	CALCUL_OK = false ; 
}


void Calculatrice::Saisir ( ) 
{
	cout << "Donner votre operation : " ;
	cin >> Op1 >> Operateur >> Op2 ; 
}


void Calculatrice::Calculer ()
{
	CALCUL_OK = true; 

	switch ( Operateur ) 
	{
		case '+' : Resultat = Op1 + Op2 ; 
				   break ; 
		case '-' : Resultat = Op1 - Op2 ; 
				   break ; 
		case '*' : Resultat = Op1 * Op2 ; 
				   break ; 
		case '/' : if (Op2 == 0.0) 
					   CALCUL_OK = false ;
				   else
					   Resultat = Op1 / Op2 ; 
				   break ;
		default  : CALCUL_OK = false ;
	}
}


void Calculatrice::Afficher () 
{
	if (CALCUL_OK)
		AfficherResultat() ;
	else
		AfficherErreur() ;
}


void Calculatrice::AfficherResultat () 
{
	cout << Op1 << Operateur << Op2 << " = " << Resultat << endl ;
}


void Calculatrice::AfficherErreur () 
{
	cout << " Erreur ! " << endl ;
}


bool Calculatrice::Recommencer()
{
	char Reponse ; 

	do
	{
		cout << endl << "Autre calcul (o/n) ? ";
		cin >> Reponse ;
	}
	while ((Reponse != 'o') && (Reponse != 'n')) ;
	cout << endl ;

    return ( Reponse == 'o') ;
}