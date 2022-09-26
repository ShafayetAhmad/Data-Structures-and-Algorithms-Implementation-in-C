import java.util.*;

public class A_Even_Odds {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long k = in.nextLong();
        if (k <= (n + 1) / 2) {
            System.out.println(k * 2 - 1);
        } else {
            System.out.println((k - (n + 1) / 2) * 2);
        }
        in.close();
    }
}