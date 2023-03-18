//Program to print string reverse order
#include <stdio.h>
#include<string.h>
void main()
{
    int n,i,j=0;
    char s[50],t[50];
    printf("Enter the string:\n");
    scanf("%d",&n);
    scanf("%s",s);
    int a=strlen(s);
    for(i=a-1;i>=0;i--)
    {
        t[j]=s[i];
        j++;
    }
    printf("Reversed string of %s is:\n%s",s,t);
}
