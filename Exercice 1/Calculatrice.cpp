/* =========================================================== */
/*  Calculatrice.cpp                                           */
/*  Fichier source du module Calculatrice                      */
/* =========================================================== */

#include <iostream>
using namespace std;

#include "Calculatrice.h"


void Calculatrice::SaisirOperation ( ) 
{
	cout << "Donner votre operation : " ;
	cin >> Op1 >> Operateur >> Op2 ; 
}



bool Calculatrice::Calculer()
{
	bool CalculFait = true;

	switch (Operateur)
	{
	case '+': Resultat = Op1 + Op2;
		break;
	case '-': Resultat = Op1 - Op2;
		break;
	case '*': Resultat = Op1 * Op2;
		break;
	case '/': if (Op2 == 0.0)
				  CalculFait = false;
			  else
				  Resultat = Op1 / Op2;
		break;
	default: CalculFait = false;
	}

	return (CalculFait);
}


void Calculatrice::AfficherResultat()
{
	cout << Op1 << Operateur << Op2 << " = " << Resultat << endl;
}


bool Calculatrice::Recommencer () 
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