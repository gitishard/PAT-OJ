/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1 == NULL)
            return pHead2;
        else if(pHead2 == NULL)
            return pHead1;
        
        ListNode* C = NULL;
        ListNode* p = NULL;
        while(pHead1 && pHead2){
            if(pHead1->val <= pHead2->val){
                if(C == NULL)
                    C = p = pHead1;
                else {
                    p->next = pHead1;
                    p = p->next;
                }
                pHead1 = pHead1->next;
            } else {
                if(C == NULL)
                    C = p = pHead2;
                else {
                    p->next = pHead2;
                    p = p->next;
                }
                pHead2 = pHead2->next;
            }
        }
        if(pHead1 != NULL)
            p->next = pHead1;
        if(pHead2 != NULL)
            p->next = pHead2;
        return C;
    }
};
