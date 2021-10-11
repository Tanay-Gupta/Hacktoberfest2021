import static java.util.stream.Collectors.toList;
import java.util.stream.IntStream;
import java.util.Arrays;
import java.util.List;
import java.util.function.Predicate;

public class Stream1 {
    public static void main(String[] args) {
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 20);
        // Prime number 
        System.out.println(numbers.stream()
                             .filter(Stream1::isPrime)
                             .collect(toList()));
    }

   public static boolean isPrime(int number) {
    return !IntStream.rangeClosed(2, number/2).anyMatch(i -> number%i == 0); 
}
}