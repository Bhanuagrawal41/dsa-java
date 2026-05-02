import java.util.*;
   

public class arraydsa {

    // public static void arrayI(int marks[]){
    //     for(int i = 0; i < marks.length; i++){
    //         marks[i] = marks[i] + 1;
        
    //     }
    // }


    // public static void main(String[] args) {
    //    int marks[] = {1, 58, 96};
    //    arrayI(marks);
    //    // for printing the marks
    //    for(int i = 0; i < marks.length; i++){
    //     System.out.print(marks[i] + " ");
    //    }
    //    System.out.println();
       
    // }
    
    //    public static void main(String[] args) {
    //     int marks[] = {1,2,34};
          
    //      for(int i = 0; i < marks.length; i++){
    //         if (marks[i] == 5) {
    //             System.out.println("we have finded the required no :" + marks[i]);
                
    //         }else{
    //             System.out.println("no not found");
    //         }
    //      }
    //    }   
    //--------------------this is the lenear search ----- before the teacher explains to me -////////////
     //----------now doing it using the functions -----------//
         
// how to find the largest value--------////
    //  public static int largest(int numbers[]){
    //     int largests = Integer.MIN_VALUE;
    //     int smallest = Integer.MAX_VALUE;
    //     for(int i = 0; i < numbers.length; i++){
    //         if (i > largests) {
    //             largests = numbers[i];
                
    //         }
    //         if (smallest > numbers[i]) {
    //             smallest = numbers[i];
                
    //         }

    //     }
    //     System.out.println("smallest is value is :" + smallest);
    //     return largests ;
        
    //  }         


    // public static void main(String[] args) {
    //   int  numbers[] ={1,2,6,3,5};
    //   System.out.println("The largest no is :" + largest(numbers));
      
     
    // }
//   public static int binarysearch(int numbers[], int key){
//     int start =  numbers[0];
//     int end = numbers.length-1;
//     int mid = start + end / 2;

//     while (start <= end) {
//         if (mid == key) {
//             System.out.println("key founded");
            
//         }
//         if (mid > key) {
//             end = mid-1;
//             mid = 
            
//         }
//         if (mid < key) {
//             start = mid + 1;
            
//         }
        
//     }




//     return key;


//   }


//     public static void main(String[] args) {
//         int numbers[] = {2, 4, 6, 8, 10, 12, 14};
//         int key = 10;
        
//         System.out.println(binarysearch(numbers, key));
       
//     }

// }

// public static void reverse(int numbers []){
//     int start = 0; int last = numbers.length-1;

//     while (start < last) {
//        int temp = numbers[last];
//        numbers[last] = numbers[start];
//        numbers[start] = temp;

//         start++;
//     last--;
//     }
    


// }

// public static void main(String[] args) {
//     int numbers[] = {2, 4, 6, 8, 10};
//     reverse(numbers);
//     for(int i = 0; i < numbers.length; i++){
//         System.out.println(numbers[i] + "");

//     }
//     System.out.println();


    
// }
// public static void pair(int num[]){
//     for(int i = 0; i < num.length; i++){
//         for(int j = i+1; j < num.length; j++) {
//             System.out.print("(" + num[i] + ",");
//             System.out.print(num[j] + ")" + " ");

//         }
//         System.out.println();
//            }

// }



// public static void main(String[] args) {
//     int num[] = {2, 4, 6, 8, 10};
//     pair(num);
    
// }


// public static void sub(int num[]){
//     for(int i = 0; i < num.length; i++){
//         for(int j = i; j<num.length; j++ ){
//             for(int k = i; k<=j; k++){
//                 System.out.print(num[k]);
//             }
//             System.out.println();
//         }
//     }
// }

// ---------------- find ing subarray ------//



// public static void subarraysum(int num []){
//      int prefix[] = new int[num.length];

//     for(int i = 0; i < num.length; i++ ){
        

//     }
// }





// public static void main(String[] args) {
    
// int num [] = {2, 4, 6, 8, 10};


    
// }





// }

public static void bubblesort(int arr []){
    for(int turn = 0; turn < arr.length-1; turn++){
        for(int j = 0; j < arr.length-1-turn; j++){
            if (arr[j] > arr[j+1]) {

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }

    }

}


public static void printArr(int arr[]){
    for(int i = 0; i < arr.length; i++ ){
        System.out.print(arr[i]+ " ");
    }
    System.out.println();
}



public static void main(String[] args) {
    int arr [] = {5, 4, 1, 3, 2};
    bubblesort(arr);
    printArr(arr);
}














}