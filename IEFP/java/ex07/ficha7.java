public class For01 {
    public static void main(String[] args) {
        long k;
        for (k = 1; k <= 5; k++)
            System.out.print(k + ";");
        System.out.println(".");
        for (k = 1; k++ <= 5; ) // ++k - fazer esta variacao numa copia
            System.out.print(k + ";");
        System.out.println(".");
        k = 1;
        for ( ; k++ <= 5; ) // k=1 e ++k - fazer esta variacao numa copia
            System.out.print(k + ";");
        System.out.println(".");
    }
}

public class For02a {
    public static void main(String args[]) {
        int i, n=17;
        int factI = 1;
        long factL = 1;
        // calculo do factorial de uma variavel inteira...
        // em que o maximo sa vai ate 12...
        for (i = 1; i<=n; i++) {
            factI *= i;
            factL *= i;
            System.out.println(i + "!=" + factI + "\t" + factL);
        }
    }
}

public class For02b {
    public static void main(String args[]) {
        int i, n=20;
        float fact = 1.0f;
        for (i = 1; i <= n; i++) {
            fact *= i;
            // maneira de contornar o valor maximo de um inteiro...
            if (fact > Integer.MAX_VALUE) {
                System.out.println(i + "!=" + "Erro!!! Maximo inteiro excedido");
            } else {
                System.out.println(i + "!=" + (int) fact);
            }
        }
    }
}

public class DoWhile01 {
    public static void main(String args[]) {
        int ano;
        do {
            String s = javax.swing.JOptionPane.showInputDialog("Qual o ano?");
            ano = Integer.parseInt(s);
        } while (ano<=1752);

        if ((ano%4==0) && ((ano%100!=0) || (ano%400==0))) {
            System.out.println(ano+ "e bissexto!");
        } else {
            System.out.println(ano+"nao bissexto!");
        }
    }
}
