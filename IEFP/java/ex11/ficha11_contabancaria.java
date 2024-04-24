import javax.swing.JOptionPane;

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
        numero = ++ultimoNumero;
        this.titular = titular;
        this.saldo = saldo;
    }

    public ContaBancaria(String titular) {
        numero = ++ultimoNumero;
        this.titular = titular;
        saldo = 100;
    }

    public ContaBancaria() {
        numero = ++ultimoNumero;
    }

    public void obterDados() {
        System.out.println("Numero: " + numero + "\nTitular: " + titular + "\nSaldo: " + saldo);
    }

    public void depositar(double quantia) {
        if (quantia > 0) {
            saldo += quantia;
            System.out.println("Deposito efetuado com sucesso no valor de " + quantia);
        }
    }

    public void levantar(double quantia) {
        if (quantia <= saldo) {
            saldo -= quantia;
            System.out.println("Levantamento de " + quantia + " efetuado com sucesso!");
        } else {
            System.out.println("Saldo insuficiente. So pode levantar ate " + saldo);
        }
    }

    public static void main(String[] args) {
        ContaBancaria c1 = new ContaBancaria();
        c1.titular = "Jose Maria das Couves";
        c1.saldo = 1000.0;
        c1.obterDados();

        ContaBancaria c2 = new ContaBancaria("Celia Duarte", 500.0);
        c2.obterDados();

        ContaBancaria c3 = new ContaBancaria();
        c3.titular = "Teresa Mendes";
        c3.saldo = 900.0;
        c3.obterDados();

        ContaBancaria c4 = new ContaBancaria("Paulo Sousa");
        c4.obterDados();

        c1.depositar(30.5);
        c1.obterDados();
        c1.levantar(100.5);
        c1.obterDados();

        c2.levantar(500);
        c2.obterDados();

        ContaBancaria.alterarJuro(0.05);
        ContaBancaria.obterJuro();
    }
}
