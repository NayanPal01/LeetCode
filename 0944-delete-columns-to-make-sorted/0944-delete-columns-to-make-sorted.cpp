class Solution {
public:
    
    int minDeletionSize(vector<string>& strs) {
      int rows = strs.size();
      int cols = strs[0].size();
      int count = 0;
      for(int col = 0; col<cols;col++){
        bool isSorted = true;
        for(int row = 1; row<rows;row++){
            if(strs[row][col]<strs[row-1][col]){
                isSorted = false;
                break;
            }
        }
        if(!isSorted){
            count++;
        }
      }
      return count;
    }
};