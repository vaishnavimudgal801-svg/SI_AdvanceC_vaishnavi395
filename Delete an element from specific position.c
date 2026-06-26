#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4};
    int size=4;
    int i;
    int pos=1;
    for(i=pos;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("the array with deletion is:\n");
    for(i=0;i<size;i++)
    printf("%d",arr[i]);
return 0;
}