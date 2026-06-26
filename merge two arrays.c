#include,stdio,h>
int main()
{
    int arr1[3]={2,4,6};
    int arr2[3]={5,8,7};
    int arr3[10];
    int i,j;
    for(int i=0;i<3;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<3;i++)
    {
        arr3[i+3]=arr2[i];
    }
    for(int i=0;i<6;i++)
    {
        printf("%d",arr3[i]);
    }
    return 0;
}