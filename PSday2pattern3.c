#include<stdio.h>
void main(){
    int i,j,n,m=65;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for (j=0;j<=i;j++){
            printf("%c",m);
        }
        m++;
        printf("\n");
    }
}
