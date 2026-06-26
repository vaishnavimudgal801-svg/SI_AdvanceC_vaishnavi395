#include<stdio.h>
int main()
{
    int num=7600043;
    int rem,rm,lm,sumi=0,sumo=0,temp,num;
    rm=num%10;
    for(int temp=num%10;temp>9;temp=temp/10)
    {
        rem=temp%10;
        sumi=sumi+rem;
    }
    lm=temp%10;
    sumo=rm+lm;
    if(sumi==sumo)
    {
        printf("%d is a xylem number",num)
    }
    return 0;
}
