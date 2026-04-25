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
  public static int binarysearch(int numbers[], int key){
    int start =  numbers[0];
    int end = numbers.length-1;
    int mid = start + end / 2;

    while (start <= end) {
        if (mid == key) {
            System.out.println("key founded");
            
        }
        if (mid > key) {
            end = mid-1;
            mid = 
            
        }
        if (mid < key) {
            start = mid + 1;
            
        }
        
    }




    return key;


  }


    public static void main(String[] args) {
        int numbers[] = {2, 4, 6, 8, 10, 12, 14};
        int key = 10;
        
        System.out.println(binarysearch(numbers, key));
       
    }

}
