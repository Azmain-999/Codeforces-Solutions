#include<Stdio.h>
int main()
{
    int n,p,q;
    scanf("%d",&n);
    int count=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);

        if(q-p>=2)
        {

         count++;
        }
       
    }
     printf("%d\n",count);
    return 0;
}
