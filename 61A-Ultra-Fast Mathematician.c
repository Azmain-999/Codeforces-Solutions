#include<stdio.h>
#include<string.h>
int main()
{
    char num1[101],num2[101];
    scanf("%s",num1);
    scanf("%s",num2);
    for(int i=0; i<strlen(num1); i++)
    {
        if(num1[i]==num2[i])
        {
          num1[i]='0';
        }
        else
        {
            num1[i]='1';
        }
    }
    printf("%s",num1);
    return 0;

}
