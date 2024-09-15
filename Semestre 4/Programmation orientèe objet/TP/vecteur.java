package vecteur;
import java.util.Scanner;

public class vecteur {
	double composante_1;
	double composante_2;
	double composante_3;
	static int Nbr=0;
	
	
	vecteur (){
		this.composante_1 = 3.0;
		this.composante_2 = 5.0;
		this.composante_3 = 7.5;
		Nbr++;
	}
	
	
	vecteur (double composante_1,double composante_2,double composante_3){
		this.composante_1 = composante_1;
		this.composante_2 = composante_2;
		this.composante_3 = composante_3;
		Nbr++;
	}
	
	
	public void afficher() {
		System.out.println("les coordonnees du vecteur est : (" + composante_1 + "," + composante_2 + "," + composante_3 + ")"); 
	}
	
	
	public static int compter() {
		return Nbr;
	}
	
	public double norme() {
		double norme = Math.sqrt((composante_1*composante_1)+(composante_2*composante_2)+(composante_3*composante_3));
		return norme;
	}
	
	
	static vecteur Somme(vecteur V1 , vecteur V2) {
		double composante_1 = V1.composante_1 + V2.composante_1;
		double composante_2 = V1.composante_2 + V2.composante_2;
		double composante_3 = V1.composante_3 + V2.composante_3;
		vecteur V3 = new vecteur(composante_1 , composante_2 , composante_3);
		return V3;
	}
	
	public double produit(vecteur V2) {
		double produit = composante_1*V2.composante_1 + composante_2*V2.composante_2 + composante_3*V2.composante_3;
		return produit;
	}
	
	
	public static void main(String[] args) {
		Scanner S = new Scanner(System.in);
		System.out.println("entrer la 1ere composante du vecteur");
		double x = S.nextDouble();
		System.out.println("entrer la 2eme composante du vecteur");
		double y = S.nextDouble();
		System.out.println("entrer la 3eme composante du vecteur");
		double z = S.nextDouble();
		vecteur V1=new vecteur();
		vecteur V2=new vecteur(x,y,z);
		V1.afficher();
		V2.afficher();
		System.out.println("le nombre de vecteurs crees a partir de cette classe est : " + compter());
		Somme(V1,V2).afficher();
		double Produit = V1.produit(V2);
		System.out.println("le produit scalaire du deux vecteur precedents est : " + Produit);
	}
}