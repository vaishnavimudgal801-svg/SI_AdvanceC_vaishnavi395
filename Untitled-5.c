#include<stdio.h>
#incude<math.h>
int main()
{
    int n=245688765,count=0,rem,sum=0;
    for(int temp=n;temp>0;temp=temp/10)
    {
        count++;
        printf("\n%d",count);
    }
    for(int temp1=n;temp1=0;temp1=temp1/10)
    {
        rem=temp%10;
        sum=sum+power;
    }
    if(sum==n)
    {
        printf("nuber%d is an armstrong number",n);
    }
    return 0;
}



