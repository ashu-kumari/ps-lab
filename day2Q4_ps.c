#include<stdio.h>
void main()
{
    int i,n,j;
    char ch,c='A';
    scanf("%c",&ch);
    for(i='A';i<=ch;i++)
    { c=i;
        for(j='A';j<=i;j++)
        {
            printf("%c",c);
            c++;

        }

        printf("\n");
    }
}

