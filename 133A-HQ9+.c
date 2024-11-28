#include<stdio.h>
#include<string.h>
int main()
{
    char p[101];
    scanf("%s",p);
    int len=strlen(p);
    for(int i=0; i<len; i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
