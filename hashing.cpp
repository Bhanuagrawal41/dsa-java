// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i< n; i++){
//         cin >> arr[i];
//     }


//     int hash[13] = {0};
//     for(int i = 0; i<n; i++){
//         hash[arr[i]] += 1;
//     }


//     int q;
//     cin >> q;
// //     while(q--){
// //         int numbers;
// //         cin >> numbers;
// //         // fetch
// //     }

// //     return 0;
// // }


// class Solution {
// public:
//     vector<int> countDistinct(vector<int>& arr, int k) {

//         int n = arr.size();
//         vector<int> ans;

//         int hash[1000001] = {0};
//         int distinct = 0;

//         for (int i = 0; i < n; i++) {

//             // Add current element
//             hash[arr[i]]++;

//             if (hash[arr[i]] == 1)
//                 distinct++;

//             // Once window becomes bigger than k,
//             // remove the element leaving it
//             if (i >= k) {

//                 int outgoing = arr[i - k];

//                 hash[outgoing]--;

//                 if (hash[outgoing] == 0)
//                     distinct--;
//             }

//             // Window has exactly k elements
//             if (i >= k - 1) {
//                 ans.push_back(distinct);
//             }
//         }

//         return ans;
//     }
// // };


//quesiton solved now learning hashing 



// leet code 217 easy question


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
        
//         int hash[1000001] = {0};

//         for(int i = 0; i<nums.size(); i++){
//             hash[nums[i]]++;

//             if(hash[nums[i]] > 1){
//                 return true;
//             }
//         }
//         return false;
        
//     }
// };

// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) {
//         unordered_map<int, int> hash;
//         int ans = 0;
        
//         int last = 0;

//         for(int i = 0; i<nums.size(); i++ ){
//             hash[nums[i]]++;
            
//             while(hash[nums[i]] > k){
//                 hash[nums[last]]--;
//                 last++;
//             }


 
           
              
//              ans = max(ans, i - last + 1);
//         }
//         return ans;

//     }
// };