#include<stdio.h>
int main()
{
    int n,k;

    scanf("%d %d",&n,&k);
    int a[100];
    int count=0;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]>=a[k-1] && a[j]>0)
        {
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}
