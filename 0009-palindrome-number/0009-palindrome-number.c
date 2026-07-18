char* strrev(char* s){
    int n = strlen(s);
    char* rev = (char *)malloc(n+1);
    int j = 0;
    for(int i=n-1;i>=0;i--){
        rev[j] = s[i];
        j++;
    }
    rev[j]='\0';
    return rev;

}
bool isPalindrome(int x) {
   char str[10000];
   snprintf(str, sizeof(str), "%d",x);
   char* rev = strrev(str);
   if(strcmp(str,rev)==0){
    return true;
   } 
   else{
    return false;
   }
}