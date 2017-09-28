#include <stdio.h>
#include <string.h>
int decide(char *str1, char *str2){
  int ans;
  ans = strncmp(str1, str2, 5);
  if(ans < 0)
   {
     printf("%s is less than %s\n",str1,str2);
   }
   else if(ans > 0) 
   {
      printf("%s is greater than %s\n",str1,str2);
   }
   else 
   {
     printf("%s is equal to %s\n",str1,str2);
   }
  return 0;
}
int main ()
{
  char str1[]="abcdef";
   char str2[]="ABCDEF";
   decide(str1,str2);
   decide(str1,str1);
   decide(str2,str1);
   return(0);
}
