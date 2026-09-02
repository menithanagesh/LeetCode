int firstMissingPositive(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        while(nums[i]>=1 && nums[i]<=numsSize && nums[nums[i]-1]!=nums[i]){
            int correct = nums[i] - 1;
            int temp = nums[i];
            nums[i] = nums[correct];
            nums[correct] = temp;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i] != i+1){
            return i+1;
        }
    }
    return numsSize+1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna