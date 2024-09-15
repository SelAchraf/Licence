package Exo8TD;

public class Feu_De_Signalisation {
	int CouleurF;
	int position;
	double hauteur;
	Voiture V1;
	int Changer_CouleurF() {
		if (CouleurF<3)
			CouleurF ++;
		else
			CouleurF = 1;	
			V1.Changer_Vitesse(50);
		return CouleurF;
	}
	public class Voiture{
		int numV;
		String marqueV;
		String CouleurV;
		int Vitesse;
		int Changer_Vitesse(int Nv_Vitesse){
			Vitesse = Nv_Vitesse;
			return Vitesse;
		}
	}
	Feu_De_Signalisation (int Nv_position, double Nv_hauteur){
		this.position = Nv_position;
		this.hauteur = Nv_hauteur;
		CouleurF = 1;
	}
	public static void main(String[] args) {
		Feu_De_Signalisation NouveauFeu = new Feu_De_Signalisation(1,4);
	}
}
