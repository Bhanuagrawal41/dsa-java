// #include <iostream>
// using namespace std;

// struct Node
// {
//    int data;
//     /* data */
//     Node* next;
//     Node(int val){
//       data = val;
//       next = NULL;
//     }

// };

// class list
// {      
//     public:
//       Node* head;
//       Node* tail;
//      public:
//       list(){
//         head = NULL;
//         tail = NULL;
//       }

//      void push_front(int val){
//         Node* newNode = new Node(val);
             
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head = newNode;
//         }


//      }

//      void push_back(int val){
//         Node* newNode = new Node(val);
//         if (head == NULL){
//             head = newNode;
//             tail = newNode;

//         } else {
//             tail -> next = newNode;
//             tail = newNode;
//         }
//      }

//      void print_list(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp-> data << endl;
//             temp = temp->next;
//         }
//      }

//      void push_middle(int val, int posi){
//         Node* newNode = new Node(val);
//         Node* temp = head;
//         if(head == nullptr){
//             head = newNode;
//             tail = newNode;
//         }else{
//             for(int i = 0; i<posi-1; i++){
//                 temp = temp -> next;
//             }
//             newNode->next = temp->next;
//             temp-> next = newNode;
//         }
//      }

//      Node* remove_head(Node* head){
//         if (head == nullptr) return head;
          
//         Node* temp = head;
//         head = head -> next;
//         delete temp;
//         return head;

//      }

//      Node* remove_tail(Node* head){
//         if (head == nullptr || head->next == NULL) return NULL;

//         Node* temp = head;
//         while(temp -> next -> next != nullptr){
//             temp = temp -> next;

//         }
//         delete temp->next;
//         temp->next = NULL;
//         return head;


//      }
//         int getsize(){
//             Node* temp = head;
//          int count = 0;

//          while(temp != nullptr){
//             count += 1;
//             temp = temp -> next;

//          }
//          return count;
//         }

//      Node* remove_nth(int nth){
//         int size = getsize();
           
//          Node* prev = head;


//          for(int i = 1; i< size - nth; i++)
//           {
//             prev = prev->next;
//           }

//           Node* toDel = prev->next;
//           cout << "going to delete" << toDel -> data << endl;

//           prev -> next = prev -> next -> next;
         

//      }

//      void remove_cycle(){
//         Node* slow = head;
//         Node* fast = head;

//         while(fast != nullptr && fast->next != nullptr){
//             slow = slow -> next;
//             fast = fast -> next -> next;
//             if(slow == fast){
//                 cout << "cycle exist sire: " << endl;
//                 break;
//             }
//         }
//           if(fast == nullptr || fast->next == nullptr){
//             cout<< "no cycle" << endl;
//             return;
//           }
//         slow = head;
//         if(slow == fast){
//             while(fast -> next != slow){
//                 fast = fast -> next;
//             }
//             fast -> next = nullptr;
//         }else{
          
//         while(slow != fast->next){
//             slow = slow -> next;
        
//             fast = fast -> next;
//         }
//         fast->next = nullptr;
//     }

//      }
     


// };




// int main(){
//          list ll;
//       ll.push_front(1);
//       ll.push_front(2);
//       ll.push_front(3);
//       ll.push_front(4);
//       ll.push_front(5);
//       ll.push_front(6);
//       ll.tail->next = ll.head;
//       ll.remove_cycle();
//       ll.print_list();

      


       
// }


/// ------------leet code 707 ----------??///

// struct Node{
//     int data;
//     Node* next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };




// class MyLinkedList {

//     private:
//     Node* Head;
//     Node* Tail;
//     int size;
// public:
//     MyLinkedList() {
//         Head = NULL;
//         Tail = NULL;
//          size = 0;
//     }
    
//     int get(int index) {
//         if(index < 0 || index >= size ){
//             return -1;
//         }

//         Node* temp = Head;

//         for(int i = 0; i<index; i++){
//             temp = temp -> next;
//         }

//         return temp->data;
        
//     }
    
//     void addAtHead(int val) {
//         Node* obj = new Node(val);
//         if(Head == NULL){
//             Head = obj;
//             Tail = obj;
//         } else {
//             obj->next = Head;
//             Head = obj;
//         }
//         size++;
        
//     }
    
//     void addAtTail(int val) {
//         Node* obj = new Node(val);
//         if(Head == NULL){
//             Head = Tail = obj;
//         }else{
//             Node* temp = Head;
//             while(temp->next != NULL){
//                 temp = temp -> next;
//             }
//           Tail->next = obj;
//             Tail = obj;
              

//         }
//         size++;
        
        
//     }
    
//     void addAtIndex(int index, int val) {
//           if (index < 0 || index > size)
//             return;

//         if (index == 0) {
//             addAtHead(val);
//             return;
//         }

//         if (index == size) {
//             addAtTail(val);
//             return;
//         }



//         Node* obj = new Node(val);
//         if(Head == NULL){
//             Head = Tail = obj;
//         } else{
//             Node* temp = Head;
//             for(int i = 0; i< index-1; i++){
//                 temp = temp -> next;
//             }
//             obj->next = temp-> next;
//             temp->next = obj;
//             size++;
//         }
        
//     }
    
//     void deleteAtIndex(int index) {
//          if (index < 0 || index >= size)
//             return;

//         // Delete head
//         if (index == 0) {
//             Node* del = Head;
//             Head = Head->next;

//             if (size == 1)
//                 Tail = nullptr;

//             delete del;
//             size--;
//             return;
//         }

//         Node* temp = Head;

//         for (int i = 0; i < index - 1; i++) {
//             temp = temp->next;
//         }

//         Node* del = temp->next;

//         temp->next = del->next;

//         if (del == Tail)
//             Tail = temp;

//         delete del;
//         size--;
//     }
// };

// /**
//  * Your MyLinkedList object will be instantiated and called as such:
//  * MyLinkedList* obj = new MyLinkedList();
//  * int param_1 = obj->get(index);
//  * obj->addAtHead(val);
//  * obj->addAtTail(val);
//  * obj->addAtIndex(index,val);
//  * obj->deleteAtIndex(index);
//  */






// class Solution {
// public:
//     vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
//         int n = s.size();
//         long long global_ones = 0;
//         for (char c : s) if (c == '1') global_ones++;

//         struct Block { char c; int a, b; };
//         vector<Block> blocks;
//         int i = 0;
//         while (i < n) {
//             int j = i;
//             while (j < n && s[j] == s[i]) j++;
//             blocks.push_back({s[i], i, j - 1});
//             i = j;
//         }
//         int m = blocks.size();

//         struct Cand { int a, b, L0, R0, Z, W; };
//         vector<Cand> cands;
//         for (int bi = 0; bi < m; bi++) {
//             if (blocks[bi].c != '1') continue;
//             if (bi == 0 || bi == m - 1) continue;
//             int a = blocks[bi].a, b = blocks[bi].b;
//             int L0 = blocks[bi - 1].b - blocks[bi - 1].a + 1;
//             int R0 = blocks[bi + 1].b - blocks[bi + 1].a + 1;
//             int Z = a - L0;
//             int W = b + R0;
//             cands.push_back({a, b, L0, R0, Z, W});
//         }
//         int K = cands.size();

//         const long long NEG = -1000000000LL;
//         vector<long long> leftVal(K, NEG);

//         vector<vector<int>> eventsAtL(n);
//         for (int idx = 0; idx < K; idx++) {
//             int a = cands[idx].a, Z = cands[idx].Z;
//             for (int l = a - 1; l >= Z; l--) eventsAtL[l].push_back(idx);
//         }

//         // Fenwick max (prefix), size n
//         vector<long long> fenwA(n + 2, NEG);
//         auto updateA = [&](int pos, long long val) {
//             for (int x = pos + 1; x <= n; x += x & (-x)) fenwA[x] = max(fenwA[x], val);
//         };
//         auto queryA = [&](int pos) -> long long {
//             long long res = NEG;
//             for (int x = pos + 1; x > 0; x -= x & (-x)) res = max(res, fenwA[x]);
//             return res;
//         };

//         // Segment tree: range chmax update, point query
//         vector<long long> segB(4 * max(n, 1), NEG);

//         std::function<void(int,int,int,int,int,long long)> updateRangeB =
//         [&](int node, int nl, int nr, int ql, int qr, long long val) {
//             if (qr < nl || nr < ql) return;
//             if (ql <= nl && nr <= qr) { segB[node] = max(segB[node], val); return; }
//             int mid = (nl + nr) / 2;
//             updateRangeB(2*node, nl, mid, ql, qr, val);
//             updateRangeB(2*node+1, mid+1, nr, ql, qr, val);
//         };
//         std::function<long long(int,int,int,int)> queryPointB =
//         [&](int node, int nl, int nr, int pos) -> long long {
//             if (nl == nr) return segB[node];
//             int mid = (nl + nr) / 2;
//             long long res = (pos <= mid) ? queryPointB(2*node, nl, mid, pos)
//                                           : queryPointB(2*node+1, mid+1, nr, pos);
//             return max(res, segB[node]);
//         };

//         int q = queries.size();
//         vector<vector<pair<int,int>>> queriesAtL(n);
//         for (int qi = 0; qi < q; qi++) {
//             int l = queries[qi][0], r = queries[qi][1];
//             queriesAtL[l].push_back({r, qi});
//         }

//         vector<long long> ans(q, 0);

//         for (int l = n - 1; l >= 0; l--) {
//             for (int idx : eventsAtL[l]) {
//                 int a = cands[idx].a;
//                 long long newVal = a - l;
//                 leftVal[idx] = newVal;
//                 long long keyA = newVal + cands[idx].R0;
//                 updateA(cands[idx].W, keyA);
//                 long long keyB = newVal - cands[idx].b;
//                 int lo = cands[idx].b + 1, hi = cands[idx].W;
//                 if (hi > n - 1) hi = n - 1;
//                 if (lo <= hi) updateRangeB(1, 0, n - 1, lo, hi, keyB);
//             }
//             for (auto& pr : queriesAtL[l]) {
//                 int r = pr.first, qi = pr.second;
//                 long long caseA = (r - 1 >= 0) ? queryA(r - 1) : NEG;
//                 long long caseB = NEG;
//                 if (n > 0) {
//                     long long v = queryPointB(1, 0, n - 1, r);
//                     if (v > NEG / 2) caseB = v + r;
//                 }
//                 long long gain = max(0LL, max(caseA, caseB));
//                 ans[qi] = global_ones + gain;
//             }
//         }

//         vector<int> result(q);
//         for (int idx = 0; idx < q; idx++) result[idx] = (int)ans[idx];
//         return result;
//     }
// };




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         // ListNode* prev = nullptr;
//         // ListNode* curr = head;

//         // while(curr != nullptr){
//         //     ListNode* next = curr->next;
//         //     curr->next = prev;
//         //     prev = curr;
//         //     curr = next;
//         // }
//         // return prev;


//         // base case

//         if(head == nullptr || head -> next == nullptr){
//             return head;
//         }



        
//     }
// };






/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//       ListNode* slow = head;
//       ListNode* fast = head;

//       while(fast != nullptr && fast -> next != nullptr){
//         slow = slow->next;
//         fast = fast -> next -> next;
//         if(slow == fast ){
//             return true;
//         }
//       }
//       return false;
//     }
// };



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;


//         while(fast != nullptr && fast->next != nullptr){
//             slow = slow -> next;
//             fast = fast->next ->next;
//             if(slow == fast){
//                 break;
//             }



//         }
//         slow = head;

//         if(fast == nullptr || fast -> next == nullptr)
//               {
//               return NULL;
//               }
//         while(slow != fast){
//             slow = slow->next;
//             fast = fast -> next;

//         }
//         return slow;

//     }
// };




// leet code ptod-----///


// class Solution {
// public:
//     int uniqueXorTriplets(vector<int>& nums) {
//         int n = nums.size();

//         if (n < 3)
//             return n;

//         int bits = 32 - __builtin_clz(n);
//         return 1 << bits;
//     }
// };



// #include <iostream>
// #include <list>
// #include <iterator>
// using namespace std;



// void print_list(list<int> ll){
//     list<int>::iterator itr;
//     for(itr = ll.begin(); itr != ll.end(); itr++){
//         cout << *itr << endl;
//     }
//     cout << "null" << endl;
// }

// int main(){
//     list<int> ll;

//     ll.push_front(2);
//     ll.push_front(1);

//     ll.push_back(3);
//     ll.push_back(4);
//     print_list(ll);
//     cout << ll.size()<< endl;

//     cout << "head : " << ll.front() << endl;
//     cout << "tail : " << ll.back() << endl;

//     return 0;

    
// }




// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
// //  */
// // class Solution {
// // public:
// //     ListNode* deleteMiddle(ListNode* head) {

// //         ListNode* slow = head;
// //         ListNode* fast = head;
// //         ListNode* prev = head;

// //         while(fast != nullptr && fast -> next != nullptr){
// //             prev = slow;
// //             slow = slow -> next;
// //             fast = fast -> next -> next;
// //         }
// //         if(head->next == nullptr){
// //             return NULL;
// //         }
// //         prev -> next = slow -> next;

// //         return head;


        
// //     }
// // };
// //160. Intersection of Two Linked Lists

// // class Solution {
// // public:
// //     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
// //         ListNode* temp1 = headA;
// //         ListNode* temp2 = headB;

// //         while(temp1 != temp2){
// //             temp1 = (temp1 == nullptr)? headB : temp1 ->next;
// //             temp2 = (temp2 == nullptr)?  headA : temp2->next;
// //         }

// //         return temp1;
        
// //     }
// // };


// // leetcode ptod -- easy peasy man 
// class Solution {
// public:
//     int maxProduct(int n) {
//         int first= 0;
//         int second = 0;

//         while(n >0){



//            int dig = n % 10;
//             if(dig > first){
//                 second = first;
//                 first = dig;
//             } else if(dig > second) {
//                 second = dig;
//             }
//             n = n / 10;
           
//         }

//         return first * second;
//     }
// };

// class Solution {
// public:
//     vector<int> findMissingElements(vector<int>& nums) {
//         int mn = INT_MAX;
//         int mx = INT_MIN;
//         unordered_set<int> st;

//         for(int i = 0; i < nums.size(); i++){


//             mn = min(mn, nums[i]);
//             mx = max(mx, nums[i]);

//             st.insert(nums[i]);

            
//         }

//         vector<int> ans;

//         for(int j = mn;  j <= mx; j++){
//             if(st.find(j) == st.end()){
//                ans.push_back(j);
//             }
              
//         }

//         return ans;
        
//     }
// };