// #include <iostream>
// #include <vector>
// using namespace std;
// // create sstack using vector -----//
// class Stack{
//     vector<int> vec;
//    public:
//    void push(int val){

//         vec.push_back(val);
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "stack is empty" << endl;
//             return;
//         }
//         vec.pop_back();
//     }

//     int top(){
//         if(isEmpty()){
//             cout << "stack is empty" << endl;
//             return 0;
//         }
//         int lastindex = vec.size() - 1;
//         return vec[lastindex];
//     }

//     bool isEmpty() {
//         return vec.size() == 0;
//     }
// };



// int main(){
//     Stack s;
//     s.push(3);
//     s.push(5);
//     s.push(6);
//     s.push(7);

//     while(!s.isEmpty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }


// implementing template class to make the code more usable and adapadatble according too the diffrent data types---??


// #include <iostream>
// #include <vector>
// using namespace std;
// // create sstack using vector -----//
// template<class T>
// class Stack{
//     vector<T> vec;
//    public:
//    void push(int T){

//         vec.push_back(val);
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "stack is empty" << endl;
//             return;
//         }
//         vec.pop_back();
//     }

//     T top(){
//         // if(isEmpty()){
//         //     cout << "stack is empty" << endl;
//         //     return 0;
//         // }
//         int lastindex = vec.size() - 1;
//         return vec[lastindex];
//     }

//     bool isEmpty() {
//         return vec.size() == 0;
//     }
// };



// int main(){
//     Stack<int> s;  // here you can change the type of the stack using this u can change to char adn other data types according to the needs
//     s.push(3);
//     s.push(5);
//     s.push(6);
//     s.push(7);

//     while(!s.isEmpty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }



//this ptod is crazy logic bro i mean simple but i cannot think about it in the first time lol


// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {



//         sort(nums.begin(), nums.end()); 
//         int n = nums.size();
//         //  int prod = INT_MIN;
//         //  int last = nums.size() - 1;
//         //  int count = 0;
         
//         // for(int i = 0; i < last; i++){
//         //     if()
//         //     prod = prod * nums[last];
        

//         // }
//         int product1 = nums[n-1]* nums[n-2]* nums[n-3];
//         int product2 = nums[0]* nums[1]* nums[n-1];

        
//         return max(product1, product2);
//     }
// };
// stack implementation using linked list

// #include <iostream>

// using namespace std;

//  struct Node{
//     int data;
//     Node* next;
//  public:
//     Node(int val){
//         data = val;
//         next = nullptr;
//     }
// };

// class Stack{
//       Node* head;
      

//     public:
//     Stack(){
//         head = NULL;
//       }
//       void push(int val){
//         Node* newnode = new Node(val);
//         if(head == nullptr){
//             head  = newnode;
//         } else{
//             newnode -> next = head;
//             head  = newnode;
//         }
//       }

//       void pop(){
//              if(head == nullptr){
//                 cout << "stack is empty son" << endl;
//              } 
//              else{
//                 Node* temp = head;
//                 head = head -> next;
//                 delete temp;
//              }


//       }

//       int top(){
//           if(head == nullptr){
//         cout<<"Stack Empty\n";
//         return -1;
//     }
//         return head->data;
//       }


//       bool isEmpty(){

//             return head == NULL;
        
//       }



// };



// int main(){
//     Stack s;
//        s.push(3);
//        s.push(2);
//        s.push(1);

//        while(!s.isEmpty()){
//         cout << s.top() << endl;
//         s.pop();
//        }

//        cout << endl;
//        return 0;
// }




// #include <iostream>
// #include <stack>
// using namespace std;
  
// void pushlast( stack<int> &s, int val){
//      if(s.empty()){
//         s.push(val);
//         return;
//      }

//      int temp = s.top();
//      s.pop();
//      pushlast(s, val);
//      s.push(temp);




// }




// int main(){
//     stack<char> s;
//     string love = "akihsir";

//       for(int i = 0; i<love.size(); i++){
//         s.push(love[i]);
//       }


//     // pushlast(s, 4);;
//    cout << "your love is : ";
//     while(! s.empty()){
//         cout << s.top();
//         s.pop();
//     }
// }







// #include <iostream>
// #include <stack>
// using namespace std;

// void pushAtBottom(stack<int> &s, int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtBottom(s, val);

//     s.push(temp);
// }
// void reverse(stack<int> &s){
//     if(s.empty()){
//         return;
//     }


//     int temp = s.top();
//     s.pop();
//     reverse(s);

    
//        pushAtBottom(s, temp);
// }

// int main(){

//     stack<int> s;
//      s.push(3);
//      s.push(2);
//      s.push(1);
//      reverse(s);

//      while(!s.empty()){
//         cout << s.top() << endl;
//         s.pop();
//      }


// }


// class StockSpanner {
// public:
//     stack<pair<int, int>> st;
//     StockSpanner() {
        
//     }
    
//     int next(int price) {
//         int span = 1;
//         while(!st.empty() && st.top().first <= price){
//             span = st.top().second + span;
//             st.pop();
//         }
//         st.push({price, span});
//         return span;
//     }
// };

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */






//  class Solution {
// public:
//     const int MAX = 1000001;

//     int nCk(int n, int k) {
//         k = min(k, n - k);
//         long long res = 1;

//         for (int i = 1; i <= k; i++) {
//             res = res * (n - i + 1) / i;
//             if (res >= MAX)
//                 return MAX;
//         }

//         return (int)res;
//     }

//     int countWays(vector<int>& cnt) {
//         int total = 0;
//         for (int x : cnt)
//             total += x;

//         long long ans = 1;

//         for (int x : cnt) {
//             ans *= nCk(total, x);
//             if (ans >= MAX)
//                 return MAX;
//             total -= x;
//         }

//         return (int)ans;
//     }

//     string smallestPalindrome(string s, int k) {
//         vector<int> freq(26, 0);

//         for (char c : s)
//             freq[c - 'a']++;

//         vector<int> half(26, 0);
//         string mid = "";

//         for (int i = 0; i < 26; i++) {
//             half[i] = freq[i] / 2;
//             if (freq[i] % 2)
//                 mid.push_back(char('a' + i));
//         }

//         if (countWays(half) < k)
//             return "";

//         string left = "";
//         int len = 0;
//         for (int x : half)
//             len += x;

//         while (len--) {
//             for (int c = 0; c < 26; c++) {
//                 if (half[c] == 0)
//                     continue;

//                 half[c]--;

//                 int ways = countWays(half);

//                 if (ways >= k) {
//                     left.push_back(char('a' + c));
//                     break;
//                 }

//                 k -= ways;
//                 half[c]++;
//             }
//         }

//         string right = left;
//         reverse(right.begin(), right.end());

//         return left + mid + right;
//     }
// }; 
// hardest ptod i have ever solved took 7 hours to solve this one dog :""  lol 




 class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);

        stack<int> st;   // stores indices

        for (int i = 0; i < n; i++) {

            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int prevIndex = st.top();
                st.pop();

                ans[prevIndex] = i - prevIndex;
            }

            st.push(i);
        }

        return ans;
    }
};
// leet code 739 solved yeepii easy peasy


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);

        stack<int> st;   // stores indices

        for (int i = 0; i < n; i++) {

            while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {

                int prevIndex = st.top();
                st.pop();

                ans[prevIndex] = i - prevIndex;
            }

            st.push(i);
        }

        return ans;
    }
};