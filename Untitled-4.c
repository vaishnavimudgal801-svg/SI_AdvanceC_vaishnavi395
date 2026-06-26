#include<stdio.h>
int main()
{
    int count=0;
    int num=100;
    int sum=0;
    printf("the first 15 xylem number are \n");
    while(count<15)
    {
        int temp=num;
        int extreme_sum=0;
        int mean_sum=0;
        extreme_sum=extreme_sum+temp%10;
        temp=temp/10;
        while(temp>9)
        {
            mean_sum=mean_sum+temp%10;
            temp=temp/10;
        }
        extreme_sum=extreme_sum+temp;
        if(extreme_sum==mean_sum)
        {
            printf("%d",num);
            sum=sum+num;
            count++;
        }
        num++;
    }
    printf("\n\n sum of the first 15 xylem number is %d\n",sum);
    return 0;
}


