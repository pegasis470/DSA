class ListNode(object):
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        list1=[]
        list2=[]
        while True:
            list1.append(l1.val)
            if l1.next==None:
                break
            l1=l1.next
        while True:
            list2.append(l2.val)
            if l2.next==None:
                break
            l2=l2.next
        str_num1=''
        list1.reverse()
        for i in list1:
            str_num1=str_num1+str(i)
        str_num2=''
        list2.reverse()
        for j in list2:
            str_num2=str_num2+str(j)
        num1=int(str_num1)
        num2=int(str_num2)
        result=num1+num2
        result_list=[]
        dummyHead = ListNode(0)
        curr = dummyHead
        for x in str(result):
            result_list.append(int(x))
        result_list.reverse()
        for z in result_list:
            newNode = ListNode(z)
            curr.next = newNode
            curr = newNode
        return dummyHead.next
