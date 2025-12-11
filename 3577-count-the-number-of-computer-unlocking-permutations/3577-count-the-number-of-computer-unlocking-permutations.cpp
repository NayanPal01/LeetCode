class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int M = 1e9+7;
        long long result = 1;
        int n = complexity.size();
        for(int i=1;i<n;i++){
            if(complexity[i]<=complexity[0]){
                return 0;
            }
            result = (result * i)%M;

        }
        return result;
    }
};