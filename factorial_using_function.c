# include<stdio.h>
int fact(int n,int k);


void main()
{
   int n,p,k=1;
   printf("enter no:");
   scanf("%d",&n);
   p=fact(n,1);
   printf("factorial is %d",p);
}
int fact(int n,int k)
{
    if(n==0)
        return k;
    else
        return fact(n-1,n*k);
}

