#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        char s[100];
        scanf("%s", s);
        if(s[0] == s[2])
        {
            printf("%c=%c\n", s[0], s[2]);
        }
        else if(s[0] > s[2])
        {
            printf("%c>%c\n", s[0], s[2]);
        }
        else
        {
            printf("%c<%c\n", s[0], s[2]);
        }
    }
    return 0;
}

