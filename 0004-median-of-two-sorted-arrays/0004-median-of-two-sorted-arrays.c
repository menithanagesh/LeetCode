double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double med;
    int* new = malloc((nums1Size+nums2Size)* sizeof(int));
    int ind = 0;
    for(int i=0;i<nums1Size;i++){
        new[ind++] = nums1[i];
    }
    for(int j =0;j<nums2Size;j++){
        new[ind++] = nums2[j];
    }
    for(int i =0;i<ind-1;i++){
        for(int j=0;j<ind-1-i;j++){
            if(new[j]>new[j+1]){
                int temp = new[j];
                new[j] = new[j+1];
                new[j+1] = temp;
            }
        }
    }
    if(ind%2 == 0){
        int mid = ind/2;
        med = (new[mid]+new[mid-1])/2.0;
        return med;
    }
    int mid = ind/2;
    med = new[mid];
    return med;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna