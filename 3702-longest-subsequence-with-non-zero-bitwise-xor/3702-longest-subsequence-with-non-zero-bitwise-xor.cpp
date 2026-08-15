class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            ans ^= nums[i];
           
        }
         if(ans != 0)
            return nums.size();

        for(int x : nums) {
            if(x != 0)
                return nums.size() - 1;
        }

        return 0;
    }
};