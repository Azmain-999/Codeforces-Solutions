#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int count1=0;
    int count2=0;

    for(int i=0; s[i]!= '\0'; i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            count1++;
        }
        else
            count2++;
    }
    if(count1>=count2)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
        else
        {
            for (int i = 0; s[i] != '\0'; i++)
            {
                s[i] = toupper(s[i]);
            }
        }
        printf("%s",s);

            return 0;
        }
