class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>result;
        int n = nums.size();
        for(int &num: nums){
            mp[num]++;
        }
        sort(nums.begin(),nums.end());
        for(auto &it:mp){
            if(it.second>1){
                result.push_back(it.first);
            }
        }
        return result;
        
    }
};