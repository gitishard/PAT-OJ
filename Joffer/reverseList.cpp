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
    ListNode* ReverseList(ListNode* pHead) {
        vector<int> tmp;
        ListNode* p = pHead;
        while(p != NULL){
            tmp.push_back(p->val);
            p = p->next;
         }
        int len = tmp.size();
        p = pHead;
        while(len>=0 && p != NULL){
            p->val = tmp[--len];
            p = p->next;
        }
        return pHead;
    }
};
