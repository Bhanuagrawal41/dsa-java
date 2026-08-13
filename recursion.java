public class recursion {


public static void dec(int n){
    
    //base case
    if(n == 1){
        System.out.println(n);
        return ;
    }


System.out.print(n + " ");
    dec(n-1);
}


public static int fact(int n){
    // base case
    if(n == 0){
        
        return 1;
    }



    //  int fn1 = fact(n-1);
   int fn =  n * fact(n-1);
   return fn;
}





public static int sumofnatural(int n){
    // base case 
     if(n <= 0){
        
        return n;
     }


  

       
    // logic---
     int sum = n + sumofnatural(n-1);
    
     return sum;
}




public static int fibbonachi(int n){
    //base case
         if(n == 1 || n == 0){
            return n;
         }


    // logic 
    
    int sum1 = fibbonachi(n-1) +  fibbonachi(n-2);
    return sum1;
}


public static boolean issorted(int arr[], int i){
     

// base case
if(i == arr.length-1){
    return true;
}


    // logic
    if(arr[i] > arr[i+1]){
        return false;
    }
    

   return issorted(arr, i+1);
   
}


       public static  int firstoccurence(int arr[], int key, int i){

          if(i == arr.length-1){
            return -1;
          }


        //logic
        if(arr[i] == key){
            return i;
        }
        return firstoccurence(arr, key, i+1);

       }
       
           

       public static int tilingproblem(int n){
        // base condition

        if(n == 0 || n == 1){
            return 1;
        }

        // logic

        int fnm1 = tilingproblem(n-1);
        int fnm2 = tilingproblem(n-2);
        int totalways = fnm1 + fnm2;
        return totalways;


       }



      public static void RemoveDuplicate(String str, int idx, StringBuilder newstr, boolean map[] ){
        // base case
        if(idx == str.length()){
            System.out.println(newstr);
            return;
        }

        // logic or kaam
        char currChar = str.charAt(idx);

        if(map[currChar- 'a'] == true){
            RemoveDuplicate(str, idx+1, newstr, map);
        } else {
            map[currChar - 'a'] = true;
            RemoveDuplicate(str, idx+1, newstr.append(currChar), map);
        }
      }


     
    public static void main(String[] args) {
        // int arr[] = {2, 3, 9, 5, 6, 7, 6};
        // int n = 5;
        // System.out.println(tilingproblem(n));

        String str = "appnnacollege";
        RemoveDuplicate(str, 0, new StringBuilder(" "), new boolean[26]);

        
       
       
    
    }
    
}
