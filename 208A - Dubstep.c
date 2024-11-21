#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    scanf("%s",s);
    int length=strlen(s);
    int printedSpace = 0;
    for(int i=0; i<length; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(printedSpace == 1)
            {
                continue;
            }
            printf(" ");
            printedSpace = 1;
        }
        else
        {
            printf("%c",s[i]);
            printedSpace = 0;
        }
    }
    return 0;

}
