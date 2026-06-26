#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int user,computer;
    srand(time(NULL));
    printf("**ROCK PAPER SCISSORS**");
    printf("\n1.Rock");
    printf("\n2.Paper");
    printf("\n3.Scissor");
    printf("\nEnter your choice(1-3):");
    scanf("%d",&user);
    printf("case invalid");
    exit(0);
}
computer=rand()%3+1;
printf("\nYour choice:");
if(user==1)
{
    printf("Rock");
}
else if(user==2)
{
    printf("Paper");
}
else
{
    printf("scissors");
}
printf(\n);
if(user==computer)
{
    printf("Match Draws");
}
else if(user==1 && computer==3)||(user==3 && computer==2)
{
    printf("You Win!");
}
else
{
    printf("Computer Wins!");
}
return 0;
}