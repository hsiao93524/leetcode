# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry = 0
        node = ListNode()
        ret = node
        # for i in range(min(len(l1), len(l2))+1):
        while(True):
            if l1 is None:
                val_1 = 0
            else:
                val_1 = l1.val

            if l2 is None:
                val_2 = 0
            else:
                val_2 = l2.val

            sum = (val_1 + val_2 + carry)
            if sum > 9:
                node.val = sum - 10
                carry = 1
            else:
                node.val = sum
                carry = 0

            l1 = l1 if l1 is None else l1.next
            l2 = l2 if l2 is None else l2.next

            if l1 is None and l2 is None and carry is 0:
                break

            node.next = ListNode()
            node = node.next
                
        return ret

            
        