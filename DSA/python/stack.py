#!/user/bin/python3


class Error(Exception):
    class OverFlowError(Exception):
        def __str__(self):
            self.text= "cannot insent element"
            return self.text
    class EmptyError(Exception):
        def __str__(self):
            self.text="nothing to display"
            return self.text
    class UnderFlowerror(Exception):
        def __str__(self):
            self.text="nothing to remove"
            return self.text

            
class Stack:
    def __init__(self):
        self.max_size=int(input("enter the size of your stack: "))
        self.items=[]
        self.top=0
    def Push(self,ele):
            if len(self.items) >= self.max_size:
                raise Error.OverFlowError
            else:
                self.items.append(ele)
                self.top += 1
                print(f"{ele} added to stack")
                return 0
    def display(self):
        if self.top!= 0:
            print("elements are:")
            for i in range(self.top):
                print(self.items[i])
            return 0
        else:
            raise Error.EmptyError
    def Pop(self):
        if self.top == 0:
            raise Error.UnderFlowError
        else:
            print(self.items[self.top-1],"removed from stack")
            self.items.remove(self.items[self.top-1])
            return 0




if __name__ == '__main__':
    s=Stack()
    while True:
        print("press 1 to push\npress 2 to display\npress 3 to pop.")
        opration=int(input())
        if opration==1:
            s.Push(input())
        elif opration==2:
            s.display()
        elif opration==3:
            s.Pop()
        else:
            print("invalid choice")
