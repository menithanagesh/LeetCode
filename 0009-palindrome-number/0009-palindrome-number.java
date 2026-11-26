class Solution {
    public boolean isPalindrome(int x) {
        int pali = x;
        int rev=0;
        if(x>=0){
            while(x!=0){
            int digit = x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        }
        
        if(pali==rev){
            return true;
        }
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna