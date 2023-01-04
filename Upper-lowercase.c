#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i;
    printf("Enter a string : ");
    gets(s);
    if(s[i] >= 'a' && s[i] <= 'z'){
   for (i = 0; s[i]!='\0'; i++)
    {
         s[i] = s[i] - 32;
    }
    printf("\nString in Upper Case = %s", s);}
    else
{
    for (i = 0; s[i]!='\0'; i++)
        s[i] = s[i] + 32;
    printf("\nString in lower Case = %s", s);}
    return 0;
}
