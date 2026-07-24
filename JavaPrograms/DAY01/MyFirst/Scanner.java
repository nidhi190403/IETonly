import java.util.Scanner;

class ScannerDemo {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number:");
        int a = sc.nextInt();

        System.out.println("Enter decimal number:");
        double b = sc.nextDouble();

        System.out.println("a: " + a + " b: " + b);

        sc.nextLine(); // clear buffer

        System.out.println("Enter name:");
        String s = sc.nextLine();

        System.out.println("Enter address:");
        String addr = sc.nextLine();

        System.out.println("Name: " + s + ", Address: " + addr);

        sc.close();
    }
}