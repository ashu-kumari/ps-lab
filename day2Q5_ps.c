#include<stdio.h>
void main()
{
    char i,n,j;
    char ch,c='A';
    scanf("%c",&ch);
    for(i=ch;i>='A';i--)
    {
        for(j=i;j<=ch;j++)
        {
            printf("%c",j);

        }

        printf("\n");
    }
}

