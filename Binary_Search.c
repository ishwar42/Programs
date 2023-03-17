//Binary Search Prgm
#include<stdio.h>
int main()
{
    int a[10]={10,20,30,40,50};
    int low,mid,high,key;
    scanf("%d",&key);
    low=0;
    high=9;
    mid=(low+high)/2;
    while(low<=high)
    {
        if (a[mid]==key)
        {
            printf("%d found at position %d\n",key,mid+1);
            break;
        }
        else if (a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
            mid=(low+high)/2;
    }
    if (low>high)
        printf("%d not found!!!",key);
    return 0;
}
