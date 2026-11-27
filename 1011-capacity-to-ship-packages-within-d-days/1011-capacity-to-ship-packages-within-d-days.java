class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int left =0;
        for(int i:weights){
            left = Math.max(left,i);
        }
        int right = 0;
        for(int i:weights){
            right = right+i;
        }
        int cap = right;
        while(left <=right){
            int mid = left + (right-left)/2;
            int totalDays=1;
            int currentLoad =0;
            
            for(int w:weights){
                if(currentLoad + w <= mid){
                    currentLoad+= w;
                }
                else{
                    totalDays++;
                    currentLoad = w;
                }
            }
            if(totalDays<=days){
                cap = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return cap;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna