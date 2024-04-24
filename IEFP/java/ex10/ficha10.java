import java.util.Scanner;
import javax.swing.JOptionPane;

public class ficha10 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numInt[] = new int[6];

        System.out.println("Insira um numero inteiro");
        numInt[0] = input.nextInt();
        numInt[1] = Integer.parseInt(JOptionPane.showInputDialog("Escreva um int"));

        for (int i = 2; i < numInt.length; i++) {
            numInt[i] = (int) (Math.random() * 100);
        }

        for (int i = 0; i < numInt.length; i++) {
            System.out.print(numInt[i] + "\t");
        }
        System.out.println();

        int numeros[] = {4, 7, 9, 2, 5, 1, 3, 7653456};
        for (int i = 0; i < numeros.length; i++) {
            System.out.print(numeros[i] + "\t");
        }
        System.out.println();

        int numDuas[][] = new int[3][4];
        for (int i = 0; i < numDuas.length; i++) {
            for (int j = 0; j < numDuas[i].length; j++) {
                numDuas[i][j] = i + j;
            }
        }

        for (int i = 0; i < numDuas.length; i++) {
            for (int j = 0; j < numDuas[i].length; j++) {
                System.out.print(numDuas[i][j] + "\t");
            }
            System.out.println();
        }

        int irregular[][] = {
            {0, 1, 2, 3},
            {1, 2, 3, 4, 5},
            {2, 3},
            {3, 4, 5},
            {4, 5, 6, 7}
        };
        for (int i = 0; i < irregular.length; i++) {
            for (int j = 0; j < irregular[i].length; j++) {
                System.out.print(irregular[i][j] + " ");
            }
            System.out.println();
        }

        String[] as = new String[10];
        as[0] = "Bom dia 1";
        as[1] = "Bom dia 12 ou outra coisa qualquer que me apeteça";
        for (int i = 2; i < as.length; i++) {
            as[i] = "Ola" + i;
        }

        for (int i = 0; i < as.length; i++) {
            System.out.println(as[i]);
        }
    }
}
