#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char c[4];
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&c);
        if(strcmp(c,"X++")==0 || strcmp(c,"++X")==0)
        {
            count++;
        }
        else if(strcmp(c,"X--")==0 || strcmp(c,"--X")==0)
        {
            count--;
        }

    }
    printf("\n%d",count);
    return 0;
}
