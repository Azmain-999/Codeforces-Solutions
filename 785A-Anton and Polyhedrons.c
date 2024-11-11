#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[13];
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
         if(strcmp(s,"Tetrahedron")==0)
        {
            count=count+4;
        }
        if(strcmp(s,"Cube")==0)
        {
            count=count+6;

        }
       if(strcmp(s,"Octahedron")==0)
       {
           count=count+8;
       }
       if(strcmp(s,"Dodecahedron")==0)
       {
           count=count+12;
       }
       if(strcmp(s,"Icosahedron")==0)
       {
           count=count+20;
       }
    }
    printf("%d\n",count);
    return 0;

}

