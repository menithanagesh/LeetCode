class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int top = 0;
        int left = 0;
        int bottom = matrix.length-1;
        int right = matrix[0].length-1;
        List<Integer> result = new ArrayList<>();
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                result.add(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++){
                result.add(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    result.add(matrix[j][left]);
                }
                left++;
            }

        }
        return result;
            
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna