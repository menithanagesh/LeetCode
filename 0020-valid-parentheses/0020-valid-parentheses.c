bool isValid(char* s) {
    char stack[10005];
    int top = -1;
    for(int i=0;s[i]!='\0';i++){
        char ch = s[i];
    
        if(ch == '(' || ch == '{' || ch == '['){
            stack[++top] = ch;
        }
        else{
            if(top == -1){
                return false;
            }
            char topChar = stack[top];
            if((ch == ')' && topChar == '(') || (ch == '}' && topChar == '{') || (ch == ']' && topChar == '[')){
                top--;
            }
            else{
                return false;
            }

        }
    }
    return top == -1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna