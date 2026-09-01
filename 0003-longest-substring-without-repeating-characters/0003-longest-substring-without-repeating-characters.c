int lengthOfLongestSubstring(char* s) {
    int left =0;
    int right =0;
    int seen[256];
    int maxLen = 0;
    for(int i=0;i<256;i++){
        seen[i] = -1;
    }
    for(right=0;s[right]!='\0';right++){
        char c = s[right];
        if(seen[c]>=left){
            left = seen[c] + 1;
        }
        seen[c] = right;
        int curLen = right - left + 1;
        if(curLen > maxLen){
            maxLen = curLen;
        }
    }
    return maxLen;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna