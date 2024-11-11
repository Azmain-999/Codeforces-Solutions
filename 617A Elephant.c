#include<stdio.h>
int main()
{
    int x,steps;
    scanf("%d",&steps);
    if(steps<=5)
    {

        printf("1");
    }
    else if(steps%5==0)
    {
        x=steps/5;
        
        printf("%d",x);


    }
    else if(steps%5!=0)
    {
        x=steps/5;
        x++;
        printf("%d",x);
    }
    return 0;

}
