public class ContaBancaria {
	
	// variaveis de classe => static
	static long ultimoNumero=0;
	static double juro=0.08;	
	// metodos de classe
	public static void alterarJuro(double novoJuro) {
		juro=novoJuro;
	}
	public static void obterJuro() {
		System.out.println("Juro atual: "+juro);
	}
	// variaveis de instancia ou objeto
	long numero;
	String titular;
	double saldo;	
	public void obterDados() {
		System.out.println("Numero: "+numero
				+"Titular: "+titular
				+"Saldo: "+saldo);
	}	
	public void depositar(double quantia) {
		if (quantia>0) {
			saldo+=quantia;
			System.out.println("Deposito efetuado com "
					+ "sucesso no valor de "+quantia);
			obterDados();
		}
	}
	public void levantar(double quantia) {
		if(quantia<=saldo) {
			saldo-=quantia;
			System.out.println("Levantamento de "+quantia
					+" efetuado com sucesso!");
		} else {
			System.out.println("Saldo insuficiente. "
					+ "So pode levantar ate "+saldo);
		}
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}
}
