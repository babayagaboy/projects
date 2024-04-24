
import javax.swing.JOptionPane;

public class Main {
    public static void teste1() {
        System.out.println("inicio teste()");
        int i;
        for (i = 0; i <= 10; i++) {
            if (i == 4 || i == 5 || i == 7) {
                System.out.println("pulei o " + i);
                continue;
            }
            System.out.println("continue");
            System.out.println(i);
        } // fim do bloco for
        System.out.println("fim teste()");
    } // fim da função

    public static void teste2() {
        System.out.println("inicio teste()");
        int i;
        for (i = 0; i <= 10; i++) {
            if (i == 5) {
                System.out.println("saí no " + i);
                break;
            }
            System.out.println("break");
            System.out.println(i);
        } // fim do bloco for
        System.out.println("fim teste()");
    } // fim da função

    public static void teste3() {
        System.out.println("inicio teste()");
        int i;
        for (i = 0; i <= 10; i++) {
            if (i == 5) {
                System.out.println("regressei no " + i);
                return;
            }
            System.out.println("return");
            System.out.println(i);
        } // fim do bloco for
        System.out.println("fim teste()");
    } // fim da função

    public static void main(String[] args) {
        teste1();
        teste2();
        teste3();
    }
}
