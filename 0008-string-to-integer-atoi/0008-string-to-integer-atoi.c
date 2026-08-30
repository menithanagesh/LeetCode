#include<stdlib.h>
#include<string.h>
int myAtoi(char* s) {
    int start =0;
    int index =0;
    int n = strlen(s);
    char* str = malloc((n+1) * sizeof(char));
    while(s[start]==' '){
        start++;
    }
    int sign =1;
    if(s[start]=='-'){
        sign = -1;
        start++;
    }
    else if(s[start]=='+'){
        start++;
    }
    while(s[start]=='0'){
        start++;
    }
    while(s[start]>='0' && s[start]<='9'){
        str[index++]=s[start];
        start++;
    }
    str[index] = '\0';
    int num =0;
    for(int i =0;i<strlen(str);i++){
        int dig = str[i] - '0';
        if(num > (INT_MAX - dig)/10){
            return sign==1?INT_MAX:INT_MIN;
        }
        num = num*10 + dig;
    }
    return num*sign;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna