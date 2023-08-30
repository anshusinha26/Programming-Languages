//import com.sun.security.jgss.GSSUtil;
//
//import java.util.*;
//
//public class Loops {
//    public static void main(String[] args) {
////        for(int i = 0; i <= 10; i++) {
////            System.out.print(i);
////            System.out.print(" ");
////        }
//
////        int i = 0;
////        while(i <= 10) {
////            System.out.print(i);
////            System.out.print(" ");
////            i++;
////        }
//
////        int i = 0;
////        do {
////            System.out.print(i);
////            System.out.print(" ");
////            i++;
////        } while(i <= 10);
//
////        // Print the sum of first 'n' natural numbers
////        Scanner sc = new Scanner(System.in);
////        System.out.print("Enter a number upto which the sum is to be found: ");
////        int num = sc.nextInt();
////        int sum = 0;
////
////        for(int i = 1; i <= num; i++) {
////            sum += i;
////        }
////        System.out.print("The sum is: " + sum);
//
//        // Homework problems
//
////        // 1. Print all even numbers till n.
////        Scanner sc = new Scanner(System.in);
////        System.out.print("Enter a number upto which all the even numbers have to be found: ");
////        int num = sc.nextInt();
////
////        for(int i = 1; i <= num; i++) {
////            if(i % 2 == 0) {
////                System.out.print(i);
////                System.out.print(" ");
////            }
////        }
//
////        // 2. Run
////        for(; ;) {
////            System.out.println("Java really sucks!"); // oh, fuck! it's an infinite loop
////        }
//
////        // 3. Make a menu-driven program. The user can enter 2 numbers, either 1 or 0.
////        // If the user enters 1 then keep taking input from the user for a student’s marks(out of 100).
////        // If they enter 0 then stop. If he/ she scores :
////        //          Marks >=90 -> print “This is Good”
////        //          89 >= Marks >= 60 -> print “This is also Good”
////        //          59 >= Marks >= 0 -> print “This is Good as well”
////        // Because marks don’t matter but our effort does.
////        int num;
////        do {
////            Scanner sc = new Scanner(System.in);
////            System.out.println("------------------------------------");
////            System.out.print("Enter a number not other than 0 or 1: ");
////            num = sc.nextInt();
////
////            if(num == 1) {
////                System.out.print("Enter your marks out of 100: ");
////                int marks = sc.nextInt();
////                if (marks >= 90 && marks <= 100) {
////                    System.out.println("This is Good");
////                } else if (marks >= 60 && marks <= 89) {
////                    System.out.println("This is also Good");
////                } else if (marks >= 0 && marks <= 59) {
////                    System.out.println("This is Good as well");
////                }
////            }
////            else if(num == 0){
////                System.out.println("Program terminated!");
////            }
////            else {
////                System.out.println("Invalid input!");
////            }
////        } while (num != 0);
//
//        // Bonus question: Print if a number is prime or not (Input n from the user).
//    }
//}

//public class A {
//    int add(int i, int j) {
//        return i+j;
//    }
//}
//public class B extends A {
//    public static void main(String argv[]) {
//        short s = 9;
//        System.out.println(add(s, 6));
//    }
//}

//class BitPuzzle {
//    public static void main(String[] args) {
//        int mask = 0x000F;
//        int value = 0x2222;
//        System.out.println(value & mask);
//    }
//}

//public class Loops {
//    public static void main(String[] args) {
//        try {
//            Float f1 = new Float("3.0");
//            int x = f1.intValue();
//            byte b = f1.byteValue();
//            double d = f1.doubleValue();
//            System.out.println(x + b + d);
//        }
//        catch (NumberFormatException e) {
//            System.out.println("bad number");
//        }
//    }
//}

class SampleDemo implements Runnable {
    private Thread t;
    private String threadName;

    SampleDemo (String threadName) {
        this.threadName = threadName;
    }

    public void run () {
        while (true)
            System.out.println(threadName);
    }

    public void start () {
        if (t == null) {
            t = new Thread(this, threadName);
            t.start();
        }
    }
}

public class TestThread {
    public static void main(String args[]) {
        SampleDemo A = new SampleDemo("A");
        SampleDemo B = new SampleDemo("B");

        B.start();
        A.start();
    }
}