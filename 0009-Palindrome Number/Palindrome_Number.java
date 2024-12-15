class Solution {
    public boolean isPalindrome(int x) {
        // if (x<0) return false;
        int rev = 0;
        int a= x;
        while (a >0){            
            rev = (rev * 10) + (a % 10);
            a /=10;
        }
        return x == rev;
       
    }
}