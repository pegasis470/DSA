#!/usr/bin/python3

from stack import Error 
class Queue:
    def __init__(self):
        self.Max_size=int(input("enter the size of your queue "))
        self.items=[]
        self.front=-1
        self.rear=-1
    def Enqueue(self,ele):
        if len(self.items)>=self.Max_size:
            raise Error.OverFlowError
        else:
            if self.front==-1 and self.rear==-1:
                self.items.append(ele)
                self.front=0
                self.rear=0
                print(f"{ele} added to queue")
                return 0
            else:
                self.items.insert(self.rear,ele)
                self.front += 1
                print(f"{ele} added to queue")
                return 0
    def Display(self):
        print("the elements of the queue are:")
        for i in self.items:
            print(i)
    def Dequeue(self):
        if self.front==-1:
            raise Error.UnderFlowerror
        else:
            print(self.items[self.front],"removed from queue")
            self.items.remove(self.items[self.front])
            self.front -= 1
            return 0

if __name__ == '__main__':
    Q=Queue()
    while True:
        print("press 1 to enqueue\npress 2 to dequeue\npress 3 to display\n")
        choice=int(input())
        if choice==1:
            Q.Enqueue(input("enter Element to enqueue: "))
        elif choice == 2:
            Q.Dequeue()
        elif choice == 3:
            Q.Display()
        else:
            print("invalid choice exiting")
            break
