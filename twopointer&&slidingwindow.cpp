// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int count = 0;
//         int left = 0;
//          int count0 = 0;
        

//           for(int i = 0; i < nums.size(); i++){
            
           
//             if(nums[i] == 0){
//                 count0++;              
//             }
//             while(count0 > k){
//                 if(nums[left] == 0){
//                   count0--;
//                 }
//                 left++;
//             }
//             count = max(count, i - left + 1);

//           }
//           return count;
        
//     }
// };


// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
        
//         unordered_map<int, int> hash;
//         int first = 0;
//           int count = 0;
//           int ans = 0;
//         for(int i = 0; i < fruits.size(); i++){
//             if(hash[fruits[i]] == 0){
//                 count++;
//             }
//             hash[fruits[i]]++;
//             int var = fruits[first];
            
             
//             while(count > 2){
//                 hash[fruits[first]]--;
//                 if(hash[fruits[first]] == 0){
//                     count--;
//                 }
//                 first++;
            
               
                
//             }
//             ans = max(ans, i - first + 1);
          
           

           
//         }

//         return ans;
   
          

//     }
// };




// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         vector<int> freq(26, 0);

//         int left = 0;
//         int maxFreq = 0;
//         int ans = 0;

//         for (int right = 0; right < s.size(); right++) {
//             freq[s[right] - 'A']++;
//             maxFreq = max(maxFreq, freq[s[right] - 'A']);

//             while ((right - left + 1) - maxFreq > k) {
//                 freq[s[left] - 'A']--;
//                 left++;
//             }

//             ans = max(ans, right - left + 1);
//         }

//         return ans;
//     }
// };