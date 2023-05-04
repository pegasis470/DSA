# include <iostream>
# define Max_size 5
using namespace std;
class Stack {
	int stack[5];
	int top=0;
	public :
		int Push(){
			int ele;
			if(top >= Max_size)
			{
				cout<<"Overflow Error: Stack is full \n\n";
				return 1;
			}
			else{
				cout<<"enter element to push \n\n";
				cin >> ele;
				stack[top]= ele;
				top += 1;
				cout<<stack[top-1]<<" Added to stack \n\n";
				return 0;
			}
		}
		int Pop(){
			if (top == 0)
			{
				cout<<"UnderFlow Error: Stack is empty\n\n";
				return 1;}
			else{
				cout<<stack[top-1]<<" popped\n\n";
				//stack[top]=0;
				top -= 1;
				return 0;
			}
		}
		int Peek(){
			if (top ==0){
				cout<<"Stack is empty\n\n";
				return 0;
				}
			else {
				cout<<stack[top-1]<<" is on top\n\n";
				return 0;
			}
		}
};

int main(){
	Stack s;
	int choice;
	int loop=3;
	while(loop==3){
		cout<<"press 1 to push \npress 2 to pop \npress 3 to peek\n";
		cin>>choice;
		if(choice==1){
			if (s.Push())
				break;
			else
				choice=0;
		}
		else if (choice==2){
			if(s.Pop())
				break;
			else
				choice=0;
		}
		else if (choice==3)
			s.Peek();
		else{
			cout<<"invalid choice exiting\n";
			break;
		}
	}
}


		

