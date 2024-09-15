package Exo2;
import java.util.Scanner;

public class Exo2 {

    public static void main(String[] args) {
        
    	String exprReg = "([0-9]+\\+)*[0-9]+";
    	System.out.println("Veuillez saisir une chaîne d'additions :");
    	Scanner S = new Scanner(System.in);
        String Expression = S.next();
        if (Expression.matches(exprReg)) {
        	int Somme = calculerSomme(Expression);
        	System.out.println("La somme est : " + Somme);
        	String newExpression = SimplifierExpression(Expression);
        	System.out.println("L'expression simplifie est : " + newExpression);
        }   
    }

    private static int calculerSomme(String Expression) {
        String[] nombres = Expression.split("\\+");
        int somme = 0;
        for (String nombre : nombres) {
            somme += Integer.parseInt(nombre);
        }
        return somme;
    }
    
    private static String SimplifierExpression(String Expression) {
        String[] nombres = Expression.split("\\+");
        String newExpression="";
   
        for (int i = 0; i < nombres.length; i++) {
        	if(Integer.parseInt(nombres[i]) != 0) {
                if (newExpression.isEmpty()) {
                  	newExpression += nombres[i];
                } 
                else {
                	newExpression += "+" + nombres[i];
                }
        	}
        }
        return newExpression;
    }
}    