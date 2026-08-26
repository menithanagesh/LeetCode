#include<string.h>
#include<stdlib.h>
char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    int n = strlen(a);
    int m = strlen(b);
    char* ans = malloc((n + m + 2) * sizeof(char));
    char* rev = malloc((n + m + 2) * sizeof(char));
    int x=0;
    while( i>=0 || j>=0 || carry){
        int sum = carry;
        if(i>=0){
            sum+= a[i--] - '0';
        }
        if(j>=0){
            sum+= b[j--] - '0';
        }
        ans[x] = (sum % 2) + '0';
        carry = sum / 2;
        x++;
    }
    ans[x] = '\0';
    int y=0;
    for(int k=x-1;k>=0;k--){
        rev[y] = ans[k];
        y++;
    }
    rev[y]='\0';
    return rev;


}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna