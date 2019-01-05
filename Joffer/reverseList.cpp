/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> ary;
        stack<int> st;
        while(head != NULL){
            st.push(head->val);
            head = head->next;
        }
        while(!st.empty()){
            ary.push_back(st.top());
            st.pop();
        }
        return ary;
    }
};
