import java.util.*;

public class A_Amusing_Joke {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str1 = in.next(), str2 = in.next(), str3 = in.next();
        str1 = str1.concat(str2);
        char arr1[] = str1.toCharArray();
        char arr2[] = str3.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if (Arrays.equals(arr1, arr2))
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();
    }
}