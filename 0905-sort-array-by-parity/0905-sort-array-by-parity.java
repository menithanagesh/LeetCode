class Solution {
    public int[] sortArrayByParity(int[] nums) {
        for(int i=0;i<nums.length -1 ;i++){
            for(int j=0;j<nums.length -1-i;j++){
                if(nums[j]%2!=0){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        return nums;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna