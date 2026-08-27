double myPow(double x, int n) {
    double ans = 1;
    long long pow = n;
    int i=1;
    if(pow<0){
        x = 1/x;
        pow = -pow;
    }
    while(pow>0){
        if(pow%2!=0){
            ans = ans * x;
        }
        x = x*x;
        pow = pow/2;
    } 
    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna