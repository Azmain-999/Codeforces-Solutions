
#include<stdio.h>
#include<string.h>
int main()
{

    char s[101],t[101];
    int r;
    while(scanf("%s%s",s,t)!=EOF)
    {

        r=strcmp(s,strrev(t));
        if(r==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
