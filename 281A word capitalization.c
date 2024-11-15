#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    char s[1000];
    scanf("%s",s);
    s[0]=towupper(s[0]);
    /*if(s[0]>=97 && s[0]<=122)
    {
      k=s[0]-32;
      s[0]=char k;
    }*/
    printf("%s",s);
    return 0;
}
