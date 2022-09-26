import java.util.*;

public class A_Cookies {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int sum = 0, flag = 0;

        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
            sum += arr[i];
        }
        for (int i = 0; i < n; i++) {
            if ((sum - arr[i]) % 2 == 0)
                flag++;
        }
        System.out.println(flag);

        in.close();
    }
}