#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char n[]="codeforces";
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char s[11];
        int count=0;

        scanf("%s",s);
        for(int j=0; j<10; j++)
        {
            if(n[j] != s[j])
            {
                count++;
            }

        }
        printf("%d\n",count);
    }

    return 0;
}
