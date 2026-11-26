class Solution {
    public int arraySign(int[] nums) {
        int count=0;
        for(int num:nums){
            if(num==0){
                return 0;
            }
            if(num<0){
                count++;
            }
        }
        if(count%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }      
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna