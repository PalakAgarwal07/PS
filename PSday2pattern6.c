#include<stdio.h>
void main()
{
    int i,j,k,m,n;
    printf("enter n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
            m=i;
    for (j=n;j>i;j--){
            printf(" ");
}
for (k=1;k<=i;k++){
            printf("%d",m);
            m++;
        }
        m=(i-1)*2;
        for (j=2;j<=i;j++){
            printf("%d",m);
            m--;
        }
        printf("\n");
        }
}
