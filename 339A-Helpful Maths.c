#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int temp;
     for(int i=0;i<strlen(s);i+=2)
     {
         for(int j=0;j<strlen(s)-1;j+=2)
         {
              if(s[j]>s[j+2])
              {
                  temp=s[j];
                  s[j]=s[j+2];
                  s[j+2]=temp;

              }
         }
     }
     printf("%s",s);
     return 0;
}
