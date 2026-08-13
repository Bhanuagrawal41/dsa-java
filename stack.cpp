// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;

//         for (int i = 0; i < nums1.size(); i++) {
//             int greater = -1;

//             for (int j = 0; j < nums2.size(); j++) {
//                 if (nums2[j] == nums1[i]) {
//                     for (int k = j + 1; k < nums2.size(); k++) {
//                         if (nums2[k] > nums1[i]) {
//                             greater = nums2[k];
//                             break;
//                         }
//                     }
//                     break;
//                 }
//             }

//             ans.push_back(greater);
//         }

//         return ans;
//     }
// };
// solve the 496  using burute forccee approach noww moving forwared with the optimal approach


// using stack to solve the problem in O(n) time complexity






// #include<bits/stdc++.h>

// using namespace std;

// bool isdupicate(string str){
//             stack<char> st;
//            for(int i = 0; i < str.size(); i++)
//            {    char ch = str[i];
//                 if(ch != ')'){
//                     st.push(ch);
//                 }else{
//                     if(st.top() == '('){
//                         return true;
//                     }else{
//                         while(st.top() != '('){
//                             st.pop();
//                         }
//                         st.pop();
//                     }
//                 }
//            }
//            return false;
// }


// int main(){
//     string str = "((a=b))";
//     string str1 = "((a+b) + (c+d))";
//     cout << isdupicate(str) << endl;
//      cout << isdupicate(str1) << endl;
// }







// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         stack<int> st;
//         int n = heights.size();
//         int maxArea = 0;

//         for (int i = 0; i <= n; i++) {
//             while (!st.empty() && (i == n || heights[st.top()] > heights[i])) {
//                 int height = heights[st.top()];
//                 st.pop();

//                 int width;
//                 if (st.empty())
//                     width = i;
//                 else
//                     width = i - st.top() - 1;

//                 maxArea = max(maxArea, height * width);
//             }

//             st.push(i);
//         }

//         return maxArea;
//     }
// };


// class Solution {
// public:
//     bool stoneGame(vector<int>& piles) {
//         return true;
//     }
// };




// class Solution {
// public:
//     string stoneGameIII(vector<int>& stoneValue) {
//         int n = stoneValue.size();
//         vector<int> dp(4, 0);

//         for (int i = n - 1; i >= 0; i--) {
//             int best = INT_MIN;
//             int sum = 0;

//             for (int k = 0; k < 3 && i + k < n; k++) {
//                 sum += stoneValue[i + k];
//                 best = max(best, sum - dp[(i + k + 1) % 4]);
//             }

//             dp[i % 4] = best;
//         }

//         if (dp[0] > 0) return "Alice";
//         if (dp[0] < 0) return "Bob";
//         return "Tie";
//     }
// };