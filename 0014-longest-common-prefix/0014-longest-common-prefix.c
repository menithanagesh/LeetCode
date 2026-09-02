char* longestCommonPrefix(char** strs, int strsSize) {
    int i=0;
    int j=0;
    
    int ind =0;
    char* ans = malloc(200 * sizeof(char));
    while(strs[0][i]!='\0'){
        int count =0;
        for(j=0;j<strsSize;j++){
            if(strs[0][i] == strs[j][i]){
                count++;
            }
        }
        if(count == strsSize){
            ans[ind++] = strs[0][i];
            
        }
        else{
            break;
        }
        i++;
    }
    ans[ind] = '\0';
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna