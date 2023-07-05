// Count the sum of numbers in a string
// hiarjun.malhtora2002@gmail.com
// Ans --> 4   (2+0+0+2)

#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    int sum = 0;
    
   
    printf("Enter the string: ");
    gets(str);

    char *ptr = str;
    int k = strlen(str);
    
    // ONE WAY
    // for (int i= 0; str[i] != '\0'; i++){
    //     if ((str[i] >= '0') && (str[i] <= '9')){
            
    //         sum += (str[i] - '0'); // like if str[5] = 2   then 2 ki ascii value is 50 and 0 ki ascii value is 48 so sum mein 50-48 = 2 hua 

    //     }
    // }

    // OTHER WAY
    // for(int i=0; i<k; i++, ptr++){
    //     if ((*ptr >= '0') && (*ptr <= '9')){
    //         sum += (*ptr - '0');
    //     }
    // }


    // OTHER WAY
    while(*ptr!='\0'){
        if ((*ptr >= '0') && (*ptr <= '9')){
            sum += (*ptr - '0');
        }
        ptr++;
    }
    
    printf("Sum of all digits: %d", sum);
    return 0; 
}