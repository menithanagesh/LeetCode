/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize =2;
    int* ans = malloc((*returnSize) * sizeof(int));
    ans[0]=-1;
    ans[1]=-1;
    int left =0;
    int right = numsSize -1;
    while(left<=right){
        int mid = left + (right-left) / 2;
        if(nums[mid]==target){
            ans[0]=mid;
            right = mid-1;
        }
        else if(nums[mid]>target){
            right = mid-1;
        }
        else{
            left=mid+1;
        }
    }
    left = 0;
    right = numsSize-1;
    while(left<=right){
        int mid = left + (right-left) / 2;
        if(nums[mid]==target){
            ans[1]=mid;
            left = mid+1;
        }
        else if(nums[mid]>target){
            right = mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna