#include <stdio.h>
int main() {
    char str[10];
    int i,j,k,l;
    printf("enter string : ");
    scanf("%s",str);
    l=strlen(str);

    for (i=0;i<=l-1;i++){
        for (j=0;j<i;j++){
            printf(".");
        }
        for (k=i;k<=l-1;k++){
            printf("%c",str[k]);
        }
        printf("\n");
    }

}
