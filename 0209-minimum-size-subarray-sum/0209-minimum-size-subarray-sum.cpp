class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int minL = n;
        int sum = 0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                minL= min(minL,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return minL == n ? 0: minL;

    }
};