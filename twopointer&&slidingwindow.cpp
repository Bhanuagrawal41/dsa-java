class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
         int count0 = 0;
        

          for(int i = 0; i < nums.size(); i++){
            
           
            if(nums[i] == 0){
                count0++;              
            }
            while(count0 > k){
                if(nums[left] == 0){
                  count0--;
                }
                left++;
            }
            count = max(count, i - left + 1);

          }
          return count;
        
    }
};