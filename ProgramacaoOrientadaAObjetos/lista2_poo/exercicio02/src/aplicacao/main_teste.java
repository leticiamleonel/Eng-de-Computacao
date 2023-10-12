package aplicacao;
import java.util.Scanner;
import classe.CadernoDeEnderecos;

public class main_teste {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		// TODO Auto-generated method stub
		
		CadernoDeEnderecos cadernoTeste = new CadernoDeEnderecos("AlunoTeste", "4353546", "teste@gmail.com","18 de março", "Rua teste, bairro teste, numero 12");
		
		System.out.println("Registros: ");
		cadernoTeste.imprimeRegistro();
		
	}

}
