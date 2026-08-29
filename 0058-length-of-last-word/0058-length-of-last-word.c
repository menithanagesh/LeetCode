#include<string.h>
int lengthOfLastWord(char* s) {
    int n = strlen(s)-1;
    int i=0;
    int start = n;
    while(start>=0 && s[start]==' '){
        start--;
    }
    while(start>=0 && s[start]!=' '){
        i++;
        start--;
    }
    return i;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna