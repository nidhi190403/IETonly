class Test {
    public static void main(String[] args) {

        int x = 12;

        // explicit typecasting
        byte b = (byte) x;

        long d = 67L;

        float f1 = 45.6f;

        // implicit typecasting
        float f2 = d;

        // final variable (constant)
        final int y = 90;

        System.out.println("x = " + x);
        System.out.println("b = " + b);
        System.out.println("d = " + d);
        System.out.println("f1 = " + f1);
        System.out.println("f2 = " + f2);
        System.out.println("y = " + y);
    }
}