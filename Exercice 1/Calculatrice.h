class Calculatrice
{
private:

	double Op1;
	double Op2;
	char   Operateur;
	double Resultat;

public:

	void SaisirOperation();
	bool Calculer();
	void AfficherResultat();
	bool Recommencer();
};
