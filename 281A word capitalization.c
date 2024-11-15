#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    char s[1000];
    scanf("%s",s);
    s[0]=towupper(s[0]);
    printf("%s",s);
    return 0;
}
