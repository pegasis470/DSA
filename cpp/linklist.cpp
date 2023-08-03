#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

class LinkList{
	public:
Node * push(Node * head,int val){
	Node *n;
	n=(Node*)malloc(sizeof(Node));
	n->data=val;
	n->next=head->next;
	head=n;
	return head;
}
void print(Node *head){
                Node *p=head->next;
                int count=0;
                while(p!=NULL){
                        cout<<p->data<<'\n';
                        p=p->next;
                }
}


LinkList(Node *head,int size){
	Node *node[size+1];
	head=(Node*)malloc(sizeof(Node));
	int i=0;
	while(i<=size){
		node[i]=(Node*)malloc(sizeof(Node));
		i++;
	}
	i=0;
	while(i<=size){
		if(i<size){
			node[i]->next=node[i+1];
			i++;
		}
		else{
			node[i]->next=NULL;
			break;
		}}
	i=0;
	while(i<=size){
		node[i]->data=i;
		i++;
	}
	head->next=node[0];
	print(head);
}
};
int main(){
	Node *head;
	LinkList one(head,10);
	//one.print(head);
	return 0;
}
