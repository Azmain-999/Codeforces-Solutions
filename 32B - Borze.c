#include<stdio.h>
int main()
{
    char c[201];
    int a,b,d;
    scanf("%s",c);
    int length=strlen(c);
    for(int i=0; i<length; i++)
    {

        if(c[i]=='.')
        {
            printf("0");
        }
        else if(c[i]=='-' && c[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(c[i]='-' && c[i+1]=='-')
        {
            printf("2");
            i++;
        }

    }

    return 0;
}
