#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char s[101];
  scanf("%s",s);

  int x;
  x=strlen(s);

   qsort(s,x, sizeof(char), (int (*)(const void *, const void *))strcmp);

   int ans=0;
    for(int i=1;i<x;i++)
    {
        if(s[i]!=s[i-1])

            ans++;


    }

  if(ans & 1 )
  {
      printf("CHAT WITH HER!");
  }
  else
  {
      printf("IGNORE HIM!");
  }
  return 0;

}
