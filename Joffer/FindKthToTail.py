# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def FindKthToTail(self, head, k):
        rst = []
        while head:
            rst.append(head)
            head = head.next
        if k < 1 or k > len(rst):
            return None
        return rst[-k]
