#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    char num[7];
    
    for(int i=0;i<n;i++)
    {
        scanf("%s",&num);
        if(num[0]+num[1]+num[2]==num[3]+num[4]+num[5])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
