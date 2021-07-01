#include <stdio.h>
#include <string.h>


int main() {
    char s[100];
    int i=0,j;
    printf("Enter your String: ");
    gets(s);
    for(j=0;s[j]!='\0';j++){
        if(s[j]=='0'|| s[j]=='1' || s[j]=='2'||s[j]=='3'||s[j]=='4'||s[j]=='5'||s[j]=='6'||s[j]=='7'||s[j]=='8'||s[j]=='9')
        i++;
    }
printf("\nNumber of digits in your String: %d",i);
        return 0;
}
