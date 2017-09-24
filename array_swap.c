#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int print_array(int ar[10]){
  int i = 0;
  while(i<10){
    printf("ar[%d]: %d \n",i, ar[i]);
    i++;
  }
  return 0;
}
int main(){
  int a[10];
  int i = 0;
  while( i <9){
    srand(time(NULL));
    srand(i);
    a[i]=rand();
    i++;
  }
  a[9]=0;
  printf("The orginal array:\n");
  print_array(a);
  //first array
  int b[10];
  i=0;
  int *point;
  while (i<10){
    point = &a[9-i];
    b[i]= *point;
    i++;
  }
  printf("The second array:\n");
  print_array(b);
return 0;

}
