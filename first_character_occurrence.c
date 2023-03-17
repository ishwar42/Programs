//Prgm to find the first occurrences of character in string
#include <stdio.h>
#include<string.h>
void main(){
    char a[10];
    char c;
    int i,flag=0;
    printf("Enter the string:\n");
    gets(a);
    printf("Enter the character to be found\n");
    scanf("%c",&c);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==c)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%c found in position %d",c,i+1);
    else
        printf("%c not found in string %s",c,a);
}
