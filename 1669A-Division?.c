#include<stdio.h>
int main()
{
    int rating,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&rating);
        if(1900<=rating)
        {
            printf("Division 1\n");
        }
        else if(1600<=rating && rating<=1899)
        {
            printf("Division 2\n");
        }
        else if(1400<=rating && rating<=1599)
        {
            printf("Division 3\n");
        }
        else if(rating<=1399)
        {
            printf("Division 4\n");
        }
    }
    return 0;
}
