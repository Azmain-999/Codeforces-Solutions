#include<stdio.h>
int main()
{
    long long int n,m,a,mat1,mat2;
    scanf("%llu %llu %llu",&n,&m,&a);

    mat1=(m/a);
    if(m%a!=0)
    {
        mat1++;
    }

    mat2=(n/a);
    if(n%a!=0)
    {
        mat2++;
    }

    printf("%llu",mat1*mat2);
    return 0;


}
