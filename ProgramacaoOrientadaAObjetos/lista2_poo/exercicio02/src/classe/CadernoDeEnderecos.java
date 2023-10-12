package classe;
import java.util.Scanner;

public class CadernoDeEnderecos {
	private String nome;
	private String telefone;
	private String email;
	private String dataAniversario;
	private String endereco;

	public CadernoDeEnderecos(String nome, String telefone, String email, String dataAniversario, String endereco) 
	{
		// TODO Auto-generated constructor stub
		Scanner sc = new Scanner(System.in);
		this.nome = nome;
		this.telefone = telefone;
		this.email = email;
		this.dataAniversario = dataAniversario;
		this.endereco = endereco;
	}
	
	public String getNome()
	{
		return nome;
	}
	
	public void setNome(String nome) 
	{
		this.nome = nome;
	}
	
	public String getTelefone() 
	{
		return telefone;
	}
	
	public void setTelefone(String telefone) 
	{
		this.telefone = telefone;
	}
	
	public String getEmail() 
	{
		return email;
	}
	
	public void setEmail(String email) 
	{
		this.email = email;
	}
	
	public String getDataAniversario() 
	{
		return dataAniversario;
	}
	
	public void setDataAniversario(String dataAniversario) 
	{
		this.dataAniversario = dataAniversario;
	}
	
	public String getEndereco() 
	{
		return endereco;
	}
	
	public void setEndereco(String endereco) 
	{
		this.endereco = endereco;
	}
	
	public void imprimeRegistro(){
		System.out.println("Nome: " + this.getNome());
		System.out.println("Telefone: " + this.getTelefone());
		System.out.println("Email: " + this.getEmail());
		System.out.println("Data de Aniversário: " + this.getDataAniversario());
		System.out.println("Endereco : " + this.getEndereco());
		
	}

}
