#include <stdio.h>
struct node { int data; struct node *next;};
void print_list(struct node *p){
  while(p->next){ 
    printf("%d \n", p->next->data);
    p=p->next;
  }
}
  

struct node * insert_front(struct node *p, int n){
  struct node *newbie = malloc(sizeof(struct node));
  newbie->data = n;
  newbie->next = p;
  return newbie;
}

struct node * free_list(struct node *p){
  struct node *f = p;
  while(p->next){
    struct node *temp;
    temp = p->next->next;
    free(p->next);
    p->next=temp;
  }
  return f;
}

int  main(){
  struct node tester;
  tester.data = 65756;
  tester.next = 0;
  print_list(&tester);
  tester.next = insert_front(tester.next, 4);
  tester.next = insert_front(tester.next, 3);
  tester.next  = insert_front(tester.next, 2);
  tester.next = insert_front(tester.next, 1);
  printf("printing values:\n");
  print_list(&tester);
  free_list(tester.next);
  printf("after the free:\n");
  print_list(&tester);
  printf("done!\n");
  return 0;
 
}
