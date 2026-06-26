#include<stdio.h>
int main()
{
    int divident=24578909;
    int rem,count=0;
    for(int temp=divident;temp>0;temp=temp/10)
    {
        count++;
        rem=temp%10;
        if(count%2!=0)
        {
            printf("odd digit=%d\n",rem);
        }
    }
    return 0;
}



