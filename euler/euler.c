#include <stdio.h>
//Problem 1
//should return the sum of all
//the multiples of 3 or 5 below 1000
int m3and5(){
  int answer = 0;
  int current =0;
  while (current < 1000){
    //printf("current: %d \n", current);
    if(current%3 ==0){
      answer+=current;
    }
    else{
      if(current%5==0){
        answer+=current;
      }
      //printf( "answer is  %d \n", answer);
    }
    current++;
    
  }
  return answer;
}
//should be 232,168


//Problem 5
//should return the smallest positive number
//that is evenly divisible by all of the
//numbers from 1 to 20

int smallestMultiple(){
  int zi = 1;
  while(1){
    if(zi%11==0 && zi%12==0 && zi%13==0 && zi%14==0 && zi%15==0 && zi%16==0 && zi%17==0 && zi%18==0 && zi%19==0&& zi%20==0){
      return zi;
    }
    zi++;
  }
  return 0;
}


//Problem 6
//should return the difference between the sum
//of the swares of the first one hundred natural
//numbers and the square of the sum
int sumSquareDifference(){
  int n1 =0;
  int n2 =0;
  int n=1;
  while(n < 101){
    n1+= n*n;
    n2+= n;
    n++;
  }
  return n2*n2 -n1;
}
     

int main(){
  printf( "Problem 1: %d \n", m3and5());
  printf( "Problem 5: %d \n", smallestMultiple());
  printf( "Problem 6: %d \n", sumSquareDifference());
}
