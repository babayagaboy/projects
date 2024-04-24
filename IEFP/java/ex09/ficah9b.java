import javax.swing.JOptionPane;

public class Ficha9b {
    public static void main(String[] args) {
        String txt = "Java";
        int posicao = 0;

        System.out.println("Tamanho da string: " + txt.length());
        System.out.println("Substring do inicio: " + txt.substring(0));
        System.out.println("Substring do inicio ao fim: " + txt.substring(0, txt.length()));
        
        posicao = Integer.parseInt(
        JOptionPane.showInputDialog("Introduza a posicao desejada: "));
        System.out.println("Caractere na posicao dada: " + txt.charAt(posicao - 1));
        System.out.println("IndexOf Texto: " + txt.indexOf("Texto"));
        System.out.println("Texto da string: " + txt);
        System.out.println("A String em maiusculas: " + txt.toUpperCase());
        System.out.println("A String em minusculas: " + txt.toLowerCase());
        System.out.println("Comparar strings: " + txt.equals("JAVA"));
        System.out.println("Comparar strings ignorando maiusculas/minusculas: " + txt.equalsIgnoreCase("JAVA"));
    }
}
