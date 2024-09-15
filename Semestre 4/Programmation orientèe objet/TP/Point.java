package Exo7TD;
import java.util.Scanner;

public class Point {
	String nom;
	double abscect;
	double ordonne;
	double val;
	Point (String nom,double abscect,double ordonne){
		this.nom = nom;
		this.abscect = abscect;
		this.ordonne = ordonne;
	}
	public void affiche() {
		System.out.println("Le nom du point est : " + nom + "        L'abscect du point est : " + abscect + "        L'ordonne du point est : " + ordonne);
	} 
	public void translate(double X,double Y) {
		abscect += X;
		ordonne += Y;
	}
	public static void main(String[] args) {
		System.out.println("Entrer le nom du point");
		Scanner S = new Scanner(System.in);
		String nom =S.next();
		System.out.println("Entrer l'abscect du point");
		double abscect = S.nextDouble();
		System.out.println("Entrer l'ordonne du point");
		double ordonne = S.nextDouble();
		Point p = new Point(nom,abscect,ordonne);
		p.affiche();
		System.out.println("Entrer la valeur du deplacement");
		double dx = S.nextDouble();
		double dy = S.nextDouble();
		p.translate(dx, dy);
		p.affiche();
	}
}
