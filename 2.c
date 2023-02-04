#include<stdio.h>
#include<stdlib.h>

typedef struct _listnode {
    int num;
    struct _listnode *next;
} ListNode;
void printList(ListNode *head) {
    ListNode *curr = head;	  
	printf("%d ", head->num);
	while (curr->next!=NULL){
        curr=curr->next;
		printf("%d ",curr->num);
        }
}
int main() {
    int i, n;
	ListNode *head, *currentnode;
	scanf("%d",&n);
	currentnode = malloc(sizeof(ListNode));
	head=currentnode;
	for(i=1 ;i<n; i++) {
		scanf("%d",&currentnode->num);
		currentnode->next = malloc(sizeof(ListNode));
		currentnode=currentnode->next;
		}
		scanf("%d",&currentnode->num);
		currentnode->next=NULL;
		printList(head);
		}