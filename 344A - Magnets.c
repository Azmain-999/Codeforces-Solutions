#include<stdio.h>
#include<math.h>
int main()
{
    int t;

    int count=0;
    scanf("%d",&t);
    int n[t];
    for(int i=0;i<t;i++)
    {

        scanf("%d",&n[i]);
    }
    for (int i=0,j=0;i<t;i++,j++)
    {
        if(n[i]!=n[j+1])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}
