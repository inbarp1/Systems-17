#include <stdio.h>
#include <string.h>
int try_strncmp(char *str1, char *str2){
  int ans;
  ans = strncmp(str1, str2, 4);
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
int try_strcmp(char *str1, char *str2){
  int ans;
  ans = strcmp(str1, str2);
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
  char str3[]= "ABCDEG";
  printf("now demonstrating strncmp:\n");
   try_strncmp(str1,str2);
   try_strncmp(str2,str3);
   try_strncmp(str2,str2);
   try_strncmp(str2,str1);
   printf("now demonstrating strcmp:\n");
    try_strcmp(str1,str2);
   try_strcmp(str2,str3);
   try_strcmp(str2,str2);
   try_strcmp(str2,str1);
   
   return(0);
}
