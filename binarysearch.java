

public class binarysearch{
    public static   int BinarySearch(int arr[], int key){
  int start = 0;
   int end = arr.length-1;
   int mid = (start + end)/2;

            while(start <= end){
                if( arr[mid] == key){
                    return key;
            
                } else if(arr[mid] > key){

                } else{
                
                }
            }


            return key;
    }






    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5, 6};
        int key = 5;
    }

}