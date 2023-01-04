#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter n");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        for (j=n-1;j>i;j--){
                printf(" ");

        }
        for (k=1;k<=2*i+1;k++){
            printf("*");

        }
        printf("\n");
    }

    for (i=n-1;i>=0;i--){
        for (j=i;j<n-1;j++){
            printf(" ");
        }
        for (k=1;k<=2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }




}
