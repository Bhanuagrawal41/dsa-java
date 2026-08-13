// #include <iostream>
// #include <vector>
// using namespace std;


// void BinarySearch(vector<int> &arr, int key){

//      int start = 0;
//      int last = arr.size()-1;
     

//          while(start <= last){
//         int mid = (start + last) / 2;

//         if(arr[mid] == key){
//             cout << arr[mid] << " key found";
//             return;
//         }
//        else if(arr[mid] > key){
        
//                last = mid - 1;
//         } else{
            
//             start = mid + 1;
//         }
        

//      }
//      cout << "not found";

// }







// int main(){

//     //  int n;
//     //  cin >> n;
//     //  int key = 5;


//     //  vector<int> arr(n);

//     //  for(int i = 0; i <n; i++){
//     //     cin >> arr[i];
//     //  }

//     vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
//     int key = 6;

//      BinarySearch(arr, key);

    


// }


// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {

//         int start = 0;
//         int end = nums.size()-1;

//           while(start <= end){
//         int mid = (start + end)/2;
//         if(nums[mid] == target){
//             return mid;
//         } else if(nums[mid] < target){
//             start = mid + 1;
           



//         } else{
//             end = mid -1;
//         }

//        }
//         return start;
//     }
// };

// -----------solving the leetcode problem 34-------------//

// #include <iostream>
// #include <vector>

// using namespace std;


//  void InsertElement(vector<int> &arr, int n, int key){
//     vector<int> ans;
//     int start = 0;
//     int last = n-1;
//  }




// int main(){
//     vector<int> arr = {5,7,7,8,8,10};
//     int n = arr.size();
//     int key = 8;

//     InsertElement(arr, n, key);
// }

// --------------------- now doing the binary search with recursssion ------------///


// #include <iostream>
// #include <vector>
// using namespace std;
// int BinaryRecurs(vector<int> &arr, int key, int start, int last){
//         if(start > last){
//             return -1;
//         }


//         int mid = (start + last)/2;
//         if(arr[mid] == key){
           

//             return mid;
//         }


//         if(arr[mid] > key){
//              return BinaryRecurs(arr,  key, start, mid-1);
//         } else{
//            return BinaryRecurs(arr, key, mid+1, last);
//         }

//         return mid;

// }





// int main(){
   

//    vector<int> arr = {-1,0,3,5,9,12};
//    int n = arr.size();
//    int key = 9;
   
//    int index = BinaryRecurs(arr, key, 0, n-1);
//    if(index != -1)
//     cout << "Key found at index " << index;
// else
//     cout << "Key not found";

// }

// //------------------------first and the last occurence of the element leetcode problem no 34. --------------------//
// #include <iostream>
// #include <vector>
// using namespace std;

//    int LowerBound(vector<int> &nums, int target){
//           int start = 0;
//           int last = nums.size() - 1;
//           int ans = 0;
//           while(start <= last){
//             int mid = (start + last)/2;
//             if(nums[mid] == target){
//                 ans = mid;
//                 last = mid -1;

//             } else if(nums[mid] > target){
//                 last = mid - 1;
//             } else{
//                 start = mid + 1;
//             }

               
//           }
//           return ans;
//    }


//    int UpperBound(vector<int> &nums, int target){
//          int start = 0;
//          int last = nums.size() - 1;
//          int ans = 0;
//          while(start <= last){
//             int mid = (start + last)/2;
//             if(nums[mid] == target){
//                 ans = mid;
//                 start = mid + 1;
//             } else if(nums[mid] > target){
//                 last = mid - 1;
//             } else{
//                 start = mid + 1;
//             }
//          }
//          return ans;

//    }


// int main(){
//      vector<int> nums = {5,7,7,8,8,10};
//      int target = 8;
//     vector<int> v;
//     int lowerBound = LowerBound(nums, target);
//     int upperbound = UpperBound(nums, target);
//       v.push_back(lowerBound);
//       v.push_back(upperbound);


//       for(int i = 0; i<v.size(); i++){
//         cout <<  v[i] << ',';
//       }

// }


// class Solution {
//   public:
//     int findFloor(vector<int>& arr, int x) {
//         // code here
//         int start = 0; 
//         int last = arr.size() - 1;
//         int ans = -1;
        
//         while(start <= last){
//             int mid = (start + last) / 2;
//          if(arr[mid] <= x ) {
//              ans = mid;
//                  start = mid + 1;
                
//             } else{
                
                
//                 last = mid -1;
               
//             }
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {

//         int low = 0;
//         int high = nums.size() - 1;

//         while(low <= high){

//             int mid = low + (high - low) / 2;

//             if(nums[mid] == target)
//                 return mid;

//             // Left half is sorted
//             if(nums[low] <= nums[mid]){

//                 if(nums[low] <= target && target < nums[mid])
//                     high = mid - 1;
//                 else
//                     low = mid + 1;
//             }

//             // Right half is sorted
//             else{

//                 if(nums[mid] < target && target <= nums[high])
//                     low = mid + 1;
//                 else
//                     high = mid - 1;
//             }
//         }

//         return -1;
//     }
// };






// class Solution {
// public:

//                bool static cmp(pair<char,int> a, pair<char,int> b){
//                 return a.second > b.second;
//               }


//     string frequencySort(string s) {
//         unordered_map<char, int> mp;

//         for(char c : s){
//             mp[c]++;
//         }

    


//         vector<pair<char,int>> freq;

//         for(auto x : mp){
//             freq.push_back(x);
//         }

//         sort(freq.begin(), freq.end(), cmp);


//         string ans = "";

//         for(auto x : freq){
//             while(x.second--){
//                 ans += x.first;
//             }
//         }
//         return ans;
//         // today i learned that how this first and second works like in the pair how to make a pair vector and how to sort it in the descending order based on the second value of the pair.
        
//     }
// };



// class Solution {
// public:
//     void dfs(int node, vector<vector<int>>& adj, vector<int>& vis,
//              int &nodes, int &degreeSum) {

//         vis[node] = 1;
//         nodes++;

//         degreeSum += adj[node].size();

//         for (int nei : adj[node]) {
//             if (!vis[nei])
//                 dfs(nei, adj, vis, nodes, degreeSum);
//         }
//     }

//     int countCompleteComponents(int n, vector<vector<int>>& edges) {

//         vector<vector<int>> adj(n);

//         for (auto &e : edges) {
//             adj[e[0]].push_back(e[1]);
//             adj[e[1]].push_back(e[0]);
//         }

//         vector<int> vis(n, 0);

//         int ans = 0;

//         for (int i = 0; i < n; i++) {

//             if (!vis[i]) {

//                 int nodes = 0;
//                 int degreeSum = 0;

//                 dfs(i, adj, vis, nodes, degreeSum);

//                 int edgeCount = degreeSum / 2;
//                 int requiredEdges = nodes * (nodes - 1) / 2;

//                 if (edgeCount == requiredEdges)
//                     ans++;
//             }
//         }

//         return ans;
//     }
// };


// class Solution {
// public:
//     bool canEat(vector<int>& piles, int h, int k) {
//         long long hours = 0;

//         for (int bananas : piles) {
//             hours += (bananas + k - 1) / k;   // ceil(bananas / k)

//             if (hours > h)
//                 return false;
//         }

//         return true;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {

//         int low = 1;
//         int high = *max_element(piles.begin(), piles.end());

//         int ans = high;

//         while (low <= high) {

//             int mid = low + (high - low) / 2;

//             if (canEat(piles, h, mid)) {
//                 ans = mid;
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }

//         return ans;
//     }
// };






// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr) {

//         vector<int> copy = arr;

//         sort(copy.begin(), copy.end());

//         unordered_map<int,int> rank;
//         int r = 1;
//       // using map to give rank than i will replace them int the orginal one by using loops
//         for(int x : copy){
//             if(rank.find(x) == rank.end()){
//                 rank[x] = r;
//                 r++;
//             }
//         }

//         for (int &x : arr){
//             x = rank[x];
        
//         }


//         return arr;
//     }
// };


// //---------leet code daily challenge ----//
// class Solution {
// public:
//     vector<int> sequentialDigits(int low, int high) {
//         vector<int> ans;

//         for (int len = 2; len <= 9; len++) {

//             for (int start = 1; start <= 10 - len; start++) {

//                 int num = 0;

//                 for (int d = start; d < start + len; d++) {
//                     num = num * 10 + d;
//                 }

//                 if (num >= low && num <= high)
//                     ans.push_back(num);
//             }
//         }

//         sort(ans.begin(), ans.end());

//         return ans;
//     }
// };


// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {

//         int low = 0;
//         int last = nums.size() - 1;

//         while(low <= last){
//             int mid = (low + last) / 2;
//             if(nums[mid] == target){
//                 return true;
//             }


//                if(nums[low] == nums[mid] && nums[mid] == nums[last]){
//                     low++;
//                    last--;
//                    }


//              // left half is sorted --//
//             else if(nums[low] <= nums[mid]){
//                    if(target < nums[mid] && target >= nums[low]){
//                     last = mid - 1;
//                    } else {
//                     low = mid + 1;
//                    }
//             } else{
//                 if(target > nums[mid] && target <= nums[last]){
//                     low = mid + 1;
//                 } else {
//                     last = mid - 1;
//                 }
//             }
//         }
//         
        
//     }
// };
  


///         ----------------------  anothete one leetcode 153 ---- huha easy peasy---------//

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int start = 0;
//         int end = nums.size() - 1;
//         int mn = INT_MAX; 
        

//         while(start <= end){
//             int mid = (start + end)/2;
//               if(nums[start] <= nums[end]){
//                 mn = min(mn, nums[start]);
//                 break;
//               }


//              if(nums[start] <= nums[mid]){
//                 mn = min(mn, nums[start]);
//                 start = mid + 1;
                
//             }else{
//                  if(nums[start] > nums[mid]){
//                     mn = min(mn, nums[mid]);
//                     end = mid - 1;
//                  }
//             }
//         }


//         return mn;
//     }
// };l


// leetcode daily my first contest 15 july 2026 huha i love this i just solved this withoout any help huuuuhu  i am so happy
// class Solution {
// public:
    

//     int gcdOfOddEvenSums(int n) {

//     int sumOdd = 0;
//         int SumEven = 0;
//         int total = n + n;

//         for(int i = 1; i<=total; i++){
//             if(i % 2 == 0){
//                 SumEven = i + SumEven;
//             }
//             else{
//                 sumOdd = sumOdd + i;
//             }
//         }

//         return gcd(sumOdd, SumEven);

//     }
// };


//----------------leetcode 1979 -----------//
// class Solution {
// public:
//     int gcd(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }

//     int findGCD(vector<int>& nums) {
//         int mn = *min_element(nums.begin(), nums.end());
//         int mx = *max_element(nums.begin(), nums.end());

//         return gcd(mn, mx);
//     }
// };



// #include <iostream>
// #include <vector>
// using namespace std;


//     class Node{
//         public:
//         int data;
//         Node* next;
    
//         Node(int val){
//            data = val;
//            next = NULL;
//         }
//     };


//     class List{
//         Node* Head;
//         Node* tail;
//         public:
//         List(){
//             Head = NULL;
//             tail = NULL;
//         }



//         void push_front(int val){
//             Node* newNode = new Node(val); //dynamic
//             // Node* newwNode(val); // static 
//             if(Head == NULL){
//                 Head = tail = newNode;

//             } else{
//                 newNode -> next = Head;
//                 Head = newNode;
//             }
//         }


//         void push_back(int val){
//             Node* newNode = new Node(val);

//             if(Head == NULL){
//                 Head = tail = newNode;
//             } else {
//                 tail->next = newNode;
//                 tail = newNode;
//             }

            
//         }

//         void printList(){
//             Node* temp = Head;

//             while(temp != NULL){
//                 cout << temp-> data << endl;
//                 temp = temp->next;
//             }

//         }
//     };



// int main(){
//     List ll;

//     ll.push_front(5);
//     ll.push_front(10);
//     ll.push_front(15);
//     ll.printList();
//     return 0;

// 



// class Solution {
// public:
//     string smallestSubsequence(string s) {
//         vector<int> last(26);

//         // Store last occurrence of every character
//         for (int i = 0; i < s.size(); i++)
//             last[s[i] - 'a'] = i;

//         vector<bool> inStack(26, false);
//         string st;

//         for (int i = 0; i < s.size(); i++) {
//             char ch = s[i];

//             // Skip if already included
//             if (inStack[ch - 'a'])
//                 continue;

//             while (!st.empty() &&
//                    st.back() > ch &&
//                    last[st.back() - 'a'] > i) {
//                 inStack[st.back() - 'a'] = false;
//                 st.pop_back();
//             }

//             st.push_back(ch);
//             inStack[ch - 'a'] = true;
//         }

//         return st;
//     }
// };





#include <iostream>
using namespace std;


struct Node
{
          /* data */

          int data;
          Node* next;

          Node(int val){
            data = val;
            next = NULL;
          }

};


class  List  {
       Node* head;
       Node* tail;

       List(){
        head = NULL;
        tail = NULL;
       }

       void push_front(){

       }

};





int main(){

}