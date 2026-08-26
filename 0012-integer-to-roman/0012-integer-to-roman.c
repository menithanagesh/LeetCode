#include<string.h>
#include<stdlib.h>
char* intToRoman(int num) {
  char* roman = malloc(1000 * sizeof(char));
  roman[0] = '\0';
  int thousands = num/1000;
  switch(thousands){
    case 1: strcat(roman,"M"); break;
    case 2: strcat(roman,"MM"); break;
    case 3: strcat(roman,"MMM"); break;
  }
  int hundreds = (num/100)%10;
  switch(hundreds){
    case 1: strcat(roman,"C");break;
    case 2: strcat(roman,"CC");break;
    case 3: strcat(roman,"CCC");break;
    case 4: strcat(roman,"CD");break;
    case 5: strcat(roman,"D");break;
    case 6: strcat(roman,"DC");break;
    case 7: strcat(roman,"DCC");break;
    case 8: strcat(roman,"DCCC");break;
    case 9: strcat(roman,"CM");break;
  }
  int tens = (num/10)%10;
  switch(tens){
    case 1: strcat(roman,"X");break;
    case 2: strcat(roman,"XX");break;
    case 3: strcat(roman,"XXX");break;
    case 4: strcat(roman,"XL");break;
    case 5: strcat(roman,"L");break;
    case 6: strcat(roman,"LX");break;
    case 7: strcat(roman,"LXX");break;
    case 8: strcat(roman,"LXXX");break;
    case 9: strcat(roman,"XC");break;
  }
  int units = num % 10;
  switch(units){
    case 1: strcat(roman,"I");break;
    case 2: strcat(roman,"II");break;
    case 3: strcat(roman,"III");break;
    case 4: strcat(roman,"IV");break;
    case 5: strcat(roman,"V");break;
    case 6: strcat(roman,"VI");break;
    case 7: strcat(roman,"VII");break;
    case 8: strcat(roman,"VIII");break;
    case 9: strcat(roman,"IX");break;
  }
return roman;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna