#include<stdio.h>
int main()
{
    int t;
 
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        int x[n+1];
 
        for(int j=0;j<=n;j++)
        {
            x[j]=0;
        }
        for(int j=0;j<n;j++)
        {
            x[a[j]]++;
        }
            int count=0;
        for(int j=1;j<=n;j++)
        {
            count+=x[j]/2;
        }
        printf("%d\n",count);
    }
    return 0;
 
}
