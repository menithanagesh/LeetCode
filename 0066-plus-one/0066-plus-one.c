/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i=digitsSize-1;
    int* ret = (int *)malloc(digitsSize*sizeof(int));
    for(int j=0;j<digitsSize;j++){
        ret[j]=digits[j];
    }
    
    
    while(i>=0){
        
        if(ret[i]<9){
            ret[i]+=1;
            break;
        }
        else{
            ret[i]=0;
            i=i-1;
        }
    }
    if(i<0){
        int* newret = (int *)malloc((digitsSize+1)*sizeof(int));
        newret[0]=1;
        for(int k=1;k<=digitsSize;k++){
            newret[k]=0;
            
        }
        free(ret);
        *returnSize = digitsSize+1;
        return newret;
    }
    
    *returnSize = digitsSize;
    return ret;

}