public class Strings9 {
    public static void main(String[] args) {
        String txt = "bla";
        System.out.println(txt);
       
        Integer x = 5; // auto-boxing
        int y = x; // auto-unboxing
        System.out.println("x=" + x + "e y=" + y);

        String s1 = "Joao";
        String s2 = "Joao"; // optimizacao - fica a apontar para a mesma area na heap
        String s3 = s2.substring(0, 2) + "ao";

        System.out.println("s1=" + s1);
        System.out.println("s2=" + s2);
        System.out.println("s3=" + s3);
        if (s1 == s2) {
        }
        System.out.println("s1==s2");
        if (s2 == s3) {
            System.out.println("s2==s3");
        } else {
        }
        System.out.println("s2!=s3");
        System.out.println(s1.equals(s3) && s1.equals(s2) && s1.equals("Joao"));
        if (s1.equals(s3) && s1.equals(s2) && s1.equals("Joao")) {
            System.out.println("Os conteudos sao todos iguais a " + s1);
        } else {
        }
        System.out.println("Os conteudos NaO sao todos iguais a " + s1);
    }
}
