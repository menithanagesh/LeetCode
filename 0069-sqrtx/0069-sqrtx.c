int mySqrt(int x) {
    if( x==0){
        return 0;
    }
    int i = 1;
    while(i<=x/i){
        i++;
    }
    return i-1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna