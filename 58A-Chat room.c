#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int x;
    int l=0;
    x=strlen(s);
    for(int i=0; i<x; i++)
    {
        if (s[i]=='h' && l==0)
        {
            l++;
        }

        else if (s[i]=='e' && l==1)
        {
            l++;
        }

        else if (s[i]=='l' && l==2)
        {
            l++;
        }

        else if (s[i]=='l' && l==3)
        {
            l++;
        }

        else if (s[i]=='o' && l==4)
        {
            l++;
        }

        if (l==5)
        {
            break;
        }
    }

    if (l==5) printf("YES\n");

    else printf("NO\n");

    return 0;

}
