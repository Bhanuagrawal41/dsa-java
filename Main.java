import java.util.*;

public class Main{


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


// public class Main {
//     public static void main(String[] args) {
//         int num = 22062006;

//         while (num>0) {
//             int lastdigit = num % 10;
//             System.out.print(lastdigit + " ");
//              num = num/10;
            
//         }
//         System.out.println();
//     }
// }

// reverse a no and store that no 


// public class Main {

//     public static void main(String[] args) {
//         int no = 123;
//         int revert = 0;
        
//         while (no > 0 ) {
//            int lastdigit = no % 10;
//             revert = (revert*10) + lastdigit;
//             no = no/10;
           
            
//         }
//         System.out.println(revert);
//     }
// }

////----------do while loops-------------//


//--------------------------------//
// public class Main{
//     public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);

//        do{
//         System.out.println("enter your number : ");
//         int n = sc.nextInt();
//         if(n % 10 == 0){
            
//             break;
            
//         }
//         System.out.println(n);
//        }while(true);


//         }
// }




// public class Main {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         do{
//             System.out.println("enter your number");
//             int n = sc.nextInt();
            
//             if (n % 10 == 0) {
//                 continue;
//             }
//             System.out.println(n);
//         }while(true);
//     }
// }

/////////---------------------learining functions ------------------//////////////
// public class Main{

//    public static int multi(int a , int b){

//     int product = a * b;
    
//     return product;



//    }


//     public static void main(String[] args) {
        
//         multi(5, 80);
//     }
// }

//-----------------------------fucntions -------------//////




// public class Main {

//     public static void fact(int a){
//         int fact = 1;
        
//         for(int i = 1; i <= a; i++){
//             fact = fact * i;
           



//         }
//          System.out.println(fact);


//     }
//     public static void binary(int a , int b){
        

//     }


//     public static void main(String[] args) {
//         fact(5);
        
//     }
// }


// public class Main {
  

      
//     public static int average(int a, int b, int c){
//         int avg = (a + b + c)/2;
//         System.out.println(avg);
//         return 0;
//     }
//     public static void main(String[] args) {
//         average(12,  5, 8);
        
//     }
// }

// public class Main{
//      public static boolean isprimme(int n){
//         boolean isprimme = true;
//         for(int i = 2; i <= n-1; i++){
//             if (n % i == 0) {

//                 isprimme = false;
                
//             }
//         }
//         return isprimme;


//      }


//     public static void main(String[] args) {
//         System.out.println(isprimme(10));
        
//     }
// }
///--------- checking whether the no is prime or not --------//
/// 
   public static void main(String[] args) {
//     for(int i = 1; i <=5; i++){
//       for(int j = 1; j <= i; j++){
//             System.out.print("*");
//       }
//       System.out.println();
//     }

      // for(int i = 1; i<=4; i++){
      //       for(int j = 1; j <= 4-i+1; j++){
      //             System.out.print("*");
      //       }
      //       System.out.println();
      // }
      for(int i = 1; i<=4; i++){
            for(int j = 1; j <= i; j++){
                  System.out.print("hey tommarow is my exam so no coding tody bud");
            }
            System.out.println();
      }
   }
}