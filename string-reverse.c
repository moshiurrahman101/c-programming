#include <stdio.h>

int main()
{
    char str1[30] = "Moshiur Rahman";
    char str2[30];
    
    int i=0, len=0,j;
    
    while(str1[i] !='\0'){
        i++;
        len++;
    }
    
    for(j=0, i=len-1; i>=0; i--,j++){
        str2[j] = str1[i];
    }
    
    str2[j]='\0';
    
    printf("Before = %s \n", str1);
    printf("After = %s \n", str2);
    return 0;
}