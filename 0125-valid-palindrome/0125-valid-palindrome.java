class Solution {
    public boolean isPalindrome(String s) {
        int left=0;
        int right = s.length() - 1;
        s = s.toLowerCase();
        s = s.replaceAll("[^a-z0-9]","");
        while(left<right){
            if (s.charAt(left) != s.charAt(right)) {
                return false;
                
            }
            left++;
            right--;
        }
        return true;
    }
}