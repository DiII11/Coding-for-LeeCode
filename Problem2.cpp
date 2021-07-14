/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *midresu= new ListNode(-1);
        ListNode *resu=midresu;
        int indicator=0;
        int midval=0;
        int midl1=0,midl2=0;
        while (l1||l2)
            
        {
            midl1=l1 ? (*l1).val:0;
            midl2=l2 ? (*l2).val:0;
            
            midval=midl1 + midl2 + indicator;
            
            (*resu).next = new ListNode(midval%10);
            resu=resu->next;
            indicator=midval/10;
            if (l1) l1=l1->next;
            if (l2) l2=l2->next;
        }
        if (indicator) resu->next= new ListNode(1);
        return midresu->next;
        
        
    }
};