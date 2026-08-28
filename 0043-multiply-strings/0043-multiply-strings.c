#include<stdlib.h>
#include<string.h>
char* multiply(char* num1, char* num2) {
    if(strcmp(num1,"0")==0 || strcmp(num2,"0")==0){
        char* ans = malloc(2);
        strcpy(ans,"0");
        return ans;
    }
    int m = strlen(num1);
    int n = strlen(num2);
    int* result = calloc(m+n, sizeof(int));
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int mul = (num1[i] - '0')*(num2[j] - '0');
            int p1= i+j;
            int p2= i+j+1;
            int sum = mul + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum/10;

        }
    }
    char* ans = malloc(n+m+1 * sizeof(char));
    int index =0;
    int start = 0;
    while(start<n+m-1 && result[start]==0){
        start++;
    }
    for(int i = start;i<n+m;i++){
        ans[index++] = result[i] + '0';
    }
    ans[index] = '\0';
    free(result);
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna