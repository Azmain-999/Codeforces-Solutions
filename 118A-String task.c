#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char s[101];

   scanf("%s",s);

   for(int i=0;s[i] != '\0';i++)
   {
      if( s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u'  || s[i]=='i' || s[i]=='A'  || s[i]=='O'  || s[i]=='Y'  || s[i]=='E'  || s[i]=='U'  || s[i]=='I')
      {
          continue;
      }
    
       printf(".%c", tolower(s[i]));
   }

    return 0;
}
