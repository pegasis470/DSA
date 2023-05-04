# include <iostream>
# define Max_size 5

using namespace std;

class Linear_Queue{
        int queue[Max_size];
        int front=-1;
        int rear=-1;
        public:
                int Enqueue(){
                        int ele;
                        if (rear == Max_size-1){
                                cout<<"OverflowError: Queue is full\n\n";
                                return 1;
                        }
                        else {
                                cout<<"enter element to enqueue:\n";
                                cin>>ele;
                                if (front==-1 && rear==-1)
                                        front++;
                                else
                                        ;
                                rear++;
                                queue[rear]=ele;
                                cout<<ele<<" Added to queue\n";
                                return 0;
                        }
                }
                int Display(){
                        if (front==-1){
                                cout<<"Queue is empty\n";
                                return 1;
                        }
                        else{
                                cout<<"The elements of the queue are\n";
                                for(int i = front; i <=rear; i++){
                                        cout<<queue[i]<<" ";
                                }
                                return 0;
                        }
                }

                int Dequeue(){
                        if (front>rear){
                                cout<<"UnderFlowerror: Queue is empty\n";
                                return 1;
                        }
                        else{
                                cout<<queue[front]<<" Removed from queue\n";
                                front++;
                                return 0;
                        }
                }
	};


int main(){
        Linear_Queue Q;
        int choice;
        int loop=3;
        while(loop==3){
                cout<<"\npress 1 to enqueue \npress 2 to dequeue\npress 3 to display\n";
                cin>>choice;
                if (choice==1){
                        if(Q.Enqueue())
                                break;
                        else
                                choice=0;
                }
                else if (choice==2){
                        if (Q.Dequeue())
                                break;
                        else
                                choice;
                }
                else if(choice == 3) {
                        if (Q.Display())
                                break;
                        else
                                choice;
                }
                else{

                        cout<<"Invalid choice exiting";
                        break;
                }
        }
}
