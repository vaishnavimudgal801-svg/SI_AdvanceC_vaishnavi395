#include<stdio,h>
int main()
{
    int n=5;
    int a[]={1,2,4,5};
int sum=0;
int total=0;
int i;
for(i=1;i<6;i++)
{
total=total+i;
}
for(i=0;i<n-1;i++)
{
    sum=sum+a[i];
}
int m;
m=total-sum;
printf("the missing number from the array is %d ",m);
return 0;
}

