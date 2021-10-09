package july.challenge;

import java.util.Scanner;
import java.lang.Math;
public class codechefjuly {
    public static void main(String[] args) {
        int T;
        Scanner sc= new Scanner (System.in);
        System.out.println("enter the number of test cases");
        T= sc.nextInt();
        if(T>=1 && T<=5000) {
            for (int i = 1; i <= T; i++) {
                int a = strategy1();
                int b = strategy2();
                System.out.println(Math.max(a, b));
            }
        }
    }
    static int strategy1()
    {
        int x;
        int w1=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the units of work to be done each day");
        x= sc.nextInt();
        if(x>=1 && x<=18) {
            w1 = x * 7;
        }
        return w1;
    }
    static int strategy2()
    {
        int d, x,y,z;
        int w2=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the no of days");
        d= sc.nextInt();
        System.out.println("enter the x units of work as per the first strategy");
        x= sc.nextInt();
        System.out.println("enter the y units of work as per the second strategy");
        y= sc.nextInt();
        System.out.println("enter the z units of work as per the second strategy");
        z= sc.nextInt();

       if(d>=1 && d<=7)
       {
           if(x>=1 && x<=18)
           {
               if(y>x && y<=18)
               {
                   if(z>=1 && z<x)
                   {
                        w2 = (y*d)+(z*(7-d));
                   }
               }
           }
       }

        return w2;
    }

}

