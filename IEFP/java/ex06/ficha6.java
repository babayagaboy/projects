public class ficha6 {

    public static void main(String[] args) {
        // Primeiro exemplo <while> - somar números até 4
        System.out.println("Primeiro exemplo <while> - somar números até 4");
        int a = 1;
        int soma = 0;
        System.out.println("Soma:\ta");

        while (a <= 4) {
            soma += a;
            System.out.println(soma + "\t" + a++);
        }

        // Segundo exemplo <while> - somar números até 100
        System.out.println("\nSegundo exemplo <while> - somar números até 100");
        a = 1;
        soma = 0;
        System.out.println("Soma:\ta");

        while (soma <= 100) {
            soma += a;
            System.out.println(soma + "\t" + a++);
        }

        // Terceiro exemplo <while> - somar pares até 100
        System.out.println("\nTerceiro exemplo <while> - somar pares até 100");
        a = 2;
        soma = 0;
        System.out.println("Soma:\ta");

        while (soma <= 100) {
            soma += a;
            System.out.println(soma + "\t" + a++);
            a += 2;
        }
    }
}
