package Livre;

import java.util.Scanner;

public class Livre {
	private int isbn;
	private String titre;
	private String auteur;
	private int NbrCopiesDisponibles;
	private boolean etat;
	
	
	public Livre(int x_isbn,String x_titre,String x_auteur,int x_NbrCopiesDisponibles,boolean x_etat) {
		this.isbn = x_isbn; 
		this.titre = x_titre;
		this.auteur = x_auteur;
		this.NbrCopiesDisponibles = x_NbrCopiesDisponibles;
		this.etat = x_etat;
	}
	public Livre(String x_titre,int x_NbrCopiesDisponibles) { 
		this.titre = x_titre;
		this.NbrCopiesDisponibles = x_NbrCopiesDisponibles;
		this.etat = true;
	}
	
	
	public String getTitre() {
		return titre;
	}
	public String getAuteur() {
		return auteur;
	}
	public int getNbrCopiesDisponibles() {
		return NbrCopiesDisponibles;
	}
	public static void afficher(Livre liv1) {
		System.out.println("Le numero du livre est : " + liv1.isbn);
		System.out.println("Le titre du livre num " + liv1.isbn + " est : " + liv1.getTitre());
		System.out.println("Le nom d'auteur du livre num " + liv1.isbn + " est : " + liv1.getAuteur());
		System.out.println("Le nombre de copies disponibles du livre num " + liv1.isbn + " est : " + liv1.getNbrCopiesDisponibles());
		System.out.println("L'etat du livre num " + liv1.isbn + " est : " + liv1.etat);
	}
	
	
	public void setIsbn(int Y) {
		isbn = Y;
	}
	public void setAuteur(String Z) {
		auteur = Z;
	}
	
	
	public static void comparaison(Livre A,Livre B) {
		if (A.getAuteur() == B.getAuteur())
			System.out.println("Les deux livres sont du meme auteur");
		else 
			System.out.println("Les deux livres ne sont pas du meme auteur");		
	}
	
	
	public static void emprunter(Livre A) {
		if (A.getNbrCopiesDisponibles() > 0) {
			System.out.println("Le livre " + A.getTitre() + " a ete embrunte");
			A.etat = false;
			A.NbrCopiesDisponibles--;
		}
		else 
			System.out.println("Desole le livre " + A.getTitre() + " n'est pas disponible");
	}
	public static void rendre(Livre A) {
		A.NbrCopiesDisponibles++;
		A.etat = true;
		System.out.println("Le livre " + A.getTitre() + " a ete rendu");
	}
	public static void main(String[] args) {
		Livre liv1 = new Livre (1000,"poland","achraf",3,true);
		Livre liv2 = new Livre ("alger",50);
		afficher(liv1);
		liv2.setAuteur("mhoamed");
		liv2.setIsbn(1500);
		afficher(liv2);
		comparaison(liv1,liv2);
		emprunter(liv1);
		emprunter(liv2);
		rendre(liv1);
		rendre(liv2);
	}	
}
