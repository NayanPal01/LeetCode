class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        int i =0,j=0;
        while(j<nums.size()){
            if(abs((i-j)>k){
                st.remove(nums[i]);
                i++;
            })
            if(abs(i-j)<=k && st.find(nums[j])!=st.end()){
                return true;
            }else{
                st.insert(nums[j]);
            }
            j++;
        }
        return false;
    }
};