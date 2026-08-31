void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int start = nums1Size - n;
    int j=0;
    for(int i=start;i<nums1Size;i++){
        if(j<nums2Size){
            nums1[i]=nums2[j];
            j++;
        }
    }
    for(int i=0;i<(m+n)-1;i++){
        for(j=0;j<(m+n)-1-i;j++){
            if(nums1[j]>nums1[j+1]){
                int temp = nums1[j];
                nums1[j] = nums1[j+1];
                nums1[j+1] = temp;
            }
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna