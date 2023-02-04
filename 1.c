#include<stdio.h>
#include<stdlib.h>
typedef struct _listnode{
   int num;
   struct _listnode*next;
} ListNode;
void printList(ListNode *head){
   ListNode * currentnode = head;
   if( head == NULL){
      printf(" Danh sach k co");
      return;
   }
   while(currentnode->next!=NULL){
      printf("%d\n",currentnode->num);
      currentnode=currentnode->next;
   }printf("%d ",currentnode->num);
}
   int main(){
      ListNode *node0, *node1, *head;
      node0=malloc(sizeof(ListNode));
      node1=malloc(sizeof(ListNode));
   node0->num = 20;
   node1->num = 30;
   node0->next = node1 ;
   node1->next = NULL ;
   head = node0 ;
   printList(head);
   }