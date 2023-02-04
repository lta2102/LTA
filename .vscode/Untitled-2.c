#include<stdio.h>
#include<stdlib.h>
typedef struct tree {
    int item;
    struct tree *left;
    struct tree *right;
}AVL;
int max(int a, int b) {
	return (a>b)?a:b;
}
int getheight(AVL *cur) {
	int l,r;
    if(cur==NULL) 
		return -1;
    l=getheight(cur->left);
    r=getheight(cur->right);
	return 1+max(l,r);
	}
void checkAvl(AVL *c){
	int l,r,x;
	l=getheight(c->left);
    r=getheight(c->right);
    printf("%d\n%d",l,r);
    x=abs(l-r);
    if(x>1) printf("\n cay khong can bang.");
    else printf("\ncay can bang.");
}
int main(void) {
    AVL *node1, *node2, *node3, *node4, *node5, *node6;
	node1=malloc(sizeof(AVL));
    node2=malloc(sizeof(AVL));
    node3=malloc(sizeof(AVL));
    node4=malloc(sizeof(AVL));
    node5=malloc(sizeof(AVL));
    node6=malloc(sizeof(AVL));
	node1->item=4;
    node2->item=2;
    node3->item=6;
    node4->item=1;
    node5->item=3;
    node6->item=5;
    node1->left=node2;
    node1->right=node3;
    node2->left=node4;
    node2->right=node5;
    node3->left=node6;
    node3->right=NULL;
    node4->left=NULL;
    node4->right=NULL;
    node5->left=NULL;
    node5->right=NULL;
    node6->left=NULL;
    node6->right=NULL;
    checkAvl(node1);
}

