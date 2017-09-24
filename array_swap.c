#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int print_array(int[] the_array){
  int i = 0;
  while(i<10){
    printf("arr[%d]: %d \n",i, the_array[i]);
    i++;
  }
}
int main(){
  int a[10];
  int i = 0;
  while( i <9){
    srand(time(NULL));
    srand(1000);
    a[i]=rand();
    i++;
  }
  a[9]=0;
  printf("The orginal array:\n")
  print_array(a);
  //first array
  //int b[10];
//  i=0;
//  while (i<10){
  //  b[i]=
//  }


}
