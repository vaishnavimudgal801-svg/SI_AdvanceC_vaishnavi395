#include<stdio.h>
int main()
{
    int rev,counteven=0,rem,temp;
for(i=0;counteven<10;i++)
{
    rev=0;
    for(temp=i;temp>0;temp=temp/10)
    {
        rem=temp%10;
        rev=rev*10+rem;
    }
    if((rev==i)&&(i%2==0))
    {
        printf("%d",i);
        counteven++;
    }
}
return 0;
}
