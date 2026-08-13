// #include<bits/stdc++.h>
// using namespace std;

// // struct Node{
// //     public:
// //     int data;
// //     Node* next;

// //     public:

// //     Node(int data1, Node* next1){
// //         data = data1;
// //         next = next1;
// //     }
// // };
// // Node* converArr2LL(vector<int> &arr){
// //     Node* head = new Node(arr[0]);
// //     Node* mover = head;
// //     for(int i =1; i<arr.size(); i++){
// //         Node* temp = new Node(arr[i]);
// //     }
// // }




// // int main(){
// //     vector<int> arr = {2, 5, 8, 7};
// //     // Node* y = new Node(arr[0], nullptr);
// //     // cout << y->data << endl;
// //     // cout << y->next;

// // }


// int main(){
   
//  int n;
//  cin >> n;
//   int arr[n];

//   for(int i = 0; i<n; i++){
//     cin >> arr[i];

//   }
//   // preccomput4e

//   int hash[13] = {0};
//   for(int i = 0; i< n; i++){
//     hash[arr[i]] += 1;
//   }

//   int q;
//   cin >> q;
//   while(q--)
//         {
//             int number;
//             cin >> number;
//             // fetch
//             cout << hash[number] << endl;

//         }
//         return 0;






//     return 0;
// }



// #include <iostream>
// using namespace std;
 

// class Node{
//   int data;
//   Node* next;

//   public:
//   Node(int val){
//     data = val;
//     next = nullptr;
//   }

// };

// class List{
//   Node* head;
//   Node* tail;

//   public:
//   List(){
//    head = NULL;
//    tail = NULL;

//   }


// };


// int main(){
//     List ll();
//   return 0;
  
// }


// class Solution {
// public:
//     int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
//         // Step 1: Sort the array
//         sort(arr.begin(), arr.end());

//         // Step 2: First element must be 1
//         arr[0] = 1;

//         // Step 3: Traverse the remaining elements
//         for (int i = 1; i < arr.size(); i++) {

//             // Current element cannot be greater than previous + 1
//             arr[i] = min(arr[i], arr[i - 1] + 1);
//         }

//         // Step 4: Last element is the maximum
//         return arr.back();
//     }
// };


// #include <iostream>
// #include <vector>
// using namespace std;
 

// int LargestElement(vector<int> &arr, int n){
//     int largestelment = arr[0];

//     for(int i = 1; i<n; i++){
//         if(arr[i] > largestelment ){
//             largestelment = arr[i];
//         }
//     }
//     return largestelment;

// }



// int main(){
//   int n;
//   cin >> n;

//   vector<int> arr(n);

//   for(int i = 0; i<n; i++){
//     cin >> arr[i];
//   }
//      cout << LargestElement(arr, n);



// }


// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int SecondLargest(vector<int> &arr, int n){
//     int largestelement = INT_MIN;
//     int SLargest = arr[0];

//     for(int i = 1; i<n; i++){
//         if(arr[i] > largestelement){
//             SLargest = largestelement;
//             largestelement = arr[i];
//         }else if(arr[i] > SLargest && arr[i] != largestelement){
//             SLargest = arr[i];
//         }
//     }

//     return SLargest;

// }

// int main(){
//     int n;
//     cin >> n;

//     vector <int> arr(n);

//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     cout <<  SecondLargest(arr, n);
// }

//now check if array is sorted or not


// #include <iostream>
// #include <vector>
// using namespace std;



// bool issorted(vector<int> &arr, int n){
    

//     for(int i = 1; i < n; i++){
//         if(arr[i] < arr[i-1]){
//             return false;
//         } 
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin >> n;


//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//       cin >> arr[i];
//     }
  
//   cout << boolalpha << issorted(arr, n);
    



// }

// left rotate the array


// #include <iostream>
// #include <vector>
// using namespace std;



// int main(){
//     int n;
//      cin >> n;

//      vector<int> arr(n);

//      for(int i = 0; i< n; i++){
//         cin >> arr[i];
//      }


// }


// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// void findTheSecondLargest(vector<int> &arr, int n){
//     int largest = arr[0];
//     int Slargest = INT_MIN;

//     for(int i = 0; i<n; i++){
//         if(arr[i] > largest){
//             Slargest = largest;
//             largest = arr[i];

//         }else if(arr[i] > Slargest && arr[i] != largest){
//             Slargest = arr[i];
//         }
//     }
//     cout << Slargest;


// }



// int main(){
//     int n;
//     cin >> n;
    
//     vector<int> arr(n);

//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }
//     findTheSecondLargest(arr, n);
   


// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void rotateByOne(vector<int> &arr, int n){
//     int first = 0;
//     int last = n-1;

//     for ()
//     {
//         /* code */
//     }
    
// }


// int main(){
//   int n;
//   cin >> n;

//   vector<int> arr(n);

//   for(int i= 0; i < n; i++){
//     cin >> arr[i];
//   }
// }

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 1; i < n; i++){
//             if(nums[i] < nums[i-1]){
//                 return false;
//             }
           
//         }  
//         return true;
        
//     }
    
// };


// class Solution {
// public:
//     int ans = INT_MAX;

//     void dfs(int node, vector<vector<pair<int,int>>>& adj, vector<int>& vis) {
//         vis[node] = 1;

//         for (auto &it : adj[node]) {
//             int next = it.first;
//             int wt = it.second;

//             ans = min(ans, wt);

//             if (!vis[next]) {
//                 dfs(next, adj, vis);
//             }
//         }
//     }

//     int minScore(int n, vector<vector<int>>& roads) {

//         vector<vector<pair<int,int>>> adj(n + 1);

//         for (auto &road : roads) {
//             int u = road[0];
//             int v = road[1];
//             int w = road[2];

//             adj[u].push_back({v, w});
//             adj[v].push_back({u, w});
//         }

//         vector<int> vis(n + 1, 0);

//         dfs(1, adj, vis);

//         return ans;
//     }
// };

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int temp = arr[0];
//     for(int i = 1; i<n; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
   

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }



// class Solution {
//   public:
//     void rotate(vector<int> &arr) {
//         // code here
//         int n = arr.size();
//         int temp = arr[n-1];
//         for(int i = n-1; i > 0; i--){
//              arr[i] = arr[i-1];
        
//         }
//         arr[0] = temp;
//     }
// };

// now doing this using a forward loop and a temporary variable to store the first element of the array. The first element is then moved to the last position after shifting all other elements to the left by one position. This effectively rotates the array to the left by one position.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
   
//     vector <int> arr(n);

//     for(int i =0; i<n; i++){
//         cin >> arr[i];
//     }


//       int temp = arr[n-1];
//       int prev = arr[0];

//       for(int i = 1; i<n; i++){
//         int current = arr[i];
//         arr[i] = prev;
//         prev = current;

//       }
//       arr[0] = temp;

//       for(int i = 0; i< n; i++){
//         cout << arr[i];
//       }

// }
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//        int mover = 0;

       

//        for(int i = 0; i<nums.size(); i++){




//             if(nums[i] != 0){
//                 swap(nums[i], nums[mover]);
//                 mover++;
//             }

            
//        }
//     }
// }
// class Solution {
// public:
//     int removeCoveredIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(),
//              [](vector<int>& a, vector<int>& b) {
//                  if (a[0] == b[0])
//                      return a[1] > b[1];
//                  return a[0] < b[0];
//              });

//         int count = 0;
//         int maxEnd = -1;

//         for (auto &it : intervals) {
//             if (it[1] > maxEnd) {
//                 count++;
//                 maxEnd = it[1];
//             }
//         }

//         return count;
//     }
// };




// int maxconsi = 0;
// int tempmax = 0;

// for(int i = 0; i < nums.size(); i++){

//     if(nums[i] == 1){
//         tempmax++;
//     }

//     if(tempmax > maxconsi){
//         maxconsi = tempmax;
//     }

//     if(nums[i] != 1){
//         tempmax = 0;
//     }
// }

// return maxconsi;






// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n =nums.size();
//         int x=0;
 
//         for( int i=0;i<n;i++)
//         {
//             x=x^nums[i]; 
//         }
//         return x;
//     }
// };



// class Solution {
// public:
//     long long sumAndMultiply(int n) {
//         string s = to_string(n);
//           long long x = 0;
//           long long sum = 0;
         
//         for(char c : s){
//            int digit = c - '0';

//             if(digit != 0){
//                x = x * 10 + digit;
//                sum += digit;
//             }
//         }
//         return x * sum;
//     }
// };


// class Solution {
//     public:
//         long long sumAndMultiply(int n) {
//             long long x = 0;
//             int r = 1;
//             int sum_digits = 0;
//             while (n > 0) {
//                 int d = n % 10;
//                 n /= 10;
//                 if (d == 0) continue;
//                 x = d * r + x;
//                 sum_digits += d;
//                 r *= 10;
//             }
//             return x * sum_digits;
//         }
// };

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void kadaneAlgo(vector<int> arr, int n){
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for(int i = 0; i < n; i++){
          curr_sum += arr[i];

          if(curr_sum > max_sum){
            max_sum = curr_sum;
          }

          if(curr_sum < 0){
            curr_sum = 0;
          }

    }
    cout << max_sum;
}




// int main(){
//     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//     int n = arr.size();
//     kadaneAlgo(arr, n);
// }




class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = nums[0];
        int ans = nums[0];
        int mn = nums[0];
          

        for(int i = 1; i<nums.size(); i++){
                  if (nums[i] < 0)
                swap(mx, mn);

            mx = max(nums[i], nums[i] * mx);
            mn = min(nums[i], nums[i] * mn);

            ans = max(ans, mx);
          
        }
        
        return ans;
        
    }
};