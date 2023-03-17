//Program to find sum of odd and even numbers seperately
#include<stdio.h>
void main()
{
    int a[10],even=0,odd=0;
    printf("Enter the numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even+=a[i];
        else
            odd+=a[i];
    }
    printf("Even Sum is:%d\n",even);
    printf("Odd Sum is:%d\n",odd);
    
}
