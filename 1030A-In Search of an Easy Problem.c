#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;

    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        count=count+x;
    }
    if(count)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }

    return 0;
}
