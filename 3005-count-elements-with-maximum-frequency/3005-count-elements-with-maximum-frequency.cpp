class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int num : nums) {
            mp[num]++;
        }
        
        
        int maxfreq=0;
        int mfreq=0;
        int result = 0;
        for(auto it:mp){
            
            maxfreq = max(maxfreq,it.second);
            

        }
        for(auto it:mp){
            if(maxfreq==it.second){
                result+=it.second;
            }
            
            

        }
        
        
        return result;
    }
};