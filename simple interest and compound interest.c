#include<stdio.h>
int main()
{
    float principle,rate,time,si,ci;

    pritf("Enter principle,rate,and time");

    scanf("%f %f %f",&principle,&rate,&time);

    si=(principle*rate*time)/100;

    ci=principle*power(1+rate/100),time)-principle;

    printf("simple interest=&F\n",si);

    printf("compound interest=%f\n",ci);

    return 0;
}


