class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int right =0;
        int left =1;
        for(int i:piles){
            right = Math.max(right,i);
        }
        int speed = right;
        while(left<=right){
            int mid = left+(right-left)/2;
            long totalHours =0;
            for(int b:piles){
                totalHours+=(b+mid-1L)/mid;
            }
            if(totalHours<=h){
                speed=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }
        return speed;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna