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




class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        // Find minimum and maximum indices
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        // Make minIndex the smaller index
        if (minIndex > maxIndex)
            swap(minIndex, maxIndex);

        // Option 1: Remove both from the front
        int front = maxIndex + 1;

        // Option 2: Remove both from the back
        int back = n - minIndex;

        // Option 3: Remove min from front and max from back
        int both = (minIndex + 1) + (n - maxIndex);

        return min({front, back, both});
    }
};