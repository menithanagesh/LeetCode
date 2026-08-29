#include<string.h>
bool isPalindrome(char* s) {
    
    int n = strlen(s);
    char* str = malloc(n+1 * sizeof(char));
    char* rev = malloc(n+1 * sizeof(char));
    int ind=0;
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<n;i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || s[i]>='0' && s[i]<='9'){
            str[ind++]=s[i];
            
        }
    }
    str[ind] = '\0';
    int j=0;
    for(int i=ind-1;i>=0;i--){
        rev[j++]=str[i];
    }
    rev[j]= '\0';
    if(strcmp(rev,str)==0){
        return true;
    }
    return false;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna