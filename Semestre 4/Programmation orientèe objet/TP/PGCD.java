package Exo1;
import java.util.Scanner;
public class PGCD {
	public static void main(String[] args) {
		Scanner input =new Scanner (System.in);
		System.out.println("entrer le 1er entier:");
		int a=input.nextInt();
		System.out.println("entrer le 2er entier:");
		int b=input.nextInt();
		PGCD mon_objet = new PGCD();
		int Pgcd = mon_objet.Calcul_PGCD(a,b);
		System.out.println("le PGCD de " + a + " et " + b + " est : " + Pgcd);
	}
    public int Calcul_PGCD(int a,int b) {
    	int c;
    	while (a!=b) {
    		if (a>b) {
    			c=a-b;
    		    a=b;
    			b=c;
    			}   
    		else 
    			c=b-a;
    		    b=c;
    	}
    	return a;
    }
}




























