import java.util.*;
import java.util.Scanner;


// public class Main {

//     public static void main(String[] args) {
//         int a = 2;
//         int b = 5;

//         if(a>b){
//             System.out.println("a is bigger");
//         }
//         else{
//             System.out.println("b is");
//         }
//     }
// }

// public class Main {
//     public static void main(String[] args) {
//         int x = 445;
//         if (x % 2 == 0) {
//             System.out.println("x is even sir");
//         }
//         else{
//             System.out.println("no is odd");
//         }
        
//     }
// }


// find the larrgest of the three no ???


// public class Main{
//     public static void main(String[] args) {
//         int a = 2;
//         int b = 5;
//         int c = 4;


//         if(a>b){
//             System.out.println("a is greater");
//         }
//         else if(b>c) {
//             System.out.println("b is greater");
//         }
//         elseif(c>b )
//     }
// }

// learining ternary operator


// public class Main {

//     public static void main(String[] args) {
//         int marks = 34;
//         String reportcard = marks >= 30 ? "pass" : "fail";
//         System.out.println(reportcard);
//     }
// }



/////////////// ------------ switch statemtne _______;;;;??
/// 
// /// 
//    public class Main{
//     public static void main(String[] args) {
        
//     }
//    }




// public class Main {

//     public static void main(String[] args) {
//         int n = 1;
//         while (n <= 10) {
//             System.out.println(n);
//             n++;
//         }
//     }
// }




// public class Main{
    
//     public static void main(String[] args) {
        
//     }
//     }


// printing a square pattern

// public class Main{
//     public static void main(String[] args) {
//          for(int i = 1; i<=4; i++){
//             for(int j = 1; j<= 4; j++){
//                 System.out.print("*");
//             }
//             System.out.println("*");
//          }
//     }
// }

// reverse a number using while loop


public class Main {
    public static void main(String[] args) {
        int num = 22062006;

        while (num>0) {
            int lastdigit = num % 10;
            System.out.print(lastdigit + " ");
             num = num/10;
            
        }
        System.out.println();
    }
}
