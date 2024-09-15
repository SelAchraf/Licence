package Exo1;

public class Exo1 {

	public static void main(String[] args) {
	String input = "125.255.100.098:8080";
	String expRey = "([0-9]{3}\\.){3}[0-9]{3}:[0-9]+$";
	if(input.matches(expRey)) {
		String[] a = input.split(":");
		System.out.println(a[0] + " est l'adresse IP");
		System.out.println(a[1] + " est le port");
	}
	else 
		System.out.println((input.matches(expRey)));
	}

}
