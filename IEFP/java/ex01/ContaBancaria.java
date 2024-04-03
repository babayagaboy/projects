package IEFP.java.ex01;
public class ContaBancaria {
    static long ultimoNumero = 0;
    static double juro = 0.08;
    
    public static void alterarJuro(double novoJuro) {
        juro = novoJuro;
    }
    
    public static void obterJuro() {
        System.out.println("Juro atual: " + juro);
    }
    
    long numero;
    String titular;
    double saldo;
    
    public ContaBancaria(String titular, double saldo) {
        this.numero = ++ultimoNumero;
        this.titular = titular;
        this.saldo = saldo;
    }
    
    public void obterDados() {
        System.out.println("Número: " + numero +
                           ", Titular: " + titular +
                           ", Saldo: " + saldo);
    }
    
    public void depositar(double quantia) {
        if (quantia > 0) {
            saldo += quantia;
            System.out.println("Depósito efetuado com sucesso no valor de " + quantia);
            obterDados();
        }
    }
    
    public void levantar(double quantia) {
        if (quantia <= saldo) {
            saldo -= quantia;
            System.out.println("Levantamento de " + quantia + " efetuado com sucesso!");
        } else {
            System.out.println("Saldo insuficiente. Só pode levantar até " + saldo);
        }
    }

    public static void main(String[] args) {
        ContaBancaria conta1 = new ContaBancaria("John Doe", 1000);
        conta1.depositar(500);
        conta1.levantar(200);
        conta1.obterDados();
        alterarJuro(0.1);
        obterJuro();
    }
}
