#include<stdio.h>
int main()
{
    int n,i,j,l,start,end,a[10][10];
    printf("enter n");
    scanf("%d", &n);
    start=1;
    end=2*n-1;
    l=2*n-1;

    while(n>0){
        for (i=start;i<=end;i++){
            for (j=start;j<=end;j++){
                if (i==start || i==end || j==start || j==end){
                    a[i][j]=n;

                }
            }
        }
        start++;
        end--;
        n--;
    }

    for (i=1;i<=l;i++){
        for (j=1;j<=l;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

