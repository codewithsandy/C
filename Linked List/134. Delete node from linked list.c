/* 134. Program to delete a node for a given element from linked list. */

#include <stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

int main(void)
{
  Node*temp;
  Node*start=NULL;
  Node* p=NULL;
  
  int n;
  scanf("%d",&n);

  while(n--)
  {
     temp=(Node *)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(start==NULL)
    {
      start=temp;
      p=temp;
    } 
     else
    {  
      p->next=temp;
      p=temp;
    }
  }

printf("Element to delete : ");
int ele; scanf("%d",&ele); printf("%d\n",ele);
Node*prev=start;
Node*cur=start;

while(cur!=NULL)
{   
  if(start->data==ele)
  {
    start=start->next;
  }
  
  if(cur->data==ele)
  {
    prev->next=cur->next;
    free(cur);
    break;
  }
  prev=cur;
  cur=cur->next;

  if(cur==NULL)
  {
    printf("Element doesn't exist!");
    exit(0);
  }
}
  
  while(start!=NULL)
  {
    if(start->next!=NULL) 
      printf("%d->",start->data);
    else
      printf("%d",start->data);

    start=start->next;
  }

  return 0;
}