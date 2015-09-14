import java.io.IOException;
import java.util.Scanner;
import java.util.*;

public class Main{
	
	public static void main(String args[]) throws IOException{
		String type;
		String number;
		int n, aux;

		Scanner keyboard = new Scanner(System.in);

		StringBuilder text;

		n = keyboard.nextInt();

		for (int i = 0; i < n; i++){
		
			keyboard = new Scanner(System.in);

			number = keyboard.nextLine();
			type = keyboard.nextLine();

			text = new StringBuilder("Case ");
			text.append(String.valueOf(i+1));
			text.append(":");

			switch(type){
				case "hex":
					aux = Integer.parseInt(number, 16);
					
					text = new StringBuilder(String.valueOf(aux));
					text.append(" dec");
					System.out.println(text);

					text = new StringBuilder(Integer.toBinaryString(aux));
					text.append(" bin");
					System.out.println(text);

					System.out.println();
					break;
				case "dec":
					aux = Integer.valueOf(number);

					text = new StringBuilder(Integer.toHexString(aux));
					text.append(" hex");
					System.out.println(text);

					text = new StringBuilder(Integer.toBinaryString(aux));
					text.append(" bin");
					System.out.println(text);

					System.out.println();
					break;
				case "bin":
					aux = Integer.parseInt(number, 2);

					text = new StringBuilder(String.valueOf(aux));
					text.append(" dec");
					System.out.println(text);

					text = new StringBuilder(Integer.toHexString(aux));
					text.append(" hex");
					System.out.println(Integer.toHexString(aux) + " hex");

					System.out.println();
					break;
			}
		}
	}
}