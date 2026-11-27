class Solution {
    public boolean isPalindrome(String s) {
        String pali = s;
        pali = pali.toLowerCase();
        pali = pali.replaceAll("[^a-z0-9]","");
        
        String rev = new StringBuilder(pali).reverse().toString();
        return (pali.equals(rev));
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna