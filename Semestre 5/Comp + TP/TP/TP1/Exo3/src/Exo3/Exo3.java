package Exo3;
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;
import java.io.IOException;

public class Exo3 {

    public static void main(String[] args) {
    	
        String cheminFichier = "/home/achraf/Bureau/COMP/TP1/Fichier_Etudiants.txt";
        List<String[]> lignes = new ArrayList<>();
        String expRey = "[A-Z]+,[A-Z][a-z A-Z]+,[0-9]{4}";

        try (BufferedReader br = new BufferedReader(new FileReader(cheminFichier))) {
            String ligne;
            while ((ligne = br.readLine()) != null) {
            	if(ligne.matches(expRey)) {
            		String[] ligne_parties = ligne.split(",");
            		lignes.add(ligne_parties);
            	}                    
            }
        } 
        catch (IOException e) {
            e.printStackTrace();
        }
                        	
        Scanner S = new Scanner(System.in);	
        
        System.out.print("Entrez l'année limite : ");
      	int anneeLimite = S.nextInt();
       	afficherEtudiantsParAnnee(lignes, anneeLimite);
       	
       	System.out.print("\nEntrez le prefixe : ");
       	S.nextLine();
       	String prefixe = S.next();
       	afficherEtudiantsParPrefixe(lignes, prefixe);
       	
    }

    private static void afficherEtudiantsParAnnee(List<String[]> lignes, int anneeLimite) {
    	System.out.print("Les étudiants qui sont nés avant cette année sont :\n");
    	for (String[] ligne_parties : lignes) {
    		if (Integer.parseInt(ligne_parties[2]) < anneeLimite) {
                afficherEtudiant(ligne_parties);
            }
    	}
    }
    
    private static void afficherEtudiantsParPrefixe(List<String[]> lignes, String prefixe) {
    	System.out.print("Les étudiants dont le nom commence par " + prefixe + " sont :\n");
    	prefixe = prefixe.toLowerCase();
    	
    	for (String[] ligne_parties : lignes) {
    		String nom = ligne_parties[0].toLowerCase();
    		int j=0;
    		int taille = prefixe.length();
    		for (int i=0;i<taille;i++) {
    			if (nom.charAt(i) != prefixe.charAt(i)) {
                    j++;
                    break;
                }
    		}
    		if (j==0) {
                afficherEtudiant(ligne_parties);
            }
    	}
    }

    private static void afficherEtudiant(String[] ligne_parties) {
        System.out.println("Nom: " + ligne_parties[0] + "\t Prénom: " + ligne_parties[1] + "\t Année de naissance: " + ligne_parties[2]);
    }
}