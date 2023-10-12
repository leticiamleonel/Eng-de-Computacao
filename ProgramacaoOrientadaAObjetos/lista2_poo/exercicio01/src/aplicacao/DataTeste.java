//Letícia Moreira Leonel
package aplicacao;
import java.util.Scanner;

import javax.xml.crypto.Data;
import classe.data;

public class DataTeste {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int dia = 0;
		int mes = 0;
		int ano = 0;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o dia: ");
		dia = sc.nextInt();
		System.out.println("Digite o mes: ");
		mes = sc.nextInt();
		System.out.println("Digite o ano: ");
		ano = sc.nextInt();
		
		data d = new data(dia,mes,ano);
		System.out.println("A data é: " + d.toString());
	}

}
