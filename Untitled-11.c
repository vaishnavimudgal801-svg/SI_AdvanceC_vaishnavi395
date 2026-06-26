#include<stdio.h>
int main()
{
    innt a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a=%d,b=%d\n",a,b)'
    return 0;
}