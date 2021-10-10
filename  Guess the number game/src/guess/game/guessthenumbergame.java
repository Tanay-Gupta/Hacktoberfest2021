package guess.game;
import java.sql.SQLOutput;
import java.util.Random;
import java.util.Scanner;
public class guessthenumbergame {
    public static void main(String[] args) {
        System.out.println("Welcome to Wonderland");
        System.out.println("May I have your name");

        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        System.out.println("Hello " + name);

        System.out.println("Shall we start ?");
        System.out.println("\t1. Yes");
        System.out.println("\t2. No");

        int beginanswer = sc.nextInt();

        while (beginanswer != 1) {
            System.out.println("Shall we start ?");
            System.out.println("\t1. Yes");
            System.out.println("\t2. No");

            beginanswer = sc.nextInt();


        }

        Random rn = new Random();
        int x = rn.nextInt(20) + 1;
        System.out.println("Please guess a number");
        int userInput = sc.nextInt();

        int timesTried = 0;
        boolean haswon = false;
        boolean shouldfinish = false;

        while (!shouldfinish) {
            timesTried++;

            if (timesTried < 5) {
                if (userInput == x) {
                    haswon = true;
                    shouldfinish = true;
                } else if (userInput > x) {
                    System.out.println("Guess lower");
                    userInput = sc.nextInt();
                } else {
                    System.out.println("Guess higher");
                    userInput = sc.nextInt();
                }
            } else {
                shouldfinish = true;
            }

        }
        if (haswon) {
            System.out.println("Congratulations! You have guessed in your" + timesTried +"guess.");
        } else {
            System.out.println("Game Over");
            System.out.println("the number was" + x);
        }
    }}
