#include<stdio.h>
int main()
{
    float celcius,farenheit;

    printf("enter temperature in celcius");

    scanf("%f",&celcius);

    farenhiet=(celcius*9/5)+32;

    printf("%f celcius=%f farenhiet\n,celcius,farenhiet");

    printf("\nenter temperature in farenhiet");

    scanf("%f",&farenhiet);

    celcius=(farenhiet-32)*5/9;

    printf("%f farenhiet=%f celcius\n,farenhiet,celcius");

    return 0;
}


