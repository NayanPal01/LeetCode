class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        priority_queue<int,vector<int>,greater<int>>leftheap;
        priority_queue<int,vector<int>,greater<int>>rightheap;
        int hired=0;
        long long result=0;
        int i=0;
        int j=n-1;
        while(hired<k){
            while(leftheap.size()<candidates && i<=j){
                leftheap.push(costs[i]);
                i++;
            }
            while(rightheap.size()<candidates && j>=i){
                rightheap.push(costs[j]);
                j--;
            }
            int min_pq = leftheap.size()>0?leftheap.top():INT_MAX;
            int min_pq2 = rightheap.size()>0?rightheap.top():INT_MAX;
            if(min_pq<min_pq2){
                result+=min_pq;leftheap.pop();
            }else{
                result+=min_pq2;rightheap.pop();
            }
            hired++;
            
        }
        return result;
        
        
        
    }
};