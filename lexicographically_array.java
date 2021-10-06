import java.util.*;

public class lexicographically_array {
    public static void main(String[] arys) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the word ");
        String str = sc.nextLine();
        System.out.println("Enter the length ");
        int n = sc.nextInt();
        String arr[] = new String[] {};
        int len = str.length();
        for (int i = 0; i < len - 2; i++) {
            arr[i] = str.substring(i, i + 3);
        }
        int len1 = arr.length;
        for (int i = 0; i < len1 - 1; ++i) {
            for (int j = i + 1; j < len1; ++j) {
                if (arr[i].compareTo(arr[j]) > 0) {

                    // swap words[i] with words[j[
                    String temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        System.out.println(arr[0]);
        System.out.println(arr[len1 - 1]);

    }
}