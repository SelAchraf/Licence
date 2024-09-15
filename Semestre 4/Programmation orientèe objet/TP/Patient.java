package Validation;
import java.util.Scanner;

public class Patient {
	private String nom;
	String maladie;
	private int age;
	static int Nbr=0;
	
	Patient(String nom , int age){
		this.nom = nom;
		this.age = age;
		Nbr+=1;
	}
	
	Patient(){
		this.maladie = "DIABETE";
		Nbr+=1;
	}

	public String getnom() {
		return nom;
	}
	public int getage() {
		return age;
	}
	 
	public void setage(int a) {
		this.age = a;
	}
	public void setnom(String n) {
		this.nom = n;
	}
	
	public static void afficher(Patient P) {
		System.out.println("Le nom du patient est : " + P.getnom());
		System.out.println("L'age du patient est : " + P.getage());
		System.out.println("La maladie du patient est : " + P.maladie);
	}
	
	public static int compter() {
		return Nbr;
	}
	
	public static void main(String[] args) {
		Scanner input =new Scanner (System.in);
		Patient P1 = new Patient();
		System.out.println("Entrer le nom du patient :");
		String nom = input.next();
		System.out.println("Entrer l'age du patient :");
		int age = input.nextInt();
		P1.setnom(nom);
		P1.setage(age);
		Patient P2 = new Patient("ALI" , 14);
		afficher(P1);
		afficher(P2);
		System.out.println("le nombre d'objets crees a partir de cette classe est : " + compter());
	}
}

