#include<stdio.h>
#include <stdlib.h>
#include <time.h>
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
  for(int x= 0; x<10; x++){
    printf("arr[%d]: %d \n",i, a[x]);
  }
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
  for(int x= 0; x<10; x++){
    printf("arr2[%d]: %d \n",i, b[x]);
  }
  //secondarray
return 0;

}
