#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int wonanton=0,wondanik=0;
    scanf("%d",&n);
char s[100001];
 scanf("%s",s);
    for(int i=0;i<n;i++)
    {
 
        if(s[i]=='A')
        {
            wonanton++;
        }
        else if(s[i]=='D')
        {
            wondanik++;
        }
 
    }
    if(wonanton>wondanik)
    {
        printf("Anton");
    }
    else if(wonanton<wondanik)
    {
        printf("Danik");
    }
    else if(wondanik==wonanton)
    {
        printf("Friendship");
    }
    return 0;
}
