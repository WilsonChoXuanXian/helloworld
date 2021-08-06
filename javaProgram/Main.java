package javaProgram;

public class Main {
    public static void main(String[] args) {
        String x = "10";
        short s = Short.parseShort(x);      // String to short
        System.out.println(s);

        int y = Integer.parseInt(x);        // String to integer
        System.out.println(y);

        x = "10.5";
        double z = Double.parseDouble(x);   // String to double
        System.out.println(z);
    }
}