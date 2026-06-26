#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        int maxsum=a[0];
        int currsum=a[0];
        for(int i=1;i<n;i++)
        if(currsum+a[i]>a[i])
        {
            currsum=currsum+a[i];
        
        }
        else
        {
            currsum=a[i];
        }
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }

    }
    printf("the maximumsum is %d",maxsum);
    return 0;
    }
}
