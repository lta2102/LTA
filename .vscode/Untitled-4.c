#include<stdio.h>
#include<stdlib.h>
typedef struct _listnode {
   int num;
   struct _listnode *next;
} ListNode;
void printList(ListNode *head){
	ListNode *curnode = head;
	if( head==NULL){
		printf("Danh sach lien ket khong co phan tu nao ");
		return;
	}
	while ( curnode->next!=NULL){
		printf("%d ", curnode->num);
		curnode=curnode->next;
	}printf("%d ",curnode->num);
}
ListNode *findNode(ListNode *head, int i) {
   ListNode *cur = head;
   if ((head == NULL) || (i < 0)) {
               printf("Danh sach lien ket rong hoac phan tu tim kiem khong ton tai");
   return NULL;
   }

   while (i > 0 ) {
               cur = cur->next ;
               i = i-1 ;
               if (cur == NULL) {
                           printf("Phan tu tim kiem khong ton tai");
                           return NULL;
               }
   }
   return cur->num;
}
void insertNode(ListNode **pHead, int index, int value){
   ListNode *cur, *newNode;
   if (*pHead == NULL || index == 0 ){
               newNode = malloc(sizeof(ListNode));
               newNode->num = value;
               newNode->next = *pHead ;
               *pHead = newNode ;
   }
   else if ((cur = findNode( *pHead, index-1 )) != NULL){
               newNode = malloc(sizeof(ListNode));
               newNode->num = value;
               newNode->next = cur->next ;
               cur->next =newNode ;
   } else printf("can not insert the new item at index %d!\n", index);
}
int main(){
	ListNode *node0, *node1, *head, *pHead=NULL;
	pHead=&head;
   node0 = malloc(sizeof(ListNode));
   node1 = malloc(sizeof(ListNode));
   node0->num = 20;
   node1->num = 30;
   node0->next =node1;
   node1->next =NULL ;
   head =node0;
   printList(head);
   printf("\n%d",findNode(head,1));
   printf("\n");
   insertNode(pHead, 0, 10);
   printList(head);
}