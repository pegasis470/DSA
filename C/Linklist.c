#include<stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node * push(struct node *head,int data);
struct node * pop(struct node *head);
void print_list(struct node *head);
struct node *head;


int main(){
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	struct node *four=NULL;
	one=malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));
	four = malloc(sizeof(struct node));
	one->data=1;
	two->data=2;
	three->data=3;
	four->data=4;
	head=one;
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=NULL;
	print_list(head);
	printf("enter value to push: ");
	int val;
	scanf("%d",&val);
	head=push(head,val);
	print_list(head);
	head=pop(head);
	print_list(head);
	return 0;
}
void print_list(struct node *head){
	struct node *p=head;
	while(p!=NULL){
	printf("%d\n",p->data);
	p=p->next;
	}	
}

struct node * push(struct node *head,int data){
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=data;
	new->next=head;
	head=new;
	return head;
}

struct node * pop(struct node *head){
	struct node *pop_node;
	pop_node=head;
	head=head->next;
	printf("%d poped\n",pop_node->data);
	free(pop_node);
	return head;
}

