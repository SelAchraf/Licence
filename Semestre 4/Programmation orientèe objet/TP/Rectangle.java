package Rectangle;
import java.util.Scanner;

public class Rectangle {
	int height ;
	int width ;
	Rectangle (int A, int B){
		this.height = A;
		this.width = B;
	}
	public int getwidth() {
		return width;
	}
	public int getheight() {
		return height;
	}
	public int Calcul_Surface(int A , int B) {
		int Surface = getwidth()*getheight();	
		return Surface ;
	}
	public int Calcul_Perimetre(int A , int B) {
		int perimetre = (getwidth()+getheight())*2;	
		return perimetre ;
	}
	public static void main(String[] args) {
		Scanner input =new Scanner (System.in);
		System.out.println("entrer la largeur du rectangle:");
		int width=input.nextInt();
		System.out.println("entrer la longeur du rectangle:");
		int height=input.nextInt();	
		Rectangle mon_objet = new Rectangle(height,width);
		int Surface = mon_objet.Calcul_Surface(width , height);
		int Perimetre = mon_objet.Calcul_Perimetre(width , height);
		System.out.println("la Surface du rectangle est " + Surface);
		System.out.println("le perimetre du rectangle est " + Perimetre);
	}
}
