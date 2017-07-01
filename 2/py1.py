# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        list1 = 0
        list2 = 0
        flag1 = 0
        flag2 = 0
        while 1:
            list1 += l1.val * (10 ** flag1)
            if(l1.next == None):
                break
            l1 = l1.next
            flag1 += 1

        while 1:
            list2 += l2.val * (10 ** flag2)
            if(l2.next == None):
                break
            l2 = l2.next
            flag2 += 1

        result = list1 + list2
        print(result)
        results = ListNode(0)
        fresult = results
        while (result != 0):
            results.val = result % 10
            result = int(result / 10)
            if result == 0:
                break
            l3 = ListNode(0)
            results.next = l3
            results = l3
        return fresult


        
