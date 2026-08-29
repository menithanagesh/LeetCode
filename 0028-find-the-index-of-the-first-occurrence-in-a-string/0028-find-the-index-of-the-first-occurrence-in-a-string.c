#include<string.h>
int strStr(char* haystack, char* needle) {
    int m = strlen(haystack);
    int n = strlen(needle);
    int i =0;
    int j =0;
    for(i =0;i<=m-n;i++){
        for(j=0;j<n;j++){
            if(haystack[i+j]!=needle[j]){
                break;
    
            }
        }
        if(j==n){
            return i;
        }
    }
    return -1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna