
public class Pow {

    public static double pow(double x, int n) {
        double result = 1.0;
        for (int i = 0; i < n; i++) {
            result *= x;
        }

        return result;
    }

    public static int pow(int x, int n) {
        int result = 1;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return result;
    }


    public static void main(String[] args) {
        System.out.println(pow(2.0, 4));

        System.out.println(pow(4,3));
    }
}