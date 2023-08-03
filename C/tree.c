#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *left, *right;
};

void print_tree(struct node *root);

void main(){
	struct node *root,*l1,*r1,*l11,*l12,*r11,*r12;
	root=malloc(sizeof(struct node));
	l1=malloc(sizeof(struct node));
	r1=malloc(sizeof(struct node));
	l11=malloc(sizeof(struct node));
	l12=malloc(sizeof(struct node));
	r11=malloc(sizeof(struct node));
	r12=malloc(sizeof(struct node));
	root->data=1;
	root->left=l1;
	root->right=r1;
	l1->data=2;
	l11->data=3;
	l12->data=4;
	r1->data=5;
	r11->data=6;
	r12->data=7;
	l1->left=l11;
	l11->left=NULL;
	l12->left=NULL;
	l11->right=NULL;
        l12->right=NULL;
	r11->left=NULL;
        r12->left=NULL;
	r11->right=NULL;
        r12->right=NULL;
	l1->right=l12;
	r1->left=r11;
	r1->right=r12;
	print_tree(root);

}

void print_tree(struct node *root){
	struct node *temp;
	temp=root;
	while(temp !=NULL){
		printf("%d\n",temp->data);
		temp=temp->left;
	}
	while (temp != NULL){
		printf("%d\n",temp->data);
                temp=temp->right;
	}
}
