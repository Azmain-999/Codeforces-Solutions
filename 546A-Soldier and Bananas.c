#include<stdio.h>
int main()
{
    int k,n,w,c,ans;
    scanf("%d %d %d",&k,&n,&w);
    c=((w*(w+1)/2))*k;
    ans=(c-n);
   if(ans>0)
   {
       printf("%d",ans);
   }
   else
   {
     printf("0");
   }
    return 0;

}
